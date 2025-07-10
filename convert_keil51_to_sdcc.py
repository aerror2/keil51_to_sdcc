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
import glob
from pathlib import Path
import chardet
import codecs

def detect_and_read_file(file_path):
    """
    Detect file encoding and read file content as UTF-8
    检测文件编码并以UTF-8格式读取文件内容
    """
    try:
        # First, try to detect encoding
        with open(file_path, 'rb') as f:
            raw_data = f.read()
        
        # Detect encoding using chardet
        detected = chardet.detect(raw_data)
        encoding = detected.get('encoding', 'utf-8')
        confidence = detected.get('confidence', 0)
        
        print(f"File: {os.path.basename(file_path)}")
        print(f"Detected encoding: {encoding} (confidence: {confidence:.2f})")
        print(f"文件: {os.path.basename(file_path)}")
        print(f"检测到编码: {encoding} (置信度: {confidence:.2f})")
        
        # Try to decode with detected encoding
        if encoding and confidence > 0.7:
            try:
                content = raw_data.decode(encoding)
                print(f"Successfully read with {encoding} encoding")
                print(f"成功使用 {encoding} 编码读取")
                return content
            except (UnicodeDecodeError, LookupError) as e:
                print(f"Failed to decode with {encoding}: {e}")
                print(f"使用 {encoding} 解码失败: {e}")
        
        # Fallback to common encodings
        fallback_encodings = ['utf-8', 'gbk', 'gb2312', 'gb18030', 'latin1']
        
        for enc in fallback_encodings:
            try:
                content = raw_data.decode(enc)
                print(f"Successfully read with fallback encoding: {enc}")
                print(f"成功使用备用编码读取: {enc}")
                return content
            except (UnicodeDecodeError, LookupError):
                continue
        
        # Last resort: decode with errors='ignore'
        content = raw_data.decode('utf-8', errors='ignore')
        print("Warning: Some characters may be lost due to encoding issues")
        print("警告: 由于编码问题，某些字符可能丢失")
        return content
        
    except Exception as e:
        print(f"Error reading file {file_path}: {e}")
        print(f"读取文件 {file_path} 时出错: {e}")
        raise

def ensure_utf8_file_to_temp(source_file, temp_dir):
    """
    Convert file to UTF-8 encoding and save to temporary directory
    将文件转换为UTF-8编码并保存到临时目录
    """
    try:
        # Read source file content
        content = detect_and_read_file(source_file)
        
        # Create temp file path
        rel_path = os.path.basename(source_file)
        temp_file_path = os.path.join(temp_dir, rel_path)
        
        # Ensure temp directory exists
        os.makedirs(os.path.dirname(temp_file_path), exist_ok=True)
        
        # Write as UTF-8 to temp directory
        with open(temp_file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"File converted to UTF-8 in temp: {temp_file_path}")
        print(f"文件已转换为UTF-8到临时目录: {temp_file_path}")
        return temp_file_path
        
    except Exception as e:
        print(f"Error converting file {source_file} to UTF-8: {e}")
        print(f"转换文件 {source_file} 为UTF-8时出错: {e}")
        return None

def ensure_utf8_file(file_path, backup=True):
    """
    Ensure file is saved in UTF-8 encoding (legacy function for compatibility)
    确保文件以UTF-8编码保存（为兼容性保留的旧函数）
    """
    try:
        # Read file content
        content = detect_and_read_file(file_path)
        
        # Create backup if requested
        if backup:
            backup_path = file_path + '.bak'
            if not os.path.exists(backup_path):
                import shutil
                shutil.copy2(file_path, backup_path)
                print(f"Backup created: {backup_path}")
                print(f"已创建备份: {backup_path}")
        
        # Write back as UTF-8
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"File converted to UTF-8: {file_path}")
        print(f"文件已转换为UTF-8: {file_path}")
        return True
        
    except Exception as e:
        print(f"Error converting file {file_path} to UTF-8: {e}")
        print(f"转换文件 {file_path} 为UTF-8时出错: {e}")
        return False

