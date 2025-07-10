#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
STC8Gxxx.h to SDCC Compatible Header Converter
将STC8Gxxx.h转换为SDCC兼容的头文件

This script converts Keil C51 syntax to SDCC syntax:
- sfr declarations: sfr P0 = 0x80; -> __sfr __at (0x80) P0;
- sbit declarations: sbit P00 = P0^0; -> __sbit __at (0x80) P00;
- xdata declarations: *(unsigned char volatile xdata *) -> *(volatile __xdata unsigned char *)
"""

import re
import sys
import os
import argparse

def convert_sfr_declarations(content):
    """
    Convert sfr declarations from Keil to SDCC format
    转换sfr声明从Keil格式到SDCC格式
    """
    # Pattern: sfr REGISTER_NAME = 0xADDRESS;
    pattern = r'sfr\s+(\w+)\s*=\s*(0x[0-9A-Fa-f]+)\s*;'
    replacement = r'__sfr __at(\2) \1;'
    return re.sub(pattern, replacement, content)

def extract_register_addresses(content):
    """
    Extract register addresses from header file content
    从头文件内容中提取寄存器地址
    """
    import re
    
    register_addresses = {}
    
    # Pattern to match sfr declarations like: sfr P0 = 0x80; or __sfr __at(0x80) P0;
    sfr_patterns = [
        r'(?:__)?sfr\s+(?:__at\(0x([0-9A-Fa-f]+)\)\s+)?(\w+)(?:\s*=\s*0x([0-9A-Fa-f]+))?\s*;',
        r'#define\s+(\w+)\s+0x([0-9A-Fa-f]+)\s*(?://.*bit-addressable|//.*位寻址)?'
    ]
    
    for pattern in sfr_patterns:
        matches = re.finditer(pattern, content, re.IGNORECASE)
        for match in matches:
            if len(match.groups()) == 3:  # sfr pattern
                addr1, name, addr2 = match.groups()
                addr = addr1 if addr1 else addr2
                if addr and name:
                    register_addresses[name] = int(addr, 16)
            elif len(match.groups()) == 2:  # define pattern
                name, addr = match.groups()
                if addr:
                    register_addresses[name] = int(addr, 16)
    
    # Add common bit-addressable registers if not found
    default_addresses = {
        'P0': 0x80, 'P1': 0x90, 'P2': 0xA0, 'P3': 0xB0, 'P4': 0xC0, 'P5': 0xC8,
        'P6': 0xE8, 'P7': 0xF8, 'PSW': 0xD0, 'ACC': 0xE0, 'B': 0xF0, 'IP': 0xB8,
        'IE': 0xA8, 'SCON': 0x98, 'TCON': 0x88, 'T2CON': 0xC8, 'CCON': 0xD8
    }
    
    for name, addr in default_addresses.items():
        if name not in register_addresses:
            register_addresses[name] = addr
    
    return register_addresses

def extract_include_files(content):
    """
    Extract include file paths from source content
    从源文件内容中提取包含的头文件路径
    """
    import re
    import os
    
    include_files = []
    
    # Pattern to match #include statements
    include_patterns = [
        r'#include\s*["<]([^\s">]+)[>"]',  # #include "file.h" or #include <file.h>
        r'#include\s+([^\s]+)'  # #include file.h
    ]
    
    for pattern in include_patterns:
        matches = re.finditer(pattern, content, re.IGNORECASE)
        for match in matches:
            include_file = match.group(1)
            include_files.append(include_file)
    
    return include_files

def scan_register_addresses_from_includes(base_dir, include_files):
    """
    Scan register addresses from included header files
    从包含的头文件中扫描寄存器地址
    """
    import os
    
    register_addresses = {}
    
    for include_file in include_files:
        # Try to find the include file in current directory or common paths
        possible_paths = [
            os.path.join(base_dir, include_file),
            os.path.join(base_dir, '..', include_file),
            include_file  # absolute path
        ]
        
        for file_path in possible_paths:
            if os.path.exists(file_path):
                try:
                    print(f"Scanning include file: {file_path}")
                    print(f"扫描包含文件: {file_path}")
                    
                    with open(file_path, 'r', encoding='utf-8') as f:
                        include_content = f.read()
                    
                    # Extract register addresses from this include file
                    include_addresses = extract_register_addresses(include_content)
                    register_addresses.update(include_addresses)
                    
                    break  # Found the file, no need to try other paths
                except Exception as e:
                    print(f"Warning: Failed to read include file {file_path}: {e}")
                    print(f"警告: 读取包含文件 {file_path} 失败: {e}")
    
    return register_addresses

def convert_sbit_declarations(content, base_dir="."):
    """
    Convert sbit declarations to SDCC format
    转换sbit声明为SDCC格式
    """
    import re
    import os
    
    # Extract register addresses from the content itself
    register_addresses = extract_register_addresses(content)
    
    # If no register addresses found in current file, scan include files
    if not register_addresses or len(register_addresses) <= 17:  # Only default registers
        print("No sufficient register addresses found in current file, scanning include files...")
        print("当前文件中未找到足够的寄存器地址，扫描包含文件...")
        
        include_files = extract_include_files(content)
        if include_files:
            print(f"Found include files: {include_files}")
            print(f"找到包含文件: {include_files}")
            
            include_addresses = scan_register_addresses_from_includes(base_dir, include_files)
            register_addresses.update(include_addresses)
    
    # Print extracted register addresses for debugging
    print("\nFinal register addresses:")
    print("最终寄存器地址:")
    for name, addr in sorted(register_addresses.items()):
        print(f"  {name}: 0x{addr:02X}")
    
    def sbit_replacement(match):
        name = match.group(1)
        register = match.group(2)
        bit = int(match.group(3))
        
        if register in register_addresses:
            # Calculate bit address: base_address + bit_number
            bit_address = register_addresses[register] + bit
            return f'__sbit __at(0x{bit_address:02X}) {name};'
        else:
            # Fallback to original format if register not found
            return f'__sbit __at({register}^{bit}) {name};'
    
    def already_converted_sbit_replacement(match):
        name = match.group(1)
        register = match.group(2)
        bit = int(match.group(3))
        
        if register in register_addresses:
            # Calculate bit address: base_address + bit_number
            bit_address = register_addresses[register] + bit
            return f'__sbit __at(0x{bit_address:02X}) {name};'
        else:
            # Fallback to original format if register not found
            return f'__sbit __at({register}^{bit}) {name};'
    
    # Pattern to match sbit declarations like: sbit P00 = P0^0;
    sbit_pattern = r'sbit\s+(\w+)\s*=\s*(\w+)\^(\d+)\s*;'
    content = re.sub(sbit_pattern, sbit_replacement, content)
    
    # Pattern to match already converted but incomplete sbit declarations like: __sbit __at(CCON^0) CCF0;
    already_converted_pattern = r'__sbit\s+__at\((\w+)\^(\d+)\)\s+(\w+);'
    def fix_converted_sbit(match):
        register = match.group(1)
        bit = int(match.group(2))
        name = match.group(3)
        
        if register in register_addresses:
            # Calculate bit address: base_address + bit_number
            bit_address = register_addresses[register] + bit
            return f'__sbit __at(0x{bit_address:02X}) {name};'
        else:
            # Keep original if register not found
            return match.group(0)
    
    content = re.sub(already_converted_pattern, fix_converted_sbit, content)
    return content

def convert_xdata_declarations(content):
    """
    Convert xdata declarations from Keil to SDCC format
    转换xdata声明从Keil格式到SDCC格式
    """
    import re
    
    # Pattern to match xdata declarations like: #define REGISTER (*(volatile unsigned char xdata *)0xFD00)
    xdata_pattern = r'#define\s+(\w+)\s+\(\*\(volatile\s+(unsigned\s+\w+)\s+xdata\s*\*\)\s*(0x[0-9A-Fa-f]+)\)'
    
    def xdata_replacement(match):
        name = match.group(1)
        data_type = match.group(2)
        address = match.group(3)
        return f'#define {name} (*(volatile __xdata {data_type} *){address})'
    
    content = re.sub(xdata_pattern, xdata_replacement, content)
    
    # Pattern: #define REGISTER_NAME (*(unsigned char volatile xdata *)0xADDRESS)
    # or: #define REGISTER_NAME (*(unsigned int volatile xdata *)0xADDRESS)
    pattern1 = r'#define\s+(\w+)\s+\(\*\(unsigned\s+(char|int)\s+volatile\s+xdata\s+\*\)\s*(0x[0-9A-Fa-f]+)\)'
    replacement1 = r'#define \1 (*(volatile __xdata unsigned \2 *)\3)'
    content = re.sub(pattern1, replacement1, content)
    
    return content

def add_header_and_includes(content):
    """
    Replace original header with SDCC-specific header and includes
    替换原有头文件为SDCC特定的头文件和包含
    """
    import re

    # 替换不兼容的头文件为SDCC兼容头文件
    content = re.sub(r'#include\s*<intrins\.h>', '#include <8051.h> // SDCC compatibility header', content)
    
    # 替换 bit 类型声明为 SDCC 兼容的 __bit 语法
    content = re.sub(r'\bbit\s+', '__bit ', content)
    
    # 替换 _nop_() 为 SDCC 内联汇编语法
    content = re.sub(r'_nop_\(\)', '__asm NOP __endasm', content)
    
    # 处理NOP宏定义中的逗号操作符，将其转换为SDCC兼容的do-while结构
    # 例如: #define NOP2() NOP1(),NOP1() -> #define NOP2() do{NOP1();NOP1();}while(0)
    def convert_nop_macro(match):
        macro_name = match.group(1)
        macro_body = match.group(2)
        # 将逗号分隔的NOP调用转换为分号分隔的语句
        statements = [stmt.strip() for stmt in macro_body.split(',')]
        if len(statements) > 1:
            # 多个语句，使用do-while结构
            statements_with_semicolon = [stmt + ';' for stmt in statements]
            new_body = 'do{' + ''.join(statements_with_semicolon) + '}while(0)'
            return f'#define {macro_name} {new_body}'
        else:
            # 单个语句，保持原样
            return match.group(0)
    
    # 匹配NOP宏定义模式
    nop_macro_pattern = r'#define\s+(NOP\d+\(\))\s+(.+)'
    content = re.sub(nop_macro_pattern, convert_nop_macro, content)
    
    return content

def convert_interrupt_syntax(content):
    """
    Convert interrupt function syntax from Keil to SDCC format
    转换中断函数语法从Keil格式到SDCC格式
    """
    # Pattern: void function_name (void) interrupt VECTOR_NAME
    # Replace with: void function_name (void) __interrupt(VECTOR_NAME)
    pattern = r'(\w+\s+\w+\s*\([^)]*\))\s+interrupt\s+(\w+)'
    replacement = r'\1 __interrupt(\2)'
    return re.sub(pattern, replacement, content)

def enhance_comments(content):
    """
    Enhance comments by adding English translations where missing
    通过添加英文翻译来增强注释
    """
    # Add English comments for common Chinese terms
    translations = {
        '特殊功能寄存器': 'Special Function Registers',
        '位定义': 'Bit Definitions', 
        '端口': 'Port',
        '定时器': 'Timer',
        '串口': 'UART/Serial',
        '中断': 'Interrupt',
        '看门狗': 'Watchdog',
        '电源控制': 'Power Control',
        '时钟': 'Clock',
        '复位': 'Reset',
        '模式': 'Mode',
        '控制': 'Control',
        '状态': 'Status',
        '数据': 'Data',
        '配置': 'Configuration',
        '使能': 'Enable',
        '禁止': 'Disable',
        '标志': 'Flag',
        '计数器': 'Counter',
        '比较': 'Compare',
        '捕获': 'Capture',
        'PWM': 'Pulse Width Modulation',
        'ADC': 'Analog to Digital Converter',
        'SPI': 'Serial Peripheral Interface',
        'I2C': 'Inter-Integrated Circuit'
    }
    
    # Add translations to comments that only have Chinese
    for chinese, english in translations.items():
        # Look for comments that contain Chinese term but no English
        pattern = f'(/\\*[^*]*{chinese}[^*]*\\*/|//[^\n]*{chinese}[^\n]*)'
        matches = re.findall(pattern, content)
        for match in matches:
            if english.lower() not in match.lower():
                if match.startswith('//'):
                    enhanced = match + f' - {english}'
                else:
                    enhanced = match[:-2] + f' - {english}' + match[-2:]
                content = content.replace(match, enhanced)
    
    return content

def validate_conversion_result(original_content, converted_content):
    """
    Validate the conversion result and provide statistics
    验证转换结果并提供统计信息
    """
    import re
    
    stats = {
        'sfr_declarations': len(re.findall(r'__sfr\s+__at\(', converted_content)),
        'sbit_declarations': len(re.findall(r'__sbit\s+__at\(', converted_content)),
        'interrupt_functions': len(re.findall(r'__interrupt\s*\(', converted_content)),
        'nop_macros': len(re.findall(r'NOP\d+\(\)', converted_content)),
        'bit_declarations': len(re.findall(r'__bit\s+\w+', converted_content))
    }
    
    print("\nConversion Statistics:")
    print("转换统计信息:")
    for key, value in stats.items():
        print(f"  {key}: {value}")
    
    return stats

def main():
    """
    Main conversion function
    主转换函数
    """
    parser = argparse.ArgumentParser(description='Convert Keil C51 header to SDCC compatible format')
    parser.add_argument('input_file', help='Input header file path')
    parser.add_argument('-o', '--output', help='Output file path (optional)')
    
    args = parser.parse_args()
    
    input_file = args.input_file
    
    # Validate input file
    if not os.path.exists(input_file):
        print(f"Error: Input file '{input_file}' not found!")
        print(f"错误: 输入文件 '{input_file}' 不存在!")
        sys.exit(1)
    
    if args.output:
        output_file = args.output
    else:
        # Create sdcc_src directory if it doesn't exist
        sdcc_dir = "sdcc_src"
        if not os.path.exists(sdcc_dir):
            os.makedirs(sdcc_dir)
        
        # Generate output filename: keep original name but put in sdcc_src directory
        filename = os.path.basename(input_file)
        output_file = os.path.join(sdcc_dir, filename)
    
    try:
        # Read input file
        print(f"Reading {input_file}...")
        print(f"读取文件 {input_file}...")
        try:
            with open(input_file, 'r', encoding='utf-8') as f:
                original_content = f.read()
        except UnicodeDecodeError:
            # Try with different encoding if UTF-8 fails
            with open(input_file, 'r', encoding='gbk') as f:
                original_content = f.read()
            print("Note: File read with GBK encoding")
            print("注意: 文件使用GBK编码读取")
        
        content = original_content
        
        # Get base directory for include file scanning
        base_dir = os.path.dirname(os.path.abspath(input_file))
        
        # Apply conversions step by step
        print("Converting sfr declarations...")
        print("转换sfr声明...")
        content = convert_sfr_declarations(content)
        
        print("Converting xdata declarations...")
        print("转换xdata声明...")
        content = convert_xdata_declarations(content)
        
        print("Converting sbit declarations...")
        print("转换sbit声明...")
        content = convert_sbit_declarations(content, base_dir)
        
        print("Converting interrupt syntax...")
        print("转换中断语法...")
        content = convert_interrupt_syntax(content)
        
        print("Enhancing comments...")
        print("增强注释...")
        content = enhance_comments(content)
        
        print("Adding SDCC headers...")
        print("添加SDCC头文件...")
        content = add_header_and_includes(content)
        
        # Validate conversion result
        validate_conversion_result(original_content, content)
        
        # Write output file
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"\nConversion completed! Output: {output_file}")
        print(f"转换完成！输出文件: {output_file}")
        
    except FileNotFoundError:
        print(f"Error: {input_file} not found!")
        print(f"错误: 找不到文件 {input_file}!")
        sys.exit(1)
    except PermissionError:
        print(f"Error: Permission denied when accessing {input_file} or {output_file}")
        print(f"错误: 访问文件 {input_file} 或 {output_file} 时权限被拒绝")
        sys.exit(1)
    except UnicodeDecodeError as e:
        print(f"Error: Unable to decode file {input_file}. Encoding issue: {e}")
        print(f"错误: 无法解码文件 {input_file}。编码问题: {e}")
        sys.exit(1)
    except Exception as e:
        print(f"Error during conversion: {e}")
        print(f"转换过程中出错: {e}")
        import traceback
        traceback.print_exc()
        sys.exit(1)

if __name__ == '__main__':
    main()