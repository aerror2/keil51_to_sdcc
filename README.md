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

### 📁 批量处理和项目管理
- **批量转换**: 支持整个目录及子目录的递归转换
- **Keil 项目解析**: 自动解析 .Uv2/.uvproj/.uvprojx 项目文件
- **Makefile 生成**: 为每个项目生成 SDCC 兼容的 Makefile
- **多项目支持**: 为包含多个项目的目录生成独立的 Makefile
- **智能路径处理**: 自动调整源文件的相对路径

### 🔤 编码转换和处理
- **多编码支持**: 自动检测和转换 UTF-8、GBK、GB2312、GB18030 等编码
- **编码预处理**: 批量将项目文件转换为 UTF-8 编码
- **智能编码检测**: 使用 chardet 库进行高精度编码识别
- **备份保护**: 转换前自动创建原文件备份

### 🛡️ 错误处理
- 支持多种文件编码 (UTF-8, GBK, GB2312, GB18030)
- 完善的异常处理和错误报告
- 输入文件验证
- 转换结果验证

## 安装要求

- Python 3.6+
- chardet (用于文件编码检测)

### 安装依赖

```bash
# 使用 pip 安装依赖
pip install -r requirements.txt

# 或者直接安装 chardet
pip install chardet>=5.0.0
```

## 使用方法

### 基本用法

```bash
# 转换单个文件
python3 convert_keil51_to_sdcc.py input_file.h

# 指定输出文件
python3 convert_keil51_to_sdcc.py input_file.h -o output_file.h
```

### 批量转换和 Makefile 生成

```bash
# 批量转换整个目录（包括子目录）
python3 convert_keil51_to_sdcc.py /path/to/keil_project_directory

# 转换目录并生成 SDCC Makefile
python3 convert_keil51_to_sdcc.py /path/to/keil_project_directory --generate-makefile

# 预处理目录编码（将 GBK/GB2312 转换为 UTF-8）
python3 convert_keil51_to_sdcc.py /path/to/directory --preprocess-encoding
```

### 完整示例

```bash
# 转换 STC8Gxxx.h 头文件
python3 convert_keil51_to_sdcc.py STC8Gxxx.h

# 转换 main.c 源文件
python3 convert_keil51_to_sdcc.py main.c

# 批量转换 keil51_example 目录
python3 convert_keil51_to_sdcc.py keil51_example/

# 转换项目并生成 Makefile（推荐）
python3 convert_keil51_to_sdcc.py keil51_example/ --generate-makefile
```

转换后的文件将保存在指定的输出目录中，默认为当前目录下的临时目录。

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

### 单文件转换
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

### 批量转换和 Makefile 生成
批量转换会在临时目录中重建项目结构，并为每个子项目生成独立的 Makefile：

```
keil51_example_2/       # 原始 Keil 项目目录
├── ADC/
│   ├── ADCxx.Uv2      # Keil 项目文件
│   └── main.c
├── ADC2/
│   ├── ADCxx.Uv2      # 另一个 Keil 项目文件
│   └── main.c
└── STC8Gxxx.h         # 共享头文件

temp_converted_XXXXXX/  # 转换后的输出目录
├── ADC/
│   ├── Makefile       # 为 ADC 项目生成的 Makefile
│   └── main.c         # 转换后的源文件
├── ADC2/
│   ├── Makefile       # 为 ADC2 项目生成的 Makefile
│   └── main.c         # 转换后的源文件
└── STC8Gxxx.h         # 转换后的共享头文件
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

### 源代码文件
- `.h` - C 头文件
- `.c` - C 源文件
- 任何包含 Keil C51 语法的文本文件

### 项目文件
- `.Uv2` - Keil μVision2 项目文件
- `.uvproj` - Keil μVision4 项目文件
- `.uvprojx` - Keil μVision5 项目文件

### 支持的编码格式
- UTF-8 (推荐)
- GBK (简体中文)
- GB2312 (简体中文)
- GB18030 (中文扩展)
- Latin1 (西欧字符)

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

## Makefile 功能详解

### 自动生成的 Makefile 特性

生成的 Makefile 包含以下功能：

```makefile
# 项目配置
PROJECT_NAME = ADC
TARGET = main
MCU = 8051