def preprocess_directory_encoding(directory):
    """
    Preprocess all .c, .h, .uv2 files in directory to ensure UTF-8 encoding
    预处理目录中所有.c、.h、.uv2文件以确保UTF-8编码
    """
    import glob
    
    print(f"\nPreprocessing directory for encoding: {directory}")
    print(f"预处理目录编码: {directory}")
    
    # Find all relevant files
    target_extensions = ['*.c', '*.h', '*.uv2', '*.Uv2', '*.UV2']
    files_to_process = []
    
    for ext in target_extensions:
        files_to_process.extend(glob.glob(os.path.join(directory, ext)))
        files_to_process.extend(glob.glob(os.path.join(directory, '**', ext), recursive=True))
    
    # Remove duplicates
    files_to_process = list(set(files_to_process))
    
    if not files_to_process:
        print("No .c, .h, or .uv2 files found for preprocessing")
        print("未找到需要预处理的.c、.h或.uv2文件")
        return
    
    print(f"Found {len(files_to_process)} files to preprocess:")
    print(f"找到 {len(files_to_process)} 个文件需要预处理:")
    
    success_count = 0
    for file_path in files_to_process:
        print(f"\nProcessing: {os.path.relpath(file_path, directory)}")
        print(f"处理中: {os.path.relpath(file_path, directory)}")
        
        if ensure_utf8_file(file_path, backup=True):
            success_count += 1
    
    print(f"\nPreprocessing completed: {success_count}/{len(files_to_process)} files processed successfully")
    print(f"预处理完成: {success_count}/{len(files_to_process)} 个文件处理成功")

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
                    
                    # Preprocess: ensure UTF-8 encoding for .h files
                    file_ext = os.path.splitext(file_path)[1].lower()
                    if file_ext in ['.h']:
                        ensure_utf8_file(file_path, backup=True)
                    
                    # Read include file using encoding detection
                    include_content = detect_and_read_file(file_path)
                    
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
    
    # 将include路径中的反斜杠替换为正斜杠（Windows路径转Unix路径）
    # Convert backslashes to forward slashes in include paths (Windows to Unix path)
    content = re.sub(r'#include\s*["<]([^"<>]*\\[^"<>]*)["<>]', 
                     lambda m: m.group(0).replace('\\', '/'), content)
    
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
                    # For single-line comments, add translation as a comment
                    enhanced = match + f' // {english}'
                else:
                    # For multi-line comments, add translation before closing */
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

def parse_keil_project_file(project_file):
    """
    Parse Keil uVision project file (.Uv2) to extract source files and project settings
    解析Keil uVision工程文件(.Uv2)以提取源文件和工程设置
    """
    project_info = {
        'source_files': [],
        'target_name': 'main',
        'device': 'AT89C52',
        'output_name': 'main'
    }
    
    try:
        # Preprocess: ensure UTF-8 encoding for .uv2 files
        file_ext = os.path.splitext(project_file)[1].lower()
        if file_ext in ['.uv2']:
            print(f"\nPreprocessing project file: {project_file}")
            print(f"预处理工程文件: {project_file}")
            ensure_utf8_file(project_file, backup=True)
        
        # Read project file using encoding detection
        content = detect_and_read_file(project_file)
    except Exception as e:
        print(f"Error reading project file {project_file}: {e}")
        print(f"读取工程文件 {project_file} 时出错: {e}")
        return project_info
    
        # Extract source files
    file_pattern = r'File\s+\d+,\d+,<([^>]+)><([^>]+)>'
    matches = re.findall(file_pattern, content)
    for file_path, file_name in matches:
        # Clean up file path
        file_path = file_path.replace('.\\', '').replace('./', '')
        if file_path.endswith('.c') or file_path.endswith('.h'):
            project_info['source_files'].append(file_path)
    
    # Extract target name
    target_match = re.search(r'Target\s+\(([^)]+)\)', content)
    if target_match:
        project_info['target_name'] = target_match.group(1).replace('Target ', '').strip()
    
    # Extract device name
    device_match = re.search(r'Device\s+\(([^)]+)\)', content)
    if device_match:
        project_info['device'] = device_match.group(1)
    
    # Extract output name
    output_match = re.search(r'OutName\s+\(([^)]+)\)', content)
    if output_match:
        project_info['output_name'] = output_match.group(1)
    
    return project_info

