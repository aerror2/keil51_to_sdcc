# SDCC Makefile generated from Keil project
# SDCC Makefile 从Keil工程生成

# Project settings
PROJECT_NAME = ADC
TARGET_DEVICE = AT89C52

# Directory settings
BUILD_DIR = build
SRC_DIR = .

# Compiler settings
CC = sdcc
CFLAGS = -mmcs51 --model-small --std-c99
LDFLAGS = --code-loc 0x0000 --data-loc 0x30

# Source files
C_SOURCES = main.c
H_SOURCES = ../STC8Gxxx.h

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