# 编译器设置
CC = sdcc
CFLAGS = -mmcs51 --model-small --std-c99
LDFLAGS = --code-size 0x2000 --xram-size 0x0400

# 源文件（自动检测）
C_SOURCES = main.c
H_SOURCES = ../STC8Gxxx.h

# 编译目标
all: $(TARGET).hex
clean: # 清理生成文件
flash: # 烧录到芯片（需要配置烧录器）
info: # 显示项目信息
```

### 使用生成的 Makefile

```bash
# 进入项目目录
cd temp_converted_XXXXXX/ADC/

# 编译项目
make

# 查看项目信息
make info

# 清理生成文件
make clean

# 烧录到芯片（需要配置）
make flash
```

## 编码转换详解

### 自动编码检测

脚本使用 `chardet` 库自动检测文件编码：

```
File: STC8Gxxx.h
Detected encoding: gbk (confidence: 0.99)
文件: STC8Gxxx.h
检测到编码: gbk (置信度: 0.99)
Successfully read with gbk encoding
成功使用 gbk 编码读取
```

### 编码转换流程

1. **检测阶段**: 使用 chardet 检测文件编码
2. **读取阶段**: 使用检测到的编码读取文件内容
3. **转换阶段**: 将内容转换为 UTF-8 格式
4. **备份阶段**: 创建原文件的 .bak 备份
5. **保存阶段**: 以 UTF-8 编码保存转换后的文件

### 批量编码预处理示例

```bash
# 预处理整个项目目录的编码
python3 convert_keil51_to_sdcc.py keil51_example/ --preprocess-encoding

# 输出示例：
# Preprocessing directory for encoding: keil51_example/
# 预处理目录编码: keil51_example/
# Found 3 files to preprocess:
# 找到 3 个文件需要预处理:
# 
# Processing: STC8Gxxx.h
# 处理中: STC8Gxxx.h
# File: STC8Gxxx.h
# Detected encoding: gbk (confidence: 0.99)
# Backup created: STC8Gxxx.h.bak
# File converted to UTF-8: STC8Gxxx.h
```

## 实际使用场景

### 场景1：单个文件转换
适用于只需要转换个别头文件或源文件的情况。

### 场景2：整个项目迁移
适用于将完整的 Keil C51 项目迁移到 SDCC 的情况。

### 场景3：多项目批量处理
适用于包含多个子项目的大型项目的批量转换。

### 场景4：编码问题修复
适用于解决中文注释乱码或编码不一致的问题。

## 注意事项

1. **备份原文件**: 建议在转换前备份原始文件（脚本会自动创建 .bak 备份）
2. **验证结果**: 转换后请验证生成的代码是否正确
3. **编译测试**: 使用 SDCC 编译转换后的代码以确保兼容性
4. **手动调整**: 某些复杂语法可能需要手动调整
5. **编码统一**: 建议项目中所有文件使用统一的 UTF-8 编码
6. **路径检查**: 确保生成的 Makefile 中的文件路径正确

## 兼容性

- **源格式**: Keil C51 (C51 编译器)
- **目标格式**: SDCC (Small Device C Compiler)
- **目标平台**: 8051 系列微控制器
- **测试芯片**: STC8G 系列

## 许可证

本项目采用 MIT 许可证。

## 完整使用流程示例

以下是一个完整的项目转换流程示例：

### 步骤1：准备工作

```bash
# 克隆或下载转换工具
git clone <repository-url>
cd keil51_to_sdcc