def convert_single_file(input_file, output_file, base_dir):
    """
    Convert a single file from Keil to SDCC format
    转换单个文件从Keil格式到SDCC格式
    """
    try:
        # Preprocess: ensure UTF-8 encoding for .c, .h, .uv2 files
        file_ext = os.path.splitext(input_file)[1].lower()
        if file_ext in ['.c', '.h', '.uv2']:
            print(f"\nPreprocessing file: {input_file}")
            print(f"预处理文件: {input_file}")
            ensure_utf8_file(input_file, backup=True)
        
        # Read input file using encoding detection
        original_content = detect_and_read_file(input_file)
        
        content = original_content
        
        # Apply conversions step by step
        content = convert_sfr_declarations(content)
        content = convert_xdata_declarations(content)
        content = convert_sbit_declarations(content, base_dir)
        content = convert_interrupt_syntax(content)
        content = enhance_comments(content)
        content = add_header_and_includes(content)
        
        # Create output directory if it doesn't exist
        os.makedirs(os.path.dirname(output_file), exist_ok=True)
        
        # Write output file
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write(content)
        
        return True
    except Exception as e:
        print(f"Error converting {input_file}: {e}")
        print(f"转换文件 {input_file} 时出错: {e}")
        return False

def generate_sdcc_makefile(project_info, output_dir, project_subdir=None):
    """
    Generate SDCC Makefile based on project information
    根据工程信息生成SDCC Makefile
    
    Args:
        project_info: Project information dictionary
        output_dir: Base output directory
        project_subdir: Subdirectory where the original project file was located
    """
    # Adjust source file paths relative to Makefile location
    def adjust_source_path(source_file):
        if project_subdir:
            # If Makefile is in a subdirectory, adjust paths relative to that subdirectory
            if source_file.startswith(project_subdir + '/'):
                # Remove the subdirectory prefix for files in the same subdirectory
                return source_file[len(project_subdir) + 1:]
            else:
                # For files outside the subdirectory, use relative path with ../
                return '../' + source_file
        else:
            # If Makefile is in root, use original paths
            return source_file
    
    # Process source files with adjusted paths
    c_sources = [adjust_source_path(f) for f in project_info['source_files'] if f.endswith('.c')]
    h_sources = [adjust_source_path(f) for f in project_info['source_files'] if f.endswith('.h')]
    
    makefile_content = f"""# SDCC Makefile generated from Keil project
# SDCC Makefile 从Keil工程生成

# Project settings
PROJECT_NAME = {project_info['output_name']}
TARGET_DEVICE = {project_info['device']}

# Directory settings
BUILD_DIR = build
SRC_DIR = .

# Compiler settings
CC = sdcc
CFLAGS = -mmcs51 --model-small --std-c99
LDFLAGS = --code-loc 0x0000 --data-loc 0x30

# Source files
C_SOURCES = {' '.join(c_sources)}
H_SOURCES = {' '.join(h_sources)}

# Object files (in build directory)
OBJECTS = $(addprefix $(BUILD_DIR)/,$(C_SOURCES:.c=.rel))

# Output files (in build directory)
HEX_FILE = $(BUILD_DIR)/$(PROJECT_NAME).hex
IHX_FILE = $(BUILD_DIR)/$(PROJECT_NAME).ihx

# Default target
all: $(HEX_FILE)

# Create build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Build hex file
$(HEX_FILE): $(IHX_FILE)
	packihx $(IHX_FILE) > $(HEX_FILE)

# Link object files
$(IHX_FILE): $(OBJECTS) | $(BUILD_DIR)
	cd $(BUILD_DIR) && $(CC) $(CFLAGS) $(LDFLAGS) $(notdir $(OBJECTS)) -o $(notdir $(IHX_FILE))

# Compile C source files
$(BUILD_DIR)/%.rel: $(SRC_DIR)/%.c | $(BUILD_DIR)
	cd $(BUILD_DIR) && $(CC) $(CFLAGS) -c ../$< -o $(notdir $@)

# Clean build files
clean:
	rm -rf $(BUILD_DIR)

# Install dependencies (Ubuntu/Debian)
install-deps:
	sudo apt-get update
	sudo apt-get install sdcc

# Flash to device (adjust as needed)
flash: $(HEX_FILE)
	@echo "Please use appropriate flash tool for your device"
	@echo "Example: stcgal -p /dev/ttyUSB0 $(HEX_FILE)"

# Show build info
info:
	@echo "Project: $(PROJECT_NAME)"
	@echo "Device: $(TARGET_DEVICE)"
	@echo "Build directory: $(BUILD_DIR)"
	@echo "Source files: $(C_SOURCES)"
	@echo "Header files: $(H_SOURCES)"

.PHONY: all clean install-deps flash info
"""
    
    # Determine where to place the Makefile
    if project_subdir:
        makefile_dir = os.path.join(output_dir, project_subdir)
        os.makedirs(makefile_dir, exist_ok=True)
        makefile_path = os.path.join(makefile_dir, 'Makefile')
    else:
        makefile_path = os.path.join(output_dir, 'Makefile')
    
    with open(makefile_path, 'w', encoding='utf-8') as f:
        f.write(makefile_content)
    
    return makefile_path

