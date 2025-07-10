# Keil C51 to SDCC Converter

一个用于将 Keil C51 语法转换为 SDCC 兼容语法的 Python 脚本。

## 功能特性

### 🔄 语法转换
- **SFR 声明转换**: `sfr P0 = 0x80;` → `__sfr __at(0x80) P0;`
- **SBIT 声明转换**: `sbit P00 = P0^0;` → `__sbit __at(0x80) P00;`
- **XDATA 声明转换**: `*(unsigned char volatile xdata *)` → `*(volatile __xdata unsigned char *)`
- **中断函数转换**: `void func() interrupt 1` → `void func() __interrupt(1)`
- **位类型转换**: `bit` → `__bit`
- **NOP 指令转换**: `_nop_()` → `__asm NOP __endasm`

### 🧠 智能寄存器地址解析
- 自动从源文件中提取寄存器地址定义
- 支持扫描包含的头文件以获取完整的寄存器映射
- 内置常用 8051 寄存器地址作为后备
- 动态计算位地址 (基址 + 位偏移)

### 📝 代码增强
- 自动添加 SDCC 兼容的头文件
- 增强中文注释，添加英文翻译
- 处理 NOP 宏定义中的逗号操作符
- 提供详细的转换统计信息

### 🛡️ 错误处理
- 支持多种文件编码 (UTF-8, GBK)
- 完善的异常处理和错误报告
- 输入文件验证
- 转换结果验证

## 安装要求

- Python 3.6+
- 无需额外依赖包

## 使用方法

### 基本用法

```bash
# 转换单个文件
python3 convert_keil51_to_sdcc.py input_file.h

# 指定输出文件
python3 convert_keil51_to_sdcc.py input_file.h -o output_file.h
```

### 示例

```bash
# 转换 STC8Gxxx.h 头文件
python3 convert_keil51_to_sdcc.py STC8Gxxx.h

# 转换 main.c 源文件
python3 convert_keil51_to_sdcc.py main.c
```

转换后的文件将保存在 `sdcc_src/` 目录中。

## 转换示例

### SFR 声明转换

**输入 (Keil C51):**
```c
sfr P0 = 0x80;
sfr P1 = 0x90;
sfr ACC = 0xE0;
```

**输出 (SDCC):**
```c
__sfr __at(0x80) P0;
__sfr __at(0x90) P1;
__sfr __at(0xE0) ACC;
```

### SBIT 声明转换

**输入 (Keil C51):**
```c
sbit P00 = P0^0;
sbit P01 = P0^1;
sbit ACC0 = ACC^0;
```

**输出 (SDCC):**
```c
__sbit __at(0x80) P00;  // P0 基址 0x80 + 位 0
__sbit __at(0x81) P01;  // P0 基址 0x80 + 位 1
__sbit __at(0xE0) ACC0; // ACC 基址 0xE0 + 位 0
```

### 中断函数转换

**输入 (Keil C51):**
```c
void timer0_isr(void) interrupt 1
{
    // 中断处理代码
}
```

**输出 (SDCC):**
```c
void timer0_isr(void) __interrupt(1)
{
    // 中断处理代码
}
```

### NOP 宏转换

**输入 (Keil C51):**
```c
#define NOP1() _nop_()
#define NOP2() NOP1(),NOP1()
```

**输出 (SDCC):**
```c
#define NOP1() __asm NOP __endasm
#define NOP2() do{NOP1();NOP1();}while(0)
```

## 输出结构

脚本会创建 `sdcc_src/` 目录并将转换后的文件保存在其中：

```
project/
├── STC8Gxxx.h          # 原始 Keil C51 头文件
├── main.c              # 原始 Keil C51 源文件
├── convert_keil51_to_sdcc.py
└── sdcc_src/           # 转换后的 SDCC 兼容文件
    ├── STC8Gxxx.h
    └── main.c
```

## 转换统计

脚本会在转换完成后显示详细的统计信息：

```
Conversion Statistics:
转换统计信息:
  sfr_declarations: 162
  sbit_declarations: 154
  interrupt_functions: 2
  nop_macros: 118
  bit_declarations: 1
```

## 支持的文件类型

- `.h` - C 头文件
- `.c` - C 源文件
- 任何包含 Keil C51 语法的文本文件

## 寄存器地址解析

脚本使用智能算法解析寄存器地址：

1. **主文件扫描**: 首先从当前文件中提取寄存器地址定义
2. **包含文件扫描**: 如果主文件中寄存器不足，自动扫描 `#include` 的头文件
3. **默认地址**: 提供常用 8051 寄存器的默认地址作为后备

### 支持的寄存器地址格式

```c
// SFR 声明格式
sfr P0 = 0x80;
__sfr __at(0x80) P0;

// 宏定义格式
#define P0 0x80
```

## 错误处理

脚本提供完善的错误处理：

- **文件不存在**: 清晰的错误提示
- **编码问题**: 自动尝试多种编码 (UTF-8, GBK)
- **权限错误**: 详细的权限错误信息
- **语法错误**: 保留原始格式作为后备

## 注意事项

1. **备份原文件**: 建议在转换前备份原始文件
2. **验证结果**: 转换后请验证生成的代码是否正确
3. **编译测试**: 使用 SDCC 编译转换后的代码以确保兼容性
4. **手动调整**: 某些复杂语法可能需要手动调整

## 兼容性

- **源格式**: Keil C51 (C51 编译器)
- **目标格式**: SDCC (Small Device C Compiler)
- **目标平台**: 8051 系列微控制器
- **测试芯片**: STC8G 系列

## 许可证

本项目采用 MIT 许可证。

## 贡献

欢迎提交 Issue 和 Pull Request 来改进这个工具！

---

**注意**: 这个工具专门为 STC8G 系列微控制器的 Keil C51 到 SDCC 转换而设计，但也适用于其他 8051 系列芯片的类似转换需求。