# 安装依赖
pip install -r requirements.txt
```

### 步骤2：检查原始项目结构

```bash
# 查看原始 Keil 项目
ls -la keil51_example_2/
# 输出：
# ├── ADC/
# │   ├── ADCxx.Uv2      # Keil 项目文件
# │   └── main.c         # 源文件（可能是 GBK 编码）
# ├── ADC2/
# │   ├── ADCxx.Uv2
# │   └── main.c
# └── STC8Gxxx.h         # 头文件（可能是 GBK 编码）
```

### 步骤3：执行转换

```bash
# 执行批量转换并生成 Makefile
python3 convert_keil51_to_sdcc.py keil51_example_2/

# 转换过程输出示例：
# Batch converting project directory: keil51_example_2/
# 批量转换项目目录: keil51_example_2/
# 
# Found project files:
# 找到项目文件:
#   - ADC2/ADCxx.Uv2
#   - ADC/ADCxx.Uv2
# 
# File: STC8Gxxx.h
# Detected encoding: gbk (confidence: 0.99)
# 检测到编码: gbk (置信度: 0.99)
# Successfully read with gbk encoding
# 成功使用 gbk 编码读取
# 
# Conversion completed successfully!
# 转换成功完成!
# Files converted: 3
# 转换文件数: 3
# Output directory: temp_converted_20231201_143022
# 输出目录: temp_converted_20231201_143022
```

### 步骤4：验证转换结果

```bash
# 进入转换后的目录
cd temp_converted_20231201_143022/

# 查看转换后的项目结构
ls -la
# 输出：
# ├── ADC/
# │   ├── Makefile       # 自动生成的 Makefile
# │   └── main.c         # 转换后的源文件（UTF-8 编码）
# ├── ADC2/
# │   ├── Makefile
# │   └── main.c
# └── STC8Gxxx.h         # 转换后的头文件（UTF-8 编码）

# 检查 Makefile 内容
cat ADC/Makefile
```

### 步骤5：编译测试

```bash
# 进入第一个项目目录
cd ADC/

# 查看项目信息
make info
# 输出：
# Project: ADC
# Target: main
# MCU: 8051
# C Sources: main.c
# H Sources: ../STC8Gxxx.h

# 编译项目
make
# 如果编译成功，会生成 main.hex 文件

# 清理生成文件
make clean
```

### 步骤6：处理编译错误（如果有）

如果编译过程中出现错误，可能需要手动调整：

```bash
# 检查转换后的代码
cat main.c
cat ../STC8Gxxx.h

# 根据 SDCC 编译器的错误信息进行必要的手动调整
# 常见调整包括：
# - 修正复杂的宏定义
# - 调整中断向量号
# - 修正特殊的位操作语法
```

### 步骤7：项目部署

```bash
# 将转换后的项目复制到目标位置
cp -r temp_converted_20231201_143022/ ~/my_sdcc_projects/

# 或者直接在转换后的目录中继续开发
cd temp_converted_20231201_143022/ADC/
# 开始使用 SDCC 进行开发...
```

## 故障排除

### 常见问题及解决方案

1. **编码检测失败**
   ```bash
   # 手动指定编码预处理
   python3 convert_keil51_to_sdcc.py project_dir/ --preprocess-encoding
   ```

2. **Makefile 路径错误**
   ```bash
   # 检查生成的 Makefile 中的文件路径
   # 手动调整相对路径（如果需要）
   ```

3. **SDCC 编译错误**
   ```bash
   # 查看 SDCC 编译器文档
   # 根据错误信息调整代码语法
   ```

4. **中文注释乱码**
   ```bash
   # 确保终端支持 UTF-8 显示
   export LANG=en_US.UTF-8
   ```

## 贡献

欢迎提交 Issue 和 Pull Request 来改进这个工具！

### 贡献指南

1. Fork 本项目
2. 创建特性分支 (`git checkout -b feature/AmazingFeature`)
3. 提交更改 (`git commit -m 'Add some AmazingFeature'`)
4. 推送到分支 (`git push origin feature/AmazingFeature`)
5. 开启 Pull Request

---

**注意**: 这个工具专门为 STC8G 系列微控制器的 Keil C51 到 SDCC 转换而设计，但也适用于其他 8051 系列芯片的类似转换需求。