def batch_convert_project(project_dir, output_dir=None):
    """
    Batch convert a Keil project directory to SDCC format
    批量转换Keil工程目录为SDCC格式
    """
    import tempfile
    import shutil
    
    project_dir = os.path.abspath(project_dir)
    
    # Generate output directory name if not provided
    if output_dir is None:
        project_name = os.path.basename(project_dir)
        output_dir = f"{project_name}_sdcc"
    
    output_dir = os.path.abspath(output_dir)
    
    print(f"Converting Keil project from: {project_dir}")
    print(f"Output directory: {output_dir}")
    print(f"转换Keil工程从: {project_dir}")
    print(f"输出目录: {output_dir}")
    
    # Create temporary directory for encoding preprocessing
    temp_dir = tempfile.mkdtemp(prefix='keil51_batch_temp_')
    print(f"Created temporary directory for encoding preprocessing: {temp_dir}")
    print(f"创建编码预处理临时目录: {temp_dir}")
    
    try:
        # Copy project directory to temp directory and preprocess encoding
        temp_project_dir = os.path.join(temp_dir, os.path.basename(project_dir))
        shutil.copytree(project_dir, temp_project_dir)
        print(f"Copied project to temporary directory: {temp_project_dir}")
        print(f"复制工程到临时目录: {temp_project_dir}")
        
        # Preprocess all files in the temporary directory to ensure UTF-8 encoding
        preprocess_directory_encoding(temp_project_dir)
        
        # Use temp_project_dir for the rest of the processing
        working_project_dir = temp_project_dir
    
        # Find Keil project files (search recursively in subdirectories)
        project_files = glob.glob(os.path.join(working_project_dir, '*.Uv2'))
        project_files.extend(glob.glob(os.path.join(working_project_dir, '**', '*.Uv2'), recursive=True))
        project_files.extend(glob.glob(os.path.join(working_project_dir, '*.uvproj')))
        project_files.extend(glob.glob(os.path.join(working_project_dir, '**', '*.uvproj'), recursive=True))
        project_files.extend(glob.glob(os.path.join(working_project_dir, '*.uvprojx')))
        project_files.extend(glob.glob(os.path.join(working_project_dir, '**', '*.uvprojx'), recursive=True))
        
        # Parse all project files found
        project_infos = []
        if project_files:
            print(f"Found {len(project_files)} project files:")
            print(f"找到 {len(project_files)} 个工程文件:")
            
            for project_file in project_files:
                print(f"  {os.path.relpath(project_file, working_project_dir)}")
                try:
                    project_info = parse_keil_project_file(project_file)
                    
                    # Get the subdirectory of the project file relative to the working directory
                    project_file_rel_path = os.path.relpath(project_file, working_project_dir)
                    project_subdir = os.path.dirname(project_file_rel_path)
                    if project_subdir == '.':
                        project_subdir = None
                    
                    project_infos.append({
                        'info': project_info,
                        'subdir': project_subdir,
                        'file_path': project_file
                    })
                    
                    print(f"    Project info: {project_info}")
                    print(f"    工程信息: {project_info}")
                    print(f"    Project subdirectory: {project_subdir}")
                    print(f"    工程子目录: {project_subdir}")
                    
                except Exception as e:
                    print(f"    Warning: Failed to parse project file {project_file}: {e}")
                    print(f"    警告: 解析工程文件 {project_file} 失败: {e}")
        
        # Find all .h and .c files in the project directory
        source_files = []
        for ext in ['*.h', '*.c']:
            source_files.extend(glob.glob(os.path.join(working_project_dir, ext)))
            source_files.extend(glob.glob(os.path.join(working_project_dir, '**', ext), recursive=True))
        
        # Remove duplicates
        source_files = list(set(source_files))
        
        print(f"Found {len(source_files)} source files to convert:")
        print(f"找到 {len(source_files)} 个源文件需要转换:")
        for f in source_files:
            print(f"  {os.path.relpath(f, working_project_dir)}")
    
        # Create output directory
        os.makedirs(output_dir, exist_ok=True)
        
        # Convert each file
        converted_files = []
        failed_files = []
        
        for source_file in source_files:
            rel_path = os.path.relpath(source_file, working_project_dir)
            output_file = os.path.join(output_dir, rel_path)
            
            print(f"Converting: {rel_path}")
            print(f"转换: {rel_path}")
            
            if convert_single_file(source_file, output_file, working_project_dir):
                converted_files.append(rel_path)
                print(f"  ✓ Success")
                print(f"  ✓ 成功")
            else:
                failed_files.append(rel_path)
                print(f"  ✗ Failed")
                print(f"  ✗ 失败")
        
        # Generate Makefiles for each project
        if project_infos:
            print("\nGenerating SDCC Makefiles...")
            print("生成SDCC Makefile...")
            
            for project_data in project_infos:
                project_info = project_data['info']
                project_subdir = project_data['subdir']
                project_file_path = project_data['file_path']
                
                print(f"\nGenerating Makefile for project: {os.path.relpath(project_file_path, working_project_dir)}")
                print(f"为工程生成Makefile: {os.path.relpath(project_file_path, working_project_dir)}")
                
                # Filter source files relevant to this project's subdirectory
                if project_subdir:
                    # Include files in the same subdirectory and common files in parent directories
                    relevant_files = []
                    for f in converted_files:
                        if f.endswith(('.c', '.h')):
                            # Files in the same subdirectory
                            if f.startswith(project_subdir + '/'):
                                relevant_files.append(f)
                            # Common header files in parent directories (not in any subdirectory)
                            elif '/' not in f and f.endswith('.h'):
                                relevant_files.append(f)
                    project_info['source_files'] = relevant_files
                else:
                    # For root-level projects, include all files not in subdirectories
                    relevant_files = [f for f in converted_files if f.endswith(('.c', '.h')) and '/' not in f]
                    project_info['source_files'] = relevant_files
                
                print(f"  Relevant source files: {project_info['source_files']}")
                print(f"  相关源文件: {project_info['source_files']}")
                
                makefile_path = generate_sdcc_makefile(project_info, output_dir, project_subdir)
                print(f"  Makefile generated: {makefile_path}")
                print(f"  Makefile已生成: {makefile_path}")
        
        # Generate summary
        print(f"\n=== Conversion Summary ====")
        print(f"=== 转换总结 ====")
        print(f"Total files: {len(source_files)}")
        print(f"总文件数: {len(source_files)}")
        print(f"Converted successfully: {len(converted_files)}")
        print(f"转换成功: {len(converted_files)}")
        print(f"Failed: {len(failed_files)}")
        print(f"失败: {len(failed_files)}")
        
        if failed_files:
            print("\nFailed files:")
            print("失败文件:")
            for f in failed_files:
                print(f"  {f}")
        
        return len(converted_files), len(failed_files)
    
    finally:
        # Clean up temporary directory
        if temp_dir and os.path.exists(temp_dir):
            try:
                shutil.rmtree(temp_dir)
                print(f"\nCleaned up temporary directory: {temp_dir}")
                print(f"清理临时目录: {temp_dir}")
            except Exception as e:
                print(f"Warning: Failed to clean up temporary directory {temp_dir}: {e}")
                print(f"警告: 清理临时目录 {temp_dir} 失败: {e}")

def main():
    """
    Main conversion function
    主转换函数
    """
    parser = argparse.ArgumentParser(description='Convert Keil C51 project to SDCC compatible format')
    parser.add_argument('input', help='Input file path or project directory')
    parser.add_argument('-o', '--output', help='Output file path or directory (optional)')
    parser.add_argument('-b', '--batch', action='store_true', help='Batch convert entire project directory')
    parser.add_argument('--output-dir', default='converted_sdcc_src', help='Output directory for batch conversion (default: converted_sdcc_src)')
    
    args = parser.parse_args()
    
    input_path = args.input
    
    # Validate input path
    if not os.path.exists(input_path):
        print(f"Error: Input path '{input_path}' not found!")
        print(f"错误: 输入路径 '{input_path}' 不存在!")
        sys.exit(1)
    
    # Check if batch conversion is requested or if input is a directory
    if args.batch or os.path.isdir(input_path):
        # Batch conversion mode
        # Use specified output directory, or None to auto-generate based on input directory name
        output_dir = args.output if args.output else (args.output_dir if args.output_dir != 'converted_sdcc_src' else None)
        
        try:
            converted_count, failed_count = batch_convert_project(input_path, output_dir)
            
            if failed_count == 0:
                print(f"\n🎉 All files converted successfully!")
                print(f"🎉 所有文件转换成功!")
                sys.exit(0)
            else:
                print(f"\n⚠️  Conversion completed with {failed_count} failures.")
                print(f"⚠️  转换完成，但有 {failed_count} 个文件失败。")
                sys.exit(1)
                
        except Exception as e:
            print(f"Error during batch conversion: {e}")
            print(f"批量转换过程中出错: {e}")
            import traceback
            traceback.print_exc()
            sys.exit(1)
    
    else:
        # Single file conversion mode
        input_file = input_path
        
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
        
        # Create temporary directory for encoding preprocessing
        import tempfile
        import shutil
        temp_dir = None
        
        try:
            # Preprocess encoding for single file if it's .c, .h, or .uv2
            file_ext = os.path.splitext(input_file)[1].lower()
            actual_input_file = input_file
            
            if file_ext in ['.c', '.h', '.uv2']:
                print(f"Preprocessing encoding for {input_file}...")
                print(f"预处理文件编码 {input_file}...")
                
                # Create temporary directory
                temp_dir = tempfile.mkdtemp(prefix='keil51_temp_')
                print(f"Created temporary directory: {temp_dir}")
                print(f"创建临时目录: {temp_dir}")
                
                # Convert file to UTF-8 in temp directory
                temp_file = ensure_utf8_file_to_temp(input_file, temp_dir)
                if temp_file:
                    actual_input_file = temp_file
                else:
                    print("Warning: Failed to preprocess encoding, using original file")
                    print("警告: 编码预处理失败，使用原始文件")
            
            # Read input file
            print(f"Reading {actual_input_file}...")
            print(f"读取文件 {actual_input_file}...")
            original_content = detect_and_read_file(actual_input_file)
            
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
        finally:
            # Clean up temporary directory
            if temp_dir and os.path.exists(temp_dir):
                try:
                    shutil.rmtree(temp_dir)
                    print(f"Cleaned up temporary directory: {temp_dir}")
                    print(f"清理临时目录: {temp_dir}")
                except Exception as e:
                    print(f"Warning: Failed to clean up temporary directory {temp_dir}: {e}")
                    print(f"警告: 清理临时目录 {temp_dir} 失败: {e}")

if __name__ == '__main__':
    main()