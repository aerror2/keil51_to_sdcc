
/*------------------------------------------------------------------*/
/* --- STC MCU International Limited -------------------------------*/
/* --- STC 1T Series MCU RC Demo -----------------------------------*/
/* --- Mobile: (86)13922805190 -------------------------------------*/
/* --- Fax: 86-0513-55012956,55012947,55012969 ---------------------*/
/* --- Tel: 86-0513-55012928,55012929,55012966 ---------------------*/
/* --- Web: www.stcmcudata.com -------------------------------------*/
/* --- Web: www.stcai.com -------------------------------------*/
/* --- BBS: www.stcaimcu.com -------------------------------------*/
/* If you want to use the program or the program referenced in the  */
/* article, please specify in which data and procedures from STC    */
/*------------------------------------------------------------------*/



#ifndef	_STC8Gxxx_H
#define	_STC8Gxxx_H

#include <8051.h> // SDCC compatibility header

/*  BYTE Registers  */
__sfr __at(0x80) P0;
__sfr __at(0x81) SP;
__sfr __at(0x82) DPL;
__sfr __at(0x83) DPH;
__sfr __at(0x84) S4CON;
__sfr __at(0x85) S4BUF;
__sfr __at(0x87) PCON;

__sfr __at(0x88) TCON;
__sfr __at(0x89) TMOD;
__sfr __at(0x8A) TL0;
__sfr __at(0x8B) TL1;
__sfr __at(0x8C) TH0;
__sfr __at(0x8D) TH1;
__sfr __at(0x8E) AUXR;
__sfr __at(0x8F) INT_CLKO;
__sfr __at(0x8F) INTCLKO;

__sfr __at(0x90) P1;
__sfr __at(0x91) P1M1;	//P1M1.n,P1M0.n 	=00--->Standard,	01--->push-pull		实际上1T的都一样
__sfr __at(0x92) P1M0;	//					=10--->pure input,	11--->open drain
__sfr __at(0x93) P0M1;	//P0M1.n,P0M0.n 	=00--->Standard,	01--->push-pull
__sfr __at(0x94) P0M0;	//					=10--->pure input,	11--->open drain
__sfr __at(0x95) P2M1;	//P2M1.n,P2M0.n 	=00--->Standard,	01--->push-pull
__sfr __at(0x96) P2M0;	//					=10--->pure input,	11--->open drain

__sfr __at(0x98) SCON;
__sfr __at(0x99) SBUF;
__sfr __at(0x9A) S2CON;	//
__sfr __at(0x9B) S2BUF;	//
__sfr __at(0x9D) IRCBAND;	//IRC频段选择检测
__sfr __at(0x9E) LIRTRIM;	//IRC频率微调寄存器
__sfr __at(0x9F) IRTRIM;	//IRC频率调整寄存器

__sfr __at(0xA0) P2;
__sfr __at(0xA1) BUS_SPEED;
__sfr __at(0xA2) P_SW1;

__sfr __at(0xA8) IE;
__sfr __at(0xA9) SADDR;	//串口1从机地址寄存器 // UART/Serial
__sfr __at(0xAA) WKTCL;	//唤醒定时器低字节 // Timer
__sfr __at(0xAB) WKTCH;	//唤醒定时器高字节 // Timer
__sfr __at(0xAC) S3CON;
__sfr __at(0xAD) S3BUF;
__sfr __at(0xAE) TA;	//DPTR时序控制寄存器 // Control
__sfr __at(0xAF) IE2;	//中断允许寄存器2 // Interrupt

__sfr __at(0xB0) P3;
__sfr __at(0xB1) P3M1;	//P3M1.n,P3M0.n 	=00--->Standard,	01--->push-pull
__sfr __at(0xB2) P3M0;	//					=10--->pure input,	11--->open drain
__sfr __at(0xB3) P4M1;	//P4M1.n,P4M0.n 	=00--->Standard,	01--->push-pull
__sfr __at(0xB4) P4M0;	//					=10--->pure input,	11--->open drain
__sfr __at(0xB5) IP2;	//中断优先级控制寄存器2 // Interrupt // Control
__sfr __at(0xB6) IP2H;	//高中断优先级控制寄存器2 // Interrupt // Control
__sfr __at(0xB7) IPH;	//高中断优先级控制寄存器 // Interrupt // Control

__sfr __at(0xB8) IP;	//中断优先级控制寄存器 // Interrupt // Control
__sfr __at(0xB9) SADEN;	//串口1从机地址屏蔽寄存器 // UART/Serial
__sfr __at(0xBA) P_SW2;	//外设端口切换寄存器2 // Port
__sfr __at(0xBC) ADC_CONTR;	//ADC控制寄存器 // Control // Analog to Digital Converter
__sfr __at(0xBD) ADC_RES;	//ADC结果高字节 // Analog to Digital Converter
__sfr __at(0xBE) ADC_RESL;	//ADC结果低字节 // Analog to Digital Converter

__sfr __at(0xC0) P4;
__sfr __at(0xC1) WDT_CONTR;

__sfr __at(0xC2) IAP_DATA;
__sfr __at(0xC3) IAP_ADDRH;
__sfr __at(0xC4) IAP_ADDRL;
__sfr __at(0xC5) IAP_CMD;
__sfr __at(0xC6) IAP_TRIG;
__sfr __at(0xC7) IAP_CONTR;

__sfr __at(0xC2) ISP_DATA;
__sfr __at(0xC3) ISP_ADDRH;
__sfr __at(0xC4) ISP_ADDRL;
__sfr __at(0xC5) ISP_CMD;
__sfr __at(0xC6) ISP_TRIG;
__sfr __at(0xC7) ISP_CONTR;

__sfr __at(0xC8) P5;	//
__sfr __at(0xC9) P5M1;	//	P5M1.n,P5M0.n 	=00--->Standard,	01--->push-pull
__sfr __at(0xCA) P5M0;	//					=10--->pure input,	11--->open drain
__sfr __at(0xCB) P6M1;	//	P6M1.n,P6M0.n 	=00--->Standard,	01--->push-pull
__sfr __at(0xCC) P6M0;	//					=10--->pure input,	11--->open drain
__sfr __at(0xCD) SPSTAT;	//
__sfr __at(0xCE) SPCTL;	//
__sfr __at(0xCF) SPDAT;	//

__sfr __at(0xD0) PSW;
__sfr __at(0xD1) T4T3M;
__sfr __at(0xD2) T4H;
__sfr __at(0xD3) T4L;
__sfr __at(0xD4) T3H;
__sfr __at(0xD5) T3L;
__sfr __at(0xD6) T2H;
__sfr __at(0xD7) T2L;

__sfr __at(0xD2) TH4;
__sfr __at(0xD3) TL4;
__sfr __at(0xD4) TH3;
__sfr __at(0xD5) TL3;
__sfr __at(0xD6) TH2;
__sfr __at(0xD7) TL2;

__sfr __at(0xD8) CCON;	//
__sfr __at(0xD9) CMOD;	//
__sfr __at(0xDA) CCAPM0;	//PCA模块0的工作模式寄存器 // Mode
__sfr __at(0xDB) CCAPM1;	//PCA模块1的工作模式寄存器 // Mode
__sfr __at(0xDC) CCAPM2;	//PCA模块2的工作模式寄存器 // Mode
__sfr __at(0xDE) ADCCFG;	//
__sfr __at(0xDF) IP3;	//中断优先级控制寄存器3 // Interrupt // Control

__sfr __at(0xE0) ACC;
__sfr __at(0xE1) P7M1;	//	P7M1.n,P7M0.n 	=00--->Standard,	01--->push-pull
__sfr __at(0xE2) P7M0;	//					=10--->pure input,	11--->open drain
__sfr __at(0xE3) DPS;
__sfr __at(0xE4) DPL1;
__sfr __at(0xE5) DPH1;
__sfr __at(0xE6) CMPCR1;
__sfr __at(0xE7) CMPCR2;

__sfr __at(0xE8) P6;
__sfr __at(0xE9) CL;	//
__sfr __at(0xEA) CCAP0L;	//PCA模块0的捕获/比较寄存器低8位。 // Compare // Capture
__sfr __at(0xEB) CCAP1L;	//PCA模块1的捕获/比较寄存器低8位。 // Compare // Capture
__sfr __at(0xEC) CCAP2L;	//PCA模块2的捕获/比较寄存器低8位。 // Compare // Capture
__sfr __at(0xEE) IP3H;	//高中断优先级控制寄存器3 // Interrupt // Control
__sfr __at(0xEF) AUXINTIF;	//辅助中断标志 B6-INT4IF, B5-INT3IF, B4-INT2IF, B2-T4IF, B1-T3IF, B0-T2IF // Interrupt // Flag

__sfr __at(0xF0) B;
__sfr __at(0xF1) PWMSET;	//增强型PWM全局配置寄存器 // Configuration // Pulse Width Modulation
__sfr __at(0xF2) PCA_PWM0;	//PCA模块0 PWM寄存器。 // Pulse Width Modulation
__sfr __at(0xF3) PCA_PWM1;	//PCA模块1 PWM寄存器。 // Pulse Width Modulation
__sfr __at(0xF4) PCA_PWM2;	//PCA模块2 PWM寄存器。 // Pulse Width Modulation
__sfr __at(0xF5) IAP_TPS;	//IAP等待时间控制寄存器 // Control
__sfr __at(0xF6) PWMCFG01;	//增强型PWM配置寄存器 // Configuration // Configuration // Configuration // Pulse Width Modulation // Pulse Width Modulation // Pulse Width Modulation
__sfr __at(0xF7) PWMCFG23;	//增强型PWM配置寄存器 // Configuration // Configuration // Configuration // Pulse Width Modulation // Pulse Width Modulation // Pulse Width Modulation

__sfr __at(0xF8) P7;
__sfr __at(0xF9) CH;
__sfr __at(0xFA) CCAP0H;	//PCA模块0的捕获/比较寄存器高8位。 // Compare // Capture
__sfr __at(0xFB) CCAP1H;	//PCA模块1的捕获/比较寄存器高8位。 // Compare // Capture
__sfr __at(0xFC) CCAP2H;	//PCA模块2的捕获/比较寄存器高8位。 // Compare // Capture
__sfr __at(0xFE) PWMCFG45;	//增强型PWM配置寄存器 // Configuration // Configuration // Configuration // Pulse Width Modulation // Pulse Width Modulation // Pulse Width Modulation
__sfr __at(0xFF) RSTCFG;	//复位配置寄存器 // Reset // Configuration

//=============================================================================================================
#define P0INTE (*(volatile __xdata unsigned char *)0xfd00)	/* P0口中断使能寄存器  - Interrupt - Enable*/
#define P1INTE (*(volatile __xdata unsigned char *)0xfd01)	/* P1口中断使能寄存器  - Interrupt - Enable*/
#define P2INTE (*(volatile __xdata unsigned char *)0xfd02)	/* P2口中断使能寄存器  - Interrupt - Enable*/
#define P3INTE (*(volatile __xdata unsigned char *)0xfd03)	/* P3口中断使能寄存器  - Interrupt - Enable*/
#define P4INTE (*(volatile __xdata unsigned char *)0xfd04)	/* P4口中断使能寄存器  - Interrupt - Enable*/
#define P5INTE (*(volatile __xdata unsigned char *)0xfd05)	/* P5口中断使能寄存器  - Interrupt - Enable*/
#define P6INTE (*(volatile __xdata unsigned char *)0xfd06)	/* P6口中断使能寄存器  - Interrupt - Enable*/
#define P7INTE (*(volatile __xdata unsigned char *)0xfd07)	/* P7口中断使能寄存器  - Interrupt - Enable*/
#define P0INTF (*(volatile __xdata unsigned char *)0xfd10)	/* P0口中断标志寄存器  - Interrupt - Flag*/
#define P1INTF (*(volatile __xdata unsigned char *)0xfd11)	/* P1口中断标志寄存器  - Interrupt - Flag*/
#define P2INTF (*(volatile __xdata unsigned char *)0xfd12)	/* P2口中断标志寄存器  - Interrupt - Flag*/
#define P3INTF (*(volatile __xdata unsigned char *)0xfd13)	/* P3口中断标志寄存器  - Interrupt - Flag*/
#define P4INTF (*(volatile __xdata unsigned char *)0xfd14)	/* P4口中断标志寄存器  - Interrupt - Flag*/
#define P5INTF (*(volatile __xdata unsigned char *)0xfd15)	/* P5口中断标志寄存器  - Interrupt - Flag*/
#define P6INTF (*(volatile __xdata unsigned char *)0xfd16)	/* P6口中断标志寄存器  - Interrupt - Flag*/
#define P7INTF (*(volatile __xdata unsigned char *)0xfd17)	/* P7口中断标志寄存器  - Interrupt - Flag*/
#define P0IM0 (*(volatile __xdata unsigned char *)0xfd20)	/* P0口中断模式寄存器0  - Interrupt - Mode*/
#define P1IM0 (*(volatile __xdata unsigned char *)0xfd21)	/* P1口中断模式寄存器0  - Interrupt - Mode*/
#define P2IM0 (*(volatile __xdata unsigned char *)0xfd22)	/* P2口中断模式寄存器0  - Interrupt - Mode*/
#define P3IM0 (*(volatile __xdata unsigned char *)0xfd23)	/* P3口中断模式寄存器0  - Interrupt - Mode*/
#define P4IM0 (*(volatile __xdata unsigned char *)0xfd24)	/* P4口中断模式寄存器0  - Interrupt - Mode*/
#define P5IM0 (*(volatile __xdata unsigned char *)0xfd25)	/* P5口中断模式寄存器0  - Interrupt - Mode*/
#define P6IM0 (*(volatile __xdata unsigned char *)0xfd26)	/* P6口中断模式寄存器0  - Interrupt - Mode*/
#define P7IM0 (*(volatile __xdata unsigned char *)0xfd27)	/* P7口中断模式寄存器0  - Interrupt - Mode*/
#define P0IM1 (*(volatile __xdata unsigned char *)0xfd30)	/* P0口中断模式寄存器1  - Interrupt - Mode*/
#define P1IM1 (*(volatile __xdata unsigned char *)0xfd31)	/* P1口中断模式寄存器1  - Interrupt - Mode*/
#define P2IM1 (*(volatile __xdata unsigned char *)0xfd32)	/* P2口中断模式寄存器1  - Interrupt - Mode*/
#define P3IM1 (*(volatile __xdata unsigned char *)0xfd33)	/* P3口中断模式寄存器1  - Interrupt - Mode*/
#define P4IM1 (*(volatile __xdata unsigned char *)0xfd34)	/* P4口中断模式寄存器1  - Interrupt - Mode*/
#define P5IM1 (*(volatile __xdata unsigned char *)0xfd35)	/* P5口中断模式寄存器1  - Interrupt - Mode*/
#define P6IM1 (*(volatile __xdata unsigned char *)0xfd36)	/* P6口中断模式寄存器1  - Interrupt - Mode*/
#define P7IM1 (*(volatile __xdata unsigned char *)0xfd37)	/* P7口中断模式寄存器1  - Interrupt - Mode*/

#define INTE_0       0x01	/* 使能Px.0口中断功能  - Interrupt - Enable*/
#define INTE_1       0x02	/* 使能Px.1口中断功能  - Interrupt - Enable*/
#define INTE_2       0x04	/* 使能Px.2口中断功能  - Interrupt - Enable*/
#define INTE_3       0x08	/* 使能Px.3口中断功能  - Interrupt - Enable*/
#define INTE_4       0x10	/* 使能Px.4口中断功能  - Interrupt - Enable*/
#define INTE_5       0x20	/* 使能Px.5口中断功能  - Interrupt - Enable*/
#define INTE_6       0x40	/* 使能Px.6口中断功能  - Interrupt - Enable*/
#define INTE_7       0x80	/* 使能Px.7口中断功能  - Interrupt - Enable*/

#define INTF_0       0x01	/* Px.0口中断标志  - Interrupt - Flag*/
#define INTF_1       0x02	/* Px.1口中断标志  - Interrupt - Flag*/
#define INTF_2       0x04	/* Px.2口中断标志  - Interrupt - Flag*/
#define INTF_3       0x08	/* Px.3口中断标志  - Interrupt - Flag*/
#define INTF_4       0x10	/* Px.4口中断标志  - Interrupt - Flag*/
#define INTF_5       0x20	/* Px.5口中断标志  - Interrupt - Flag*/
#define INTF_6       0x40	/* Px.6口中断标志  - Interrupt - Flag*/
#define INTF_7       0x80	/* Px.7口中断标志  - Interrupt - Flag*/

#define	INT_FALL	0		/* 下降沿中断    - Interrupt*/
#define	INT_RISE	1		/* 上升沿中断    - Interrupt*/
#define	INT_LOW		2		/* 低电平中断    - Interrupt*/
#define	INT_HIGH	3		/* 高电平中断    - Interrupt*/


#define CLKSEL (*(volatile __xdata unsigned char *)0xfe00)	/* 主时钟源选择     - Clock*/
#define CKSEL (*(volatile __xdata unsigned char *)0xfe00)	/* 主时钟源选择     - Clock*/
#define CLKDIV (*(volatile __xdata unsigned char *)0xfe01)	/* 主时钟分频       - Clock*/
#define CKDIV (*(volatile __xdata unsigned char *)0xfe01)	/* 主时钟分频       - Clock*/
#define IRC24MCR (*(volatile __xdata unsigned char *)0xfe02)	/* IRC 24MHZ控制    - Control*/
#define XOSCCR (*(volatile __xdata unsigned char *)0xfe03)	/* XOSC控制         - Control*/
#define IRC32KCR (*(volatile __xdata unsigned char *)0xfe04)	/* IRC 32KHZ控制    - Control*/
#define MCLKOCR (*(volatile __xdata unsigned char *)0xfe05)	/* 主时钟输出控制寄存器   - Clock - Control*/
#define IRCDB (*(volatile __xdata unsigned char *)0xfe06)	/* 内部高速振荡器去抖控制寄存器   - Control*/

#define P0PU (*(volatile __xdata unsigned char *)0xfe10)	/* P0 3.7K Pull Up Enable  */
#define P1PU (*(volatile __xdata unsigned char *)0xfe11)	/* P1 3.7K Pull Up Enable  */
#define P2PU (*(volatile __xdata unsigned char *)0xfe12)	/* P2 3.7K Pull Up Enable  */
#define P3PU (*(volatile __xdata unsigned char *)0xfe13)	/* P3 3.7K Pull Up Enable  */
#define P4PU (*(volatile __xdata unsigned char *)0xfe14)	/* P4 3.7K Pull Up Enable  */
#define P5PU (*(volatile __xdata unsigned char *)0xfe15)	/* P5 3.7K Pull Up Enable  */
#define P6PU (*(volatile __xdata unsigned char *)0xfe16)	/* P6 3.7K Pull Up Enable  */
#define P7PU (*(volatile __xdata unsigned char *)0xfe17)	/* P7 3.7K Pull Up Enable  */

#define P0NCS (*(volatile __xdata unsigned char *)0xfe18)	/* P0 Non Schmit Trigger  0: 使能端口施密特触发功能(默认), 1: 禁止   - Port - Enable - Disable*/
#define P1NCS (*(volatile __xdata unsigned char *)0xfe19)	/* P1 Non Schmit Trigger  */
#define P2NCS (*(volatile __xdata unsigned char *)0xfe1a)	/* P2 Non Schmit Trigger  */
#define P3NCS (*(volatile __xdata unsigned char *)0xfe1b)	/* P3 Non Schmit Trigger  */
#define P4NCS (*(volatile __xdata unsigned char *)0xfe1c)	/* P4 Non Schmit Trigger  */
#define P5NCS (*(volatile __xdata unsigned char *)0xfe1d)	/* P5 Non Schmit Trigger  */
#define P6NCS (*(volatile __xdata unsigned char *)0xfe1e)	/* P6 Non Schmit Trigger  */
#define P7NCS (*(volatile __xdata unsigned char *)0xfe1f)	/* P7 Non Schmit Trigger  */

#define P0SR (*(volatile __xdata unsigned char *)0xfe20)	/* P0口电平转换速率寄存器 默认1: 普通模式, 0:高速模式  - Mode*/
#define P1SR (*(volatile __xdata unsigned char *)0xfe21)	/* P1口电平转换速率寄存器  */
#define P2SR (*(volatile __xdata unsigned char *)0xfe22)	/* P2口电平转换速率寄存器  */
#define P3SR (*(volatile __xdata unsigned char *)0xfe23)	/* P3口电平转换速率寄存器  */
#define P4SR (*(volatile __xdata unsigned char *)0xfe24)	/* P4口电平转换速率寄存器  */
#define P5SR (*(volatile __xdata unsigned char *)0xfe25)	/* P5口电平转换速率寄存器  */
#define P6SR (*(volatile __xdata unsigned char *)0xfe26)	/* P6口电平转换速率寄存器  */
#define P7SR (*(volatile __xdata unsigned char *)0xfe27)	/* P7口电平转换速率寄存器  */

#define P0DR (*(volatile __xdata unsigned char *)0xfe28)	/* P0口驱动电流控制寄存器 默认1: 普通模式, 0:大电流模式 - Mode - Control*/
#define P1DR (*(volatile __xdata unsigned char *)0xfe29)	/* P1口驱动电流控制寄存器  - Control*/
#define P2DR (*(volatile __xdata unsigned char *)0xfe2a)	/* P2口驱动电流控制寄存器  - Control*/
#define P3DR (*(volatile __xdata unsigned char *)0xfe2b)	/* P3口驱动电流控制寄存器  - Control*/
#define P4DR (*(volatile __xdata unsigned char *)0xfe2c)	/* P4口驱动电流控制寄存器  - Control*/
#define P5DR (*(volatile __xdata unsigned char *)0xfe2d)	/* P5口驱动电流控制寄存器  - Control*/
#define P6DR (*(volatile __xdata unsigned char *)0xfe2e)	/* P6口驱动电流控制寄存器  - Control*/
#define P7DR (*(volatile __xdata unsigned char *)0xfe2f)	/* P7口驱动电流控制寄存器  - Control*/

#define P0IE (*(volatile __xdata unsigned char *)0xfe30)	/* P0口输入使能控制寄存器, 1允许(默认), 0禁止  - Control - Enable - Disable*/
#define P1IE (*(volatile __xdata unsigned char *)0xfe31)	/* P1口输入使能控制寄存器  - Control - Enable*/
#define P2IE (*(volatile __xdata unsigned char *)0xfe32)	/* P2口输入使能控制寄存器  - Control - Enable*/
#define P3IE (*(volatile __xdata unsigned char *)0xfe33)	/* P3口输入使能控制寄存器  - Control - Enable*/
#define P4IE (*(volatile __xdata unsigned char *)0xfe34)	/* P4口输入使能控制寄存器  - Control - Enable*/
#define P5IE (*(volatile __xdata unsigned char *)0xfe35)	/* P5口输入使能控制寄存器  - Control - Enable*/
#define P6IE (*(volatile __xdata unsigned char *)0xfe36)	/* P6口输入使能控制寄存器  - Control - Enable*/
#define P7IE (*(volatile __xdata unsigned char *)0xfe37)	/* P7口输入使能控制寄存器  - Control - Enable*/

#define I2CCFG (*(volatile __xdata unsigned char *)0xfe80)	/* I2C配置寄存器   - Configuration - Inter-Integrated Circuit*/
#define I2CMSCR (*(volatile __xdata unsigned char *)0xfe81)	/* I2C主机控制寄存器   - Control - Inter-Integrated Circuit*/
#define I2CMSST (*(volatile __xdata unsigned char *)0xfe82)	/* I2C主机状态寄存器   - Status - Inter-Integrated Circuit*/
#define I2CSLCR (*(volatile __xdata unsigned char *)0xfe83)	/* I2C从机控制寄存器   - Control - Inter-Integrated Circuit*/
#define I2CSLST (*(volatile __xdata unsigned char *)0xfe84)	/* I2C从机状态寄存器   - Status - Inter-Integrated Circuit*/
#define I2CSLADR (*(volatile __xdata unsigned char *)0xfe85)	/* I2C从机地址寄存器   - Inter-Integrated Circuit*/
#define I2CTXD (*(volatile __xdata unsigned char *)0xfe86)	/* I2C数据发送寄存器   - Data - Inter-Integrated Circuit*/
#define I2CRXD (*(volatile __xdata unsigned char *)0xfe87)	/* I2C数据接收寄存器   - Data - Inter-Integrated Circuit*/
#define I2CMSAUX (*(volatile __xdata unsigned char *)0xfe88)	/* I2C主机辅助控制寄存器   - Control - Inter-Integrated Circuit*/

#define TM2PS (*(volatile __xdata unsigned char *)0xfea2)	/* 定时器2时钟预分频寄存器   - Timer - Clock*/
#define TM3PS (*(volatile __xdata unsigned char *)0xfea3)	/* 定时器3时钟预分频寄存器   - Timer - Clock*/
#define TM4PS (*(volatile __xdata unsigned char *)0xfea4)	/* 定时器4时钟预分频寄存器   - Timer - Clock*/
#define ADCTIM (*(volatile __xdata unsigned char *)0xfea8)	/* ADC时序控制寄存器   - Control - Analog to Digital Converter*/

// PWMSET(0xF1)控制位定义  // Bit Definitions // Control // Pulse Width Modulation
#define	ENGLBSET	0x80	/* 1: 6组PWM统一采用PWMCFG01中的PWM0的设置进行配置, 0: 各组PWM独立设置  - Configuration - Pulse Width Modulation*/
#define	PWMRST		0x40	/* 1: 复位所有XFR寄存器(但不复位SFR寄存器), 软件清零  - Reset*/
#define	ENPWM5		0x20	/* 1: 使能PWM5(PWM50~PWM54), 0: 关闭PWM5  - Enable - Pulse Width Modulation*/
#define	ENPWM4		0x10	/* 1: 使能PWM4(PWM40~PWM47), 0: 关闭PWM4  - Enable - Pulse Width Modulation*/
#define	ENPWM3		0x08	/* 1: 使能PWM3(PWM30~PWM37), 0: 关闭PWM3  - Enable - Pulse Width Modulation*/
#define	ENPWM2		0x04	/* 1: 使能PWM2(PWM20~PWM27), 0: 关闭PWM2  - Enable - Pulse Width Modulation*/
#define	ENPWM1		0x02	/* 1: 使能PWM1(PWM10~PWM17), 0: 关闭PWM1  - Enable - Pulse Width Modulation*/
#define	ENPWM0		0x01	/* 1: 使能PWM0(PWM00~PWM07), 0: 关闭PWM0  - Enable - Pulse Width Modulation*/

// PWMCFG01(0xF6)控制位定义 // Bit Definitions // Control // Pulse Width Modulation
#define	PWM1CBIF	0x80	/* 1: PWM1计数器归零中断标志位, 归零硬件就置1, 软件清零  - Interrupt - Flag - Counter - Pulse Width Modulation*/
#define	EPWM1CBI	0x40	/* 1: 使能计数器归零中断， 0: 关闭计数器归零中断  - Interrupt - Enable - Counter*/
#define	FLTPS0		0x20	/*  */
#define	PWM1CEN		0x10	/* 1: PWM1开始计数, 0: 停止计数  - Pulse Width Modulation*/
#define	PWM0CBIF	0x08	/* 1: PWM0计数器归零中断标志位, 归零硬件就置1, 软件清零  - Interrupt - Flag - Counter - Pulse Width Modulation*/
#define	EPWM0CBI	0x04	/* 1: 使能计数器归零中断， 0: 关闭计数器归零中断  - Interrupt - Enable - Counter*/
#define	ENPWM0TA	0x02	/* 1: 当PWM计数值等于PWM0TADC时, 触发ADC转换  - Pulse Width Modulation - Analog to Digital Converter*/
#define	PWM0CEN		0x01	/* 1: PWM0开始计数, 0: 停止计数  - Pulse Width Modulation*/

// PWMCFG23(0xF7)控制位定义 // Bit Definitions // Control // Pulse Width Modulation
#define	PWM3CBIF	0x80	/* 1: PWM3计数器归零中断标志位, 归零硬件就置1, 软件清零  - Interrupt - Flag - Counter - Pulse Width Modulation*/
#define	EPWM3CBI	0x40	/* 1: 使能计数器归零中断， 0: 关闭计数器归零中断  - Interrupt - Enable - Counter*/
#define	FLTPS1		0x20	/*  */
#define	PWM3CEN		0x10	/* 1: PWM3开始计数, 0: 停止计数  - Pulse Width Modulation*/
#define	PWM2CBIF	0x08	/* 1: PWM2计数器归零中断标志位, 归零硬件就置1, 软件清零  - Interrupt - Flag - Counter - Pulse Width Modulation*/
#define	EPWM2CBI	0x04	/* 1: 使能计数器归零中断， 0: 关闭计数器归零中断  - Interrupt - Enable - Counter*/
#define	ENPWM2TA	0x02	/* 1: 当PWM计数值等于PWM2TADC时, 触发ADC转换  - Pulse Width Modulation - Analog to Digital Converter*/
#define	PWM2CEN		0x01	/* 1: PWM2开始计数, 0: 停止计数  - Pulse Width Modulation*/

// PWMCFG45(0xFE)控制位定义 // Bit Definitions // Control // Pulse Width Modulation
#define	PWM5CBIF	0x80	/* 1: PWM5计数器归零中断标志位, 归零硬件就置1, 软件清零  - Interrupt - Flag - Counter - Pulse Width Modulation*/
#define	EPWM5CBI	0x40	/* 1: 使能计数器归零中断， 0: 关闭计数器归零中断  - Interrupt - Enable - Counter*/
#define	FLTPS2		0x20	/*  */
#define	PWM5CEN		0x10	/* 1: PWM5开始计数, 0: 停止计数  - Pulse Width Modulation*/
#define	PWM4CBIF	0x08	/* 1: PWM4计数器归零中断标志位, 归零硬件就置1, 软件清零  - Interrupt - Flag - Counter - Pulse Width Modulation*/
#define	EPWM4CBI	0x04	/* 1: 使能计数器归零中断， 0: 关闭计数器归零中断  - Interrupt - Enable - Counter*/
#define	ENPWM4TA	0x02	/* 1: 当PWM计数值等于PWM4TADC时, 触发ADC转换  - Pulse Width Modulation - Analog to Digital Converter*/
#define	PWM4CEN		0x01	/* 1: PWM4开始计数, 0: 停止计数  - Pulse Width Modulation*/

//PWMxIF  PWM0中断标志寄存器位定义 // Bit Definitions // Interrupt // Flag // Pulse Width Modulation
#define	C7IF	0x80	/* 1: PWMx7匹配中断标志位, 软件清零  - Interrupt - Flag - Pulse Width Modulation*/
#define	C6IF	0x40	/* 1: PWMx6匹配中断标志位, 软件清零  - Interrupt - Flag - Pulse Width Modulation*/
#define	C5IF	0x20	/* 1: PWMx5匹配中断标志位, 软件清零  - Interrupt - Flag - Pulse Width Modulation*/
#define	C4IF	0x10	/* 1: PWMx4匹配中断标志位, 软件清零  - Interrupt - Flag - Pulse Width Modulation*/
#define	C3IF	0x08	/* 1: PWMx3匹配中断标志位, 软件清零  - Interrupt - Flag - Pulse Width Modulation*/
#define	C2IF	0x04	/* 1: PWMx2匹配中断标志位, 软件清零  - Interrupt - Flag - Pulse Width Modulation*/
#define	C1IF	0x02	/* 1: PWMx1匹配中断标志位, 软件清零  - Interrupt - Flag - Pulse Width Modulation*/
#define	C0IF	0x01	/* 1: PWMx0匹配中断标志位, 软件清零  - Interrupt - Flag - Pulse Width Modulation*/

//PWMxCKS PWM时钟选择寄存器位定义 // Bit Definitions // Clock // Pulse Width Modulation
#define	CKS_TIMER2	0x10	/* 使用定时器2溢出做PWM时钟  - Timer - Clock - Pulse Width Modulation*/
#define	CKS_1T		0
#define	CKS_2T		1
#define	CKS_3T		2
#define	CKS_4T		3
#define	CKS_5T		4
#define	CKS_6T		5
#define	CKS_7T		6
#define	CKS_8T		7
#define	CKS_9T		8
#define	CKS_10T		9
#define	CKS_11T		10
#define	CKS_12T		11
#define	CKS_13T		12
#define	CKS_14T		13
#define	CKS_15T		14
#define	CKS_16T		15

//PWMxxCR PWM通道控制寄存器位定义 // Bit Definitions // Control // Pulse Width Modulation
#define	ENO		0x80	/* 1: 允许对应引脚为PWM, 0: 对应引脚为GPIO  - Pulse Width Modulation*/
#define	INI		0x40	/* 1: 设置对应引脚初始电平为高电平, 0: 初始电平为低电平. 一旦启动PWM, 则引脚输出会受PWM控制  - Control - Pulse Width Modulation*/
#define	ENI		0x04	/* 1: 允许中断, 0: 禁止中断  - Interrupt - Disable*/
#define	ENT2I	0x02	/* 1: 允许上升沿中断, 0: 禁止上升沿中断 (T2匹配) - Interrupt - Disable*/
#define	ENT1I	0x01	/* 1: 允许下降沿中断, 0: 禁止下降沿中断 (T1匹配) - Interrupt - Disable*/
//PWMxxHLD PWM通道电平保持(强制输出)控制寄存器位定义 // Bit Definitions // Control // Pulse Width Modulation
#define	PWM_KeepHigh	0x02	/* PWM强制输出高电平  - Pulse Width Modulation*/
#define	PWM_KeepLow		0x01	/* PWM强制输出低电平  - Pulse Width Modulation*/
#define	PWM_Normal		0x00	/* PWM正常输出  - Pulse Width Modulation*/

#define PWM0C (*(volatile __xdata unsigned int *)0xff00)	/* PWM0计数器高字节  - Counter - Pulse Width Modulation*/
#define PWM0TADC (*(volatile __xdata unsigned int *)0xff03)	/* PWM0触发ADC计数  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM00T1 (*(volatile __xdata unsigned int *)0xff10)	/* PWM00T1计数值  - Pulse Width Modulation*/
#define PWM00T2 (*(volatile __xdata unsigned int *)0xff12)	/* PWM00T2计数值  - Pulse Width Modulation*/
#define PWM01T1 (*(volatile __xdata unsigned int *)0xff18)	/* PWM01T1计数值  - Pulse Width Modulation*/
#define PWM01T2 (*(volatile __xdata unsigned int *)0xff1a)	/* PWM01T2计数值  - Pulse Width Modulation*/
#define PWM02T1 (*(volatile __xdata unsigned int *)0xff20)	/* PWM02T1计数值  - Pulse Width Modulation*/
#define PWM02T2 (*(volatile __xdata unsigned int *)0xff22)	/* PWM02T2计数值  - Pulse Width Modulation*/
#define PWM03T1 (*(volatile __xdata unsigned int *)0xff28)	/* PWM03T1计数值  - Pulse Width Modulation*/
#define PWM03T2 (*(volatile __xdata unsigned int *)0xff2a)	/* PWM03T2计数值  - Pulse Width Modulation*/
#define PWM04T1 (*(volatile __xdata unsigned int *)0xff30)	/* PWM04T1计数值  - Pulse Width Modulation*/
#define PWM04T2 (*(volatile __xdata unsigned int *)0xff32)	/* PWM04T2计数值  - Pulse Width Modulation*/
#define PWM05T1 (*(volatile __xdata unsigned int *)0xff38)	/* PWM05T1计数值  - Pulse Width Modulation*/
#define PWM05T2 (*(volatile __xdata unsigned int *)0xff3a)	/* PWM05T2计数值  - Pulse Width Modulation*/
#define PWM06T1 (*(volatile __xdata unsigned int *)0xff40)	/* PWM06T1计数值  - Pulse Width Modulation*/
#define PWM06T2 (*(volatile __xdata unsigned int *)0xff42)	/* PWM06T2计数值  - Pulse Width Modulation*/
#define PWM07T1 (*(volatile __xdata unsigned int *)0xff48)	/* PWM07T1计数值  - Pulse Width Modulation*/
#define PWM07T2 (*(volatile __xdata unsigned int *)0xff4a)	/* PWM07T2计数值  - Pulse Width Modulation*/
#define PWM1C (*(volatile __xdata unsigned int *)0xff50)	/* PWM1计数器高字节  - Counter - Pulse Width Modulation*/
#define PWM1TADC (*(volatile __xdata unsigned int *)0xff53)	/* PWM1触发ADC计数  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM10T1 (*(volatile __xdata unsigned int *)0xff60)	/* PWM10T1计数值  - Pulse Width Modulation*/
#define PWM10T2 (*(volatile __xdata unsigned int *)0xff62)	/* PWM10T2计数值  - Pulse Width Modulation*/
#define PWM11T1 (*(volatile __xdata unsigned int *)0xff68)	/* PWM11T1计数值  - Pulse Width Modulation*/
#define PWM11T2 (*(volatile __xdata unsigned int *)0xff6a)	/* PWM11T2计数值  - Pulse Width Modulation*/
#define PWM12T1 (*(volatile __xdata unsigned int *)0xff70)	/* PWM12T1计数值  - Pulse Width Modulation*/
#define PWM12T2 (*(volatile __xdata unsigned int *)0xff72)	/* PWM12T2计数值  - Pulse Width Modulation*/
#define PWM13T1 (*(volatile __xdata unsigned int *)0xff78)	/* PWM13T1计数值  - Pulse Width Modulation*/
#define PWM13T2 (*(volatile __xdata unsigned int *)0xff7a)	/* PWM13T2计数值  - Pulse Width Modulation*/
#define PWM14T1 (*(volatile __xdata unsigned int *)0xff80)	/* PWM14T1计数值  - Pulse Width Modulation*/
#define PWM14T2 (*(volatile __xdata unsigned int *)0xff82)	/* PWM14T2计数值  - Pulse Width Modulation*/
#define PWM15T1 (*(volatile __xdata unsigned int *)0xff88)	/* PWM15T1计数值  - Pulse Width Modulation*/
#define PWM15T2 (*(volatile __xdata unsigned int *)0xff8a)	/* PWM15T2计数值  - Pulse Width Modulation*/
#define PWM16T1 (*(volatile __xdata unsigned int *)0xff90)	/* PWM16T1计数值  - Pulse Width Modulation*/
#define PWM16T2 (*(volatile __xdata unsigned int *)0xff92)	/* PWM16T2计数值  - Pulse Width Modulation*/
#define PWM17T1 (*(volatile __xdata unsigned int *)0xff98)	/* PWM17T1计数值  - Pulse Width Modulation*/
#define PWM17T2 (*(volatile __xdata unsigned int *)0xff9a)	/* PWM17T2计数值  - Pulse Width Modulation*/
#define PWM2C (*(volatile __xdata unsigned int *)0xffa0)	/* PWM2计数器高字节  - Counter - Pulse Width Modulation*/
#define PWM2TADC (*(volatile __xdata unsigned int *)0xffa3)	/* PWM2触发ADC计数  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM20T1 (*(volatile __xdata unsigned int *)0xffb0)	/* PWM20T1计数值  - Pulse Width Modulation*/
#define PWM20T2 (*(volatile __xdata unsigned int *)0xffb2)	/* PWM20T2计数值  - Pulse Width Modulation*/
#define PWM21T1 (*(volatile __xdata unsigned int *)0xffb8)	/* PWM21T1计数值  - Pulse Width Modulation*/
#define PWM21T2 (*(volatile __xdata unsigned int *)0xffba)	/* PWM21T2计数值  - Pulse Width Modulation*/
#define PWM22T1 (*(volatile __xdata unsigned int *)0xffc0)	/* PWM22T1计数值  - Pulse Width Modulation*/
#define PWM22T2 (*(volatile __xdata unsigned int *)0xffc2)	/* PWM22T2计数值  - Pulse Width Modulation*/
#define PWM23T1 (*(volatile __xdata unsigned int *)0xffc8)	/* PWM23T1计数值  - Pulse Width Modulation*/
#define PWM23T2 (*(volatile __xdata unsigned int *)0xffca)	/* PWM23T2计数值  - Pulse Width Modulation*/
#define PWM24T1 (*(volatile __xdata unsigned int *)0xffd0)	/* PWM24T1计数值  - Pulse Width Modulation*/
#define PWM24T2 (*(volatile __xdata unsigned int *)0xffd2)	/* PWM24T2计数值  - Pulse Width Modulation*/
#define PWM25T1 (*(volatile __xdata unsigned int *)0xffd8)	/* PWM25T1计数值  - Pulse Width Modulation*/
#define PWM25T2 (*(volatile __xdata unsigned int *)0xffda)	/* PWM25T2计数值  - Pulse Width Modulation*/
#define PWM26T1 (*(volatile __xdata unsigned int *)0xffe0)	/* PWM26T1计数值  - Pulse Width Modulation*/
#define PWM26T2 (*(volatile __xdata unsigned int *)0xffe2)	/* PWM26T2计数值  - Pulse Width Modulation*/
#define PWM27T1 (*(volatile __xdata unsigned int *)0xffe8)	/* PWM27T1计数值  - Pulse Width Modulation*/
#define PWM27T2 (*(volatile __xdata unsigned int *)0xffea)	/* PWM27T2计数值  - Pulse Width Modulation*/
#define PWM3C (*(volatile __xdata unsigned int *)0xfc00)	/* PWM3计数器  - Counter - Pulse Width Modulation*/
#define PWM3TADC (*(volatile __xdata unsigned int *)0xfc03)	/* PWM3触发ADC计数  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM30T1 (*(volatile __xdata unsigned int *)0xfc10)	/* PWM30T1计数值  - Pulse Width Modulation*/
#define PWM30T2 (*(volatile __xdata unsigned int *)0xfc12)	/* PWM30T2计数值  - Pulse Width Modulation*/
#define PWM31T1 (*(volatile __xdata unsigned int *)0xfc18)	/* PWM31T1计数值  - Pulse Width Modulation*/
#define PWM31T2 (*(volatile __xdata unsigned int *)0xfc1a)	/* PWM31T2计数值  - Pulse Width Modulation*/
#define PWM32T1 (*(volatile __xdata unsigned int *)0xfc20)	/* PWM32T1计数值  - Pulse Width Modulation*/
#define PWM32T2 (*(volatile __xdata unsigned int *)0xfc22)	/* PWM32T2计数值  - Pulse Width Modulation*/
#define PWM33T1 (*(volatile __xdata unsigned int *)0xfc28)	/* PWM33T1计数值  - Pulse Width Modulation*/
#define PWM33T2 (*(volatile __xdata unsigned int *)0xfc2a)	/* PWM33T2计数值  - Pulse Width Modulation*/
#define PWM34T1 (*(volatile __xdata unsigned int *)0xfc30)	/* PWM34T1计数值  - Pulse Width Modulation*/
#define PWM34T2 (*(volatile __xdata unsigned int *)0xfc32)	/* PWM34T2计数值  - Pulse Width Modulation*/
#define PWM35T1 (*(volatile __xdata unsigned int *)0xfc38)	/* PWM35T1计数值  - Pulse Width Modulation*/
#define PWM35T2 (*(volatile __xdata unsigned int *)0xfc3a)	/* PWM35T2计数值  - Pulse Width Modulation*/
#define PWM36T1 (*(volatile __xdata unsigned int *)0xfc40)	/* PWM36T1计数值  - Pulse Width Modulation*/
#define PWM36T2 (*(volatile __xdata unsigned int *)0xfc42)	/* PWM36T2计数值  - Pulse Width Modulation*/
#define PWM37T1 (*(volatile __xdata unsigned int *)0xfc48)	/* PWM37T1计数值  - Pulse Width Modulation*/
#define PWM37T2 (*(volatile __xdata unsigned int *)0xfc4a)	/* PWM37T2计数值  - Pulse Width Modulation*/
#define PWM4C (*(volatile __xdata unsigned int *)0xfc50)	/* PWM4计数器  - Counter - Pulse Width Modulation*/
#define PWM4TADC (*(volatile __xdata unsigned int *)0xfc53)	/* PWM4触发ADC计数  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM40T1 (*(volatile __xdata unsigned int *)0xfc60)	/* PWM40T1计数值  - Pulse Width Modulation*/
#define PWM40T2 (*(volatile __xdata unsigned int *)0xfc62)	/* PWM40T2计数值  - Pulse Width Modulation*/
#define PWM41T1 (*(volatile __xdata unsigned int *)0xfc68)	/* PWM41T1计数值  - Pulse Width Modulation*/
#define PWM41T2 (*(volatile __xdata unsigned int *)0xfc6a)	/* PWM41T2计数值  - Pulse Width Modulation*/
#define PWM42T1 (*(volatile __xdata unsigned int *)0xfc70)	/* PWM42T1计数值  - Pulse Width Modulation*/
#define PWM42T2 (*(volatile __xdata unsigned int *)0xfc72)	/* PWM42T2计数值  - Pulse Width Modulation*/
#define PWM43T1 (*(volatile __xdata unsigned int *)0xfc78)	/* PWM43T1计数值  - Pulse Width Modulation*/
#define PWM43T2 (*(volatile __xdata unsigned int *)0xfc7a)	/* PWM43T2计数值  - Pulse Width Modulation*/
#define PWM44T1 (*(volatile __xdata unsigned int *)0xfc80)	/* PWM44T1计数值  - Pulse Width Modulation*/
#define PWM44T2 (*(volatile __xdata unsigned int *)0xfc82)	/* PWM44T2计数值  - Pulse Width Modulation*/
#define PWM45T1 (*(volatile __xdata unsigned int *)0xfc88)	/* PWM45T1计数值  - Pulse Width Modulation*/
#define PWM45T2 (*(volatile __xdata unsigned int *)0xfc8a)	/* PWM45T2计数值  - Pulse Width Modulation*/
#define PWM46T1 (*(volatile __xdata unsigned int *)0xfc90)	/* PWM46T1计数值  - Pulse Width Modulation*/
#define PWM46T2 (*(volatile __xdata unsigned int *)0xfc92)	/* PWM46T2计数值  - Pulse Width Modulation*/
#define PWM47T1 (*(volatile __xdata unsigned int *)0xfc98)	/* PWM47T1计数值  - Pulse Width Modulation*/
#define PWM47T2 (*(volatile __xdata unsigned int *)0xfc9a)	/* PWM47T2计数值  - Pulse Width Modulation*/
#define PWM5C (*(volatile __xdata unsigned int *)0xfca0)	/* PWM4计数器  - Counter - Pulse Width Modulation*/
#define PWM5TADC (*(volatile __xdata unsigned int *)0xfca3)	/* PWM4触发ADC计数  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM50T1 (*(volatile __xdata unsigned int *)0xfcb0)	/* PWM40T1计数值  - Pulse Width Modulation*/
#define PWM50T2 (*(volatile __xdata unsigned int *)0xfcb2)	/* PWM40T2计数值  - Pulse Width Modulation*/
#define PWM51T1 (*(volatile __xdata unsigned int *)0xfcb8)	/* PWM41T1计数值  - Pulse Width Modulation*/
#define PWM51T2 (*(volatile __xdata unsigned int *)0xfcba)	/* PWM41T2计数值  - Pulse Width Modulation*/
#define PWM52T1 (*(volatile __xdata unsigned int *)0xfcc0)	/* PWM42T1计数值  - Pulse Width Modulation*/
#define PWM52T2 (*(volatile __xdata unsigned int *)0xfcc2)	/* PWM42T2计数值  - Pulse Width Modulation*/
#define PWM53T1 (*(volatile __xdata unsigned int *)0xfcc8)	/* PWM43T1计数值  - Pulse Width Modulation*/
#define PWM53T2 (*(volatile __xdata unsigned int *)0xfcca)	/* PWM43T2计数值  - Pulse Width Modulation*/
#define PWM54T1 (*(volatile __xdata unsigned int *)0xfcd0)	/* PWM44T1计数值  - Pulse Width Modulation*/
#define PWM54T2 (*(volatile __xdata unsigned int *)0xfcd2)	/* PWM44T2计数值  - Pulse Width Modulation*/
#define PWM55T1 (*(volatile __xdata unsigned int *)0xfcd8)	/* PWM45T1计数值  - Pulse Width Modulation*/
#define PWM55T2 (*(volatile __xdata unsigned int *)0xfcda)	/* PWM45T2计数值  - Pulse Width Modulation*/
#define PWM56T1 (*(volatile __xdata unsigned int *)0xfce0)	/* PWM46T1计数值  - Pulse Width Modulation*/
#define PWM56T2 (*(volatile __xdata unsigned int *)0xfce2)	/* PWM46T2计数值  - Pulse Width Modulation*/
#define PWM57T1 (*(volatile __xdata unsigned int *)0xfce8)	/* PWM47T1计数值  - Pulse Width Modulation*/
#define PWM57T2 (*(volatile __xdata unsigned int *)0xfcea)	/* PWM47T2计数值  - Pulse Width Modulation*/

#define PWM0CH (*(volatile __xdata unsigned char *)0xff00)	/* PWM0计数器高字节  - Counter - Pulse Width Modulation*/
#define PWM0CL (*(volatile __xdata unsigned char *)0xff01)	/* PWM0计数器低字节  - Counter - Pulse Width Modulation*/
#define PWM0CKS (*(volatile __xdata unsigned char *)0xff02)	/* PWM0时钟选择  - Clock - Pulse Width Modulation*/
#define PWM0TADCH (*(volatile __xdata unsigned char *)0xff03)	/* PWM0触发ADC计数高字节  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM0TADCL (*(volatile __xdata unsigned char *)0xff04)	/* PWM0触发ADC计数低字节  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM0IF (*(volatile __xdata unsigned char *)0xff05)	/* PWM0中断标志寄存器     - Interrupt - Flag - Pulse Width Modulation*/
#define PWM0FDCR (*(volatile __xdata unsigned char *)0xff06)	/* PWM0异常检测控制寄存器  - Control - Pulse Width Modulation*/

#define PWM00T1H (*(volatile __xdata unsigned char *)0xff10)	/* PWM00T1计数值高字节  - Pulse Width Modulation*/
#define PWM00T1L (*(volatile __xdata unsigned char *)0xff11)	/* PWM00T1计数值低字节  - Pulse Width Modulation*/
#define PWM00T2H (*(volatile __xdata unsigned char *)0xff12)	/* PWM00T2计数值高字节  - Pulse Width Modulation*/
#define PWM00T2L (*(volatile __xdata unsigned char *)0xff13)	/* PWM00T2计数值低字节  - Pulse Width Modulation*/
#define PWM00CR (*(volatile __xdata unsigned char *)0xff14)	/* PWM00控制寄存器      - Control - Pulse Width Modulation*/
#define PWM00HLD (*(volatile __xdata unsigned char *)0xff15)	/* PWM00电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM01T1H (*(volatile __xdata unsigned char *)0xff18)	/* PWM01T1计数值高字节  - Pulse Width Modulation*/
#define PWM01T1L (*(volatile __xdata unsigned char *)0xff19)	/* PWM01T1计数值低字节  - Pulse Width Modulation*/
#define PWM01T2H (*(volatile __xdata unsigned char *)0xff1a)	/* PWM01T2计数值高字节  - Pulse Width Modulation*/
#define PWM01T2L (*(volatile __xdata unsigned char *)0xff1b)	/* PWM01T2计数值低字节  - Pulse Width Modulation*/
#define PWM01CR (*(volatile __xdata unsigned char *)0xff1c)	/* PWM01控制寄存器      - Control - Pulse Width Modulation*/
#define PWM01HLD (*(volatile __xdata unsigned char *)0xff1d)	/* PWM01电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM02T1H (*(volatile __xdata unsigned char *)0xff20)	/* PWM02T1计数值高字节  - Pulse Width Modulation*/
#define PWM02T1L (*(volatile __xdata unsigned char *)0xff21)	/* PWM02T1计数值低字节  - Pulse Width Modulation*/
#define PWM02T2H (*(volatile __xdata unsigned char *)0xff22)	/* PWM02T2计数值高字节  - Pulse Width Modulation*/
#define PWM02T2L (*(volatile __xdata unsigned char *)0xff23)	/* PWM02T2计数值低字节  - Pulse Width Modulation*/
#define PWM02CR (*(volatile __xdata unsigned char *)0xff24)	/* PWM02控制寄存器      - Control - Pulse Width Modulation*/
#define PWM02HLD (*(volatile __xdata unsigned char *)0xff25)	/* PWM02电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM03T1H (*(volatile __xdata unsigned char *)0xff28)	/* PWM03T1计数值高字节  - Pulse Width Modulation*/
#define PWM03T1L (*(volatile __xdata unsigned char *)0xff29)	/* PWM03T1计数值低字节  - Pulse Width Modulation*/
#define PWM03T2H (*(volatile __xdata unsigned char *)0xff2a)	/* PWM03T2计数值高字节  - Pulse Width Modulation*/
#define PWM03T2L (*(volatile __xdata unsigned char *)0xff2b)	/* PWM03T2计数值低字节  - Pulse Width Modulation*/
#define PWM03CR (*(volatile __xdata unsigned char *)0xff2c)	/* PWM03控制寄存器      - Control - Pulse Width Modulation*/
#define PWM03HLD (*(volatile __xdata unsigned char *)0xff2d)	/* PWM03电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM04T1H (*(volatile __xdata unsigned char *)0xff30)	/* PWM04T1计数值高字节  - Pulse Width Modulation*/
#define PWM04T1L (*(volatile __xdata unsigned char *)0xff31)	/* PWM04T1计数值低字节  - Pulse Width Modulation*/
#define PWM04T2H (*(volatile __xdata unsigned char *)0xff32)	/* PWM04T2计数值高字节  - Pulse Width Modulation*/
#define PWM04T2L (*(volatile __xdata unsigned char *)0xff33)	/* PWM04T2计数值低字节  - Pulse Width Modulation*/
#define PWM04CR (*(volatile __xdata unsigned char *)0xff34)	/* PWM04控制寄存器      - Control - Pulse Width Modulation*/
#define PWM04HLD (*(volatile __xdata unsigned char *)0xff35)	/* PWM04电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM05T1H (*(volatile __xdata unsigned char *)0xff38)	/* PWM05T1计数值高字节  - Pulse Width Modulation*/
#define PWM05T1L (*(volatile __xdata unsigned char *)0xff39)	/* PWM05T1计数值低字节  - Pulse Width Modulation*/
#define PWM05T2H (*(volatile __xdata unsigned char *)0xff3a)	/* PWM05T2计数值高字节  - Pulse Width Modulation*/
#define PWM05T2L (*(volatile __xdata unsigned char *)0xff3b)	/* PWM05T2计数值低字节  - Pulse Width Modulation*/
#define PWM05CR (*(volatile __xdata unsigned char *)0xff3c)	/* PWM05控制寄存器      - Control - Pulse Width Modulation*/
#define PWM05HLD (*(volatile __xdata unsigned char *)0xff3d)	/* PWM05电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM06T1H (*(volatile __xdata unsigned char *)0xff40)	/* PWM06T1计数值高字节  - Pulse Width Modulation*/
#define PWM06T1L (*(volatile __xdata unsigned char *)0xff41)	/* PWM06T1计数值低字节  - Pulse Width Modulation*/
#define PWM06T2H (*(volatile __xdata unsigned char *)0xff42)	/* PWM06T2计数值高字节  - Pulse Width Modulation*/
#define PWM06T2L (*(volatile __xdata unsigned char *)0xff43)	/* PWM06T2计数值低字节  - Pulse Width Modulation*/
#define PWM06CR (*(volatile __xdata unsigned char *)0xff44)	/* PWM06控制寄存器      - Control - Pulse Width Modulation*/
#define PWM06HLD (*(volatile __xdata unsigned char *)0xff45)	/* PWM06电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM07T1H (*(volatile __xdata unsigned char *)0xff48)	/* PWM07T1计数值高字节  - Pulse Width Modulation*/
#define PWM07T1L (*(volatile __xdata unsigned char *)0xff49)	/* PWM07T1计数值低字节  - Pulse Width Modulation*/
#define PWM07T2H (*(volatile __xdata unsigned char *)0xff4a)	/* PWM07T2计数值高字节  - Pulse Width Modulation*/
#define PWM07T2L (*(volatile __xdata unsigned char *)0xff4b)	/* PWM07T2计数值低字节  - Pulse Width Modulation*/
#define PWM07CR (*(volatile __xdata unsigned char *)0xff4c)	/* PWM07控制寄存器      - Control - Pulse Width Modulation*/
#define PWM07HLD (*(volatile __xdata unsigned char *)0xff4d)	/* PWM07电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM1CH (*(volatile __xdata unsigned char *)0xff50)	/* PWM1计数器高字节  - Counter - Pulse Width Modulation*/
#define PWM1CL (*(volatile __xdata unsigned char *)0xff51)	/* PWM1计数器低字节  - Counter - Pulse Width Modulation*/
#define PWM1CKS (*(volatile __xdata unsigned char *)0xff52)	/* PWM1时钟选择  - Clock - Pulse Width Modulation*/
#define PWM1TADCH (*(volatile __xdata unsigned char *)0xff53)	/* PWM1触发ADC计数高字节  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM1TADCL (*(volatile __xdata unsigned char *)0xff54)	/* PWM1触发ADC计数低字节  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM1IF (*(volatile __xdata unsigned char *)0xff55)	/* PWM1中断标志寄存器     - Interrupt - Flag - Pulse Width Modulation*/
#define PWM1FDCR (*(volatile __xdata unsigned char *)0xff56)	/* PWM1异常检测控制寄存器  - Control - Pulse Width Modulation*/

#define PWM10T1H (*(volatile __xdata unsigned char *)0xff60)	/* PWM10T1计数值高字节  - Pulse Width Modulation*/
#define PWM10T1L (*(volatile __xdata unsigned char *)0xff61)	/* PWM10T1计数值低字节  - Pulse Width Modulation*/
#define PWM10T2H (*(volatile __xdata unsigned char *)0xff62)	/* PWM10T2计数值高字节  - Pulse Width Modulation*/
#define PWM10T2L (*(volatile __xdata unsigned char *)0xff63)	/* PWM10T2计数值低字节  - Pulse Width Modulation*/
#define PWM10CR (*(volatile __xdata unsigned char *)0xff64)	/* PWM10控制寄存器      - Control - Pulse Width Modulation*/
#define PWM10HLD (*(volatile __xdata unsigned char *)0xff65)	/* PWM10电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM11T1H (*(volatile __xdata unsigned char *)0xff68)	/* PWM11T1计数值高字节  - Pulse Width Modulation*/
#define PWM11T1L (*(volatile __xdata unsigned char *)0xff69)	/* PWM11T1计数值低字节  - Pulse Width Modulation*/
#define PWM11T2H (*(volatile __xdata unsigned char *)0xff6a)	/* PWM11T2计数值高字节  - Pulse Width Modulation*/
#define PWM11T2L (*(volatile __xdata unsigned char *)0xff6b)	/* PWM11T2计数值低字节  - Pulse Width Modulation*/
#define PWM11CR (*(volatile __xdata unsigned char *)0xff6c)	/* PWM11控制寄存器      - Control - Pulse Width Modulation*/
#define PWM11HLD (*(volatile __xdata unsigned char *)0xff6d)	/* PWM11电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM12T1H (*(volatile __xdata unsigned char *)0xff70)	/* PWM12T1计数值高字节  - Pulse Width Modulation*/
#define PWM12T1L (*(volatile __xdata unsigned char *)0xff71)	/* PWM12T1计数值低字节  - Pulse Width Modulation*/
#define PWM12T2H (*(volatile __xdata unsigned char *)0xff72)	/* PWM12T2计数值高字节  - Pulse Width Modulation*/
#define PWM12T2L (*(volatile __xdata unsigned char *)0xff73)	/* PWM12T2计数值低字节  - Pulse Width Modulation*/
#define PWM12CR (*(volatile __xdata unsigned char *)0xff74)	/* PWM12控制寄存器      - Control - Pulse Width Modulation*/
#define PWM12HLD (*(volatile __xdata unsigned char *)0xff75)	/* PWM12电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM13T1H (*(volatile __xdata unsigned char *)0xff78)	/* PWM13T1计数值高字节  - Pulse Width Modulation*/
#define PWM13T1L (*(volatile __xdata unsigned char *)0xff79)	/* PWM13T1计数值低字节  - Pulse Width Modulation*/
#define PWM13T2H (*(volatile __xdata unsigned char *)0xff7a)	/* PWM13T2计数值高字节  - Pulse Width Modulation*/
#define PWM13T2L (*(volatile __xdata unsigned char *)0xff7b)	/* PWM13T2计数值低字节  - Pulse Width Modulation*/
#define PWM13CR (*(volatile __xdata unsigned char *)0xff7c)	/* PWM13控制寄存器      - Control - Pulse Width Modulation*/
#define PWM13HLD (*(volatile __xdata unsigned char *)0xff7d)	/* PWM13电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM14T1H (*(volatile __xdata unsigned char *)0xff80)	/* PWM14T1计数值高字节  - Pulse Width Modulation*/
#define PWM14T1L (*(volatile __xdata unsigned char *)0xff81)	/* PWM14T1计数值低字节  - Pulse Width Modulation*/
#define PWM14T2H (*(volatile __xdata unsigned char *)0xff82)	/* PWM14T2计数值高字节  - Pulse Width Modulation*/
#define PWM14T2L (*(volatile __xdata unsigned char *)0xff83)	/* PWM14T2计数值低字节  - Pulse Width Modulation*/
#define PWM14CR (*(volatile __xdata unsigned char *)0xff84)	/* PWM14控制寄存器      - Control - Pulse Width Modulation*/
#define PWM14HLD (*(volatile __xdata unsigned char *)0xff85)	/* PWM14电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM15T1H (*(volatile __xdata unsigned char *)0xff88)	/* PWM15T1计数值高字节  - Pulse Width Modulation*/
#define PWM15T1L (*(volatile __xdata unsigned char *)0xff89)	/* PWM15T1计数值低字节  - Pulse Width Modulation*/
#define PWM15T2H (*(volatile __xdata unsigned char *)0xff8a)	/* PWM15T2计数值高字节  - Pulse Width Modulation*/
#define PWM15T2L (*(volatile __xdata unsigned char *)0xff8b)	/* PWM15T2计数值低字节  - Pulse Width Modulation*/
#define PWM15CR (*(volatile __xdata unsigned char *)0xff8c)	/* PWM15控制寄存器      - Control - Pulse Width Modulation*/
#define PWM15HLD (*(volatile __xdata unsigned char *)0xff8d)	/* PWM15电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM16T1H (*(volatile __xdata unsigned char *)0xff90)	/* PWM16T1计数值高字节  - Pulse Width Modulation*/
#define PWM16T1L (*(volatile __xdata unsigned char *)0xff91)	/* PWM16T1计数值低字节  - Pulse Width Modulation*/
#define PWM16T2H (*(volatile __xdata unsigned char *)0xff92)	/* PWM16T2计数值高字节  - Pulse Width Modulation*/
#define PWM16T2L (*(volatile __xdata unsigned char *)0xff93)	/* PWM16T2计数值低字节  - Pulse Width Modulation*/
#define PWM16CR (*(volatile __xdata unsigned char *)0xff94)	/* PWM16控制寄存器      - Control - Pulse Width Modulation*/
#define PWM16HLD (*(volatile __xdata unsigned char *)0xff95)	/* PWM16电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM17T1H (*(volatile __xdata unsigned char *)0xff98)	/* PWM17T1计数值高字节  - Pulse Width Modulation*/
#define PWM17T1L (*(volatile __xdata unsigned char *)0xff99)	/* PWM17T1计数值低字节  - Pulse Width Modulation*/
#define PWM17T2H (*(volatile __xdata unsigned char *)0xff9a)	/* PWM17T2计数值高字节  - Pulse Width Modulation*/
#define PWM17T2L (*(volatile __xdata unsigned char *)0xff9b)	/* PWM17T2计数值低字节  - Pulse Width Modulation*/
#define PWM17CR (*(volatile __xdata unsigned char *)0xff9c)	/* PWM17控制寄存器      - Control - Pulse Width Modulation*/
#define PWM17HLD (*(volatile __xdata unsigned char *)0xff9d)	/* PWM17电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM2CH (*(volatile __xdata unsigned char *)0xffa0)	/* PWM2计数器高字节  - Counter - Pulse Width Modulation*/
#define PWM2CL (*(volatile __xdata unsigned char *)0xffa1)	/* PWM2计数器低字节  - Counter - Pulse Width Modulation*/
#define PWM2CKS (*(volatile __xdata unsigned char *)0xffa2)	/* PWM2时钟选择  - Clock - Pulse Width Modulation*/
#define PWM2TADCH (*(volatile __xdata unsigned char *)0xffa3)	/* PWM2触发ADC计数高字节  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM2TADCL (*(volatile __xdata unsigned char *)0xffa4)	/* PWM2触发ADC计数低字节  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM2IF (*(volatile __xdata unsigned char *)0xffa5)	/* PWM2中断标志寄存器     - Interrupt - Flag - Pulse Width Modulation*/
#define PWM2FDCR (*(volatile __xdata unsigned char *)0xffa6)	/* PWM2异常检测控制寄存器  - Control - Pulse Width Modulation*/

#define PWM20T1H (*(volatile __xdata unsigned char *)0xffb0)	/* PWM20T1计数值高字节  - Pulse Width Modulation*/
#define PWM20T1L (*(volatile __xdata unsigned char *)0xffb1)	/* PWM20T1计数值低字节  - Pulse Width Modulation*/
#define PWM20T2H (*(volatile __xdata unsigned char *)0xffb2)	/* PWM20T2计数值高字节  - Pulse Width Modulation*/
#define PWM20T2L (*(volatile __xdata unsigned char *)0xffb3)	/* PWM20T2计数值低字节  - Pulse Width Modulation*/
#define PWM20CR (*(volatile __xdata unsigned char *)0xffb4)	/* PWM20控制寄存器      - Control - Pulse Width Modulation*/
#define PWM20HLD (*(volatile __xdata unsigned char *)0xffb5)	/* PWM20电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM21T1H (*(volatile __xdata unsigned char *)0xffb8)	/* PWM21T1计数值高字节  - Pulse Width Modulation*/
#define PWM21T1L (*(volatile __xdata unsigned char *)0xffb9)	/* PWM21T1计数值低字节  - Pulse Width Modulation*/
#define PWM21T2H (*(volatile __xdata unsigned char *)0xffba)	/* PWM21T2计数值高字节  - Pulse Width Modulation*/
#define PWM21T2L (*(volatile __xdata unsigned char *)0xffbb)	/* PWM21T2计数值低字节  - Pulse Width Modulation*/
#define PWM21CR (*(volatile __xdata unsigned char *)0xffbc)	/* PWM21控制寄存器      - Control - Pulse Width Modulation*/
#define PWM21HLD (*(volatile __xdata unsigned char *)0xffbd)	/* PWM21电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM22T1H (*(volatile __xdata unsigned char *)0xffc0)	/* PWM22T1计数值高字节  - Pulse Width Modulation*/
#define PWM22T1L (*(volatile __xdata unsigned char *)0xffc1)	/* PWM22T1计数值低字节  - Pulse Width Modulation*/
#define PWM22T2H (*(volatile __xdata unsigned char *)0xffc2)	/* PWM22T2计数值高字节  - Pulse Width Modulation*/
#define PWM22T2L (*(volatile __xdata unsigned char *)0xffc3)	/* PWM22T2计数值低字节  - Pulse Width Modulation*/
#define PWM22CR (*(volatile __xdata unsigned char *)0xffc4)	/* PWM22控制寄存器      - Control - Pulse Width Modulation*/
#define PWM22HLD (*(volatile __xdata unsigned char *)0xffc5)	/* PWM22电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM23T1H (*(volatile __xdata unsigned char *)0xffc8)	/* PWM23T1计数值高字节  - Pulse Width Modulation*/
#define PWM23T1L (*(volatile __xdata unsigned char *)0xffc9)	/* PWM23T1计数值低字节  - Pulse Width Modulation*/
#define PWM23T2H (*(volatile __xdata unsigned char *)0xffca)	/* PWM23T2计数值高字节  - Pulse Width Modulation*/
#define PWM23T2L (*(volatile __xdata unsigned char *)0xffcb)	/* PWM23T2计数值低字节  - Pulse Width Modulation*/
#define PWM23CR (*(volatile __xdata unsigned char *)0xffcc)	/* PWM23控制寄存器      - Control - Pulse Width Modulation*/
#define PWM23HLD (*(volatile __xdata unsigned char *)0xffcd)	/* PWM23电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM24T1H (*(volatile __xdata unsigned char *)0xffd0)	/* PWM24T1计数值高字节  - Pulse Width Modulation*/
#define PWM24T1L (*(volatile __xdata unsigned char *)0xffd1)	/* PWM24T1计数值低字节  - Pulse Width Modulation*/
#define PWM24T2H (*(volatile __xdata unsigned char *)0xffd2)	/* PWM24T2计数值高字节  - Pulse Width Modulation*/
#define PWM24T2L (*(volatile __xdata unsigned char *)0xffd3)	/* PWM24T2计数值低字节  - Pulse Width Modulation*/
#define PWM24CR (*(volatile __xdata unsigned char *)0xffd4)	/* PWM24控制寄存器      - Control - Pulse Width Modulation*/
#define PWM24HLD (*(volatile __xdata unsigned char *)0xffd5)	/* PWM24电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM25T1H (*(volatile __xdata unsigned char *)0xffd8)	/* PWM25T1计数值高字节  - Pulse Width Modulation*/
#define PWM25T1L (*(volatile __xdata unsigned char *)0xffd9)	/* PWM25T1计数值低字节  - Pulse Width Modulation*/
#define PWM25T2H (*(volatile __xdata unsigned char *)0xffda)	/* PWM25T2计数值高字节  - Pulse Width Modulation*/
#define PWM25T2L (*(volatile __xdata unsigned char *)0xffdb)	/* PWM25T2计数值低字节  - Pulse Width Modulation*/
#define PWM25CR (*(volatile __xdata unsigned char *)0xffdc)	/* PWM25控制寄存器      - Control - Pulse Width Modulation*/
#define PWM25HLD (*(volatile __xdata unsigned char *)0xffdd)	/* PWM25电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM26T1H (*(volatile __xdata unsigned char *)0xffe0)	/* PWM26T1计数值高字节  - Pulse Width Modulation*/
#define PWM26T1L (*(volatile __xdata unsigned char *)0xffe1)	/* PWM26T1计数值低字节  - Pulse Width Modulation*/
#define PWM26T2H (*(volatile __xdata unsigned char *)0xffe2)	/* PWM26T2计数值高字节  - Pulse Width Modulation*/
#define PWM26T2L (*(volatile __xdata unsigned char *)0xffe3)	/* PWM26T2计数值低字节  - Pulse Width Modulation*/
#define PWM26CR (*(volatile __xdata unsigned char *)0xffe4)	/* PWM26控制寄存器      - Control - Pulse Width Modulation*/
#define PWM26HLD (*(volatile __xdata unsigned char *)0xffe5)	/* PWM26电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM27T1H (*(volatile __xdata unsigned char *)0xffe8)	/* PWM27T1计数值高字节  - Pulse Width Modulation*/
#define PWM27T1L (*(volatile __xdata unsigned char *)0xffe9)	/* PWM27T1计数值低字节  - Pulse Width Modulation*/
#define PWM27T2H (*(volatile __xdata unsigned char *)0xffea)	/* PWM27T2计数值高字节  - Pulse Width Modulation*/
#define PWM27T2L (*(volatile __xdata unsigned char *)0xffeb)	/* PWM27T2计数值低字节  - Pulse Width Modulation*/
#define PWM27CR (*(volatile __xdata unsigned char *)0xffec)	/* PWM27控制寄存器      - Control - Pulse Width Modulation*/
#define PWM27HLD (*(volatile __xdata unsigned char *)0xffed)	/* PWM27电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM3CH (*(volatile __xdata unsigned char *)0xfc00)	/* PWM3计数器高字节  - Counter - Pulse Width Modulation*/
#define PWM3CL (*(volatile __xdata unsigned char *)0xfc01)	/* PWM3计数器低字节  - Counter - Pulse Width Modulation*/
#define PWM3CKS (*(volatile __xdata unsigned char *)0xfc02)	/* PWM3时钟选择  - Clock - Pulse Width Modulation*/
#define PWM3TADCH (*(volatile __xdata unsigned char *)0xfc03)	/* PWM3触发ADC计数高字节  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM3TADCL (*(volatile __xdata unsigned char *)0xfc04)	/* PWM3触发ADC计数低字节  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM3IF (*(volatile __xdata unsigned char *)0xfc05)	/* PWM3中断标志寄存器     - Interrupt - Flag - Pulse Width Modulation*/
#define PWM3FDCR (*(volatile __xdata unsigned char *)0xfc06)	/* PWM3异常检测控制寄存器  - Control - Pulse Width Modulation*/

#define PWM30T1H (*(volatile __xdata unsigned char *)0xfc10)	/* PWM30T1计数值高字节  - Pulse Width Modulation*/
#define PWM30T1L (*(volatile __xdata unsigned char *)0xfc11)	/* PWM30T1计数值低字节  - Pulse Width Modulation*/
#define PWM30T2H (*(volatile __xdata unsigned char *)0xfc12)	/* PWM30T2计数值高字节  - Pulse Width Modulation*/
#define PWM30T2L (*(volatile __xdata unsigned char *)0xfc13)	/* PWM30T2计数值低字节  - Pulse Width Modulation*/
#define PWM30CR (*(volatile __xdata unsigned char *)0xfc14)	/* PWM30控制寄存器      - Control - Pulse Width Modulation*/
#define PWM30HLD (*(volatile __xdata unsigned char *)0xfc15)	/* PWM30电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM31T1H (*(volatile __xdata unsigned char *)0xfc18)	/* PWM31T1计数值高字节  - Pulse Width Modulation*/
#define PWM31T1L (*(volatile __xdata unsigned char *)0xfc19)	/* PWM31T1计数值低字节  - Pulse Width Modulation*/
#define PWM31T2H (*(volatile __xdata unsigned char *)0xfc1a)	/* PWM31T2计数值高字节  - Pulse Width Modulation*/
#define PWM31T2L (*(volatile __xdata unsigned char *)0xfc1b)	/* PWM31T2计数值低字节  - Pulse Width Modulation*/
#define PWM31CR (*(volatile __xdata unsigned char *)0xfc1c)	/* PWM31控制寄存器      - Control - Pulse Width Modulation*/
#define PWM31HLD (*(volatile __xdata unsigned char *)0xfc1d)	/* PWM31电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM32T1H (*(volatile __xdata unsigned char *)0xfc20)	/* PWM32T1计数值高字节  - Pulse Width Modulation*/
#define PWM32T1L (*(volatile __xdata unsigned char *)0xfc21)	/* PWM32T1计数值低字节  - Pulse Width Modulation*/
#define PWM32T2H (*(volatile __xdata unsigned char *)0xfc22)	/* PWM32T2计数值高字节  - Pulse Width Modulation*/
#define PWM32T2L (*(volatile __xdata unsigned char *)0xfc23)	/* PWM32T2计数值低字节  - Pulse Width Modulation*/
#define PWM32CR (*(volatile __xdata unsigned char *)0xfc24)	/* PWM32控制寄存器      - Control - Pulse Width Modulation*/
#define PWM32HLD (*(volatile __xdata unsigned char *)0xfc25)	/* PWM32电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM33T1H (*(volatile __xdata unsigned char *)0xfc28)	/* PWM33T1计数值高字节  - Pulse Width Modulation*/
#define PWM33T1L (*(volatile __xdata unsigned char *)0xfc29)	/* PWM33T1计数值低字节  - Pulse Width Modulation*/
#define PWM33T2H (*(volatile __xdata unsigned char *)0xfc2a)	/* PWM33T2计数值高字节  - Pulse Width Modulation*/
#define PWM33T2L (*(volatile __xdata unsigned char *)0xfc2b)	/* PWM33T2计数值低字节  - Pulse Width Modulation*/
#define PWM33CR (*(volatile __xdata unsigned char *)0xfc2c)	/* PWM33控制寄存器      - Control - Pulse Width Modulation*/
#define PWM33HLD (*(volatile __xdata unsigned char *)0xfc2d)	/* PWM33电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM34T1H (*(volatile __xdata unsigned char *)0xfc30)	/* PWM34T1计数值高字节  - Pulse Width Modulation*/
#define PWM34T1L (*(volatile __xdata unsigned char *)0xfc31)	/* PWM34T1计数值低字节  - Pulse Width Modulation*/
#define PWM34T2H (*(volatile __xdata unsigned char *)0xfc32)	/* PWM34T2计数值高字节  - Pulse Width Modulation*/
#define PWM34T2L (*(volatile __xdata unsigned char *)0xfc33)	/* PWM34T2计数值低字节  - Pulse Width Modulation*/
#define PWM34CR (*(volatile __xdata unsigned char *)0xfc34)	/* PWM34控制寄存器      - Control - Pulse Width Modulation*/
#define PWM34HLD (*(volatile __xdata unsigned char *)0xfc35)	/* PWM34电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM35T1H (*(volatile __xdata unsigned char *)0xfc38)	/* PWM35T1计数值高字节  - Pulse Width Modulation*/
#define PWM35T1L (*(volatile __xdata unsigned char *)0xfc39)	/* PWM35T1计数值低字节  - Pulse Width Modulation*/
#define PWM35T2H (*(volatile __xdata unsigned char *)0xfc3a)	/* PWM35T2计数值高字节  - Pulse Width Modulation*/
#define PWM35T2L (*(volatile __xdata unsigned char *)0xfc3b)	/* PWM35T2计数值低字节  - Pulse Width Modulation*/
#define PWM35CR (*(volatile __xdata unsigned char *)0xfc3c)	/* PWM35控制寄存器      - Control - Pulse Width Modulation*/
#define PWM35HLD (*(volatile __xdata unsigned char *)0xfc3d)	/* PWM35电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM36T1H (*(volatile __xdata unsigned char *)0xfc40)	/* PWM36T1计数值高字节  - Pulse Width Modulation*/
#define PWM36T1L (*(volatile __xdata unsigned char *)0xfc41)	/* PWM36T1计数值低字节  - Pulse Width Modulation*/
#define PWM36T2H (*(volatile __xdata unsigned char *)0xfc42)	/* PWM36T2计数值高字节  - Pulse Width Modulation*/
#define PWM36T2L (*(volatile __xdata unsigned char *)0xfc43)	/* PWM36T2计数值低字节  - Pulse Width Modulation*/
#define PWM36CR (*(volatile __xdata unsigned char *)0xfc44)	/* PWM36控制寄存器      - Control - Pulse Width Modulation*/
#define PWM36HLD (*(volatile __xdata unsigned char *)0xfc45)	/* PWM36电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM37T1H (*(volatile __xdata unsigned char *)0xfc48)	/* PWM37T1计数值高字节  - Pulse Width Modulation*/
#define PWM37T1L (*(volatile __xdata unsigned char *)0xfc49)	/* PWM37T1计数值低字节  - Pulse Width Modulation*/
#define PWM37T2H (*(volatile __xdata unsigned char *)0xfc4a)	/* PWM37T2计数值高字节  - Pulse Width Modulation*/
#define PWM37T2L (*(volatile __xdata unsigned char *)0xfc4b)	/* PWM37T2计数值低字节  - Pulse Width Modulation*/
#define PWM37CR (*(volatile __xdata unsigned char *)0xfc4c)	/* PWM37控制寄存器      - Control - Pulse Width Modulation*/
#define PWM37HLD (*(volatile __xdata unsigned char *)0xfc4d)	/* PWM37电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM4CH (*(volatile __xdata unsigned char *)0xfc50)	/* PWM4计数器高字节  - Counter - Pulse Width Modulation*/
#define PWM4CL (*(volatile __xdata unsigned char *)0xfc51)	/* PWM4计数器低字节  - Counter - Pulse Width Modulation*/
#define PWM4CKS (*(volatile __xdata unsigned char *)0xfc52)	/* PWM4时钟选择  - Clock - Pulse Width Modulation*/
#define PWM4TADCH (*(volatile __xdata unsigned char *)0xfc53)	/* PWM4触发ADC计数高字节  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM4TADCL (*(volatile __xdata unsigned char *)0xfc54)	/* PWM4触发ADC计数低字节  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM4IF (*(volatile __xdata unsigned char *)0xfc55)	/* PWM4中断标志寄存器     - Interrupt - Flag - Pulse Width Modulation*/
#define PWM4FDCR (*(volatile __xdata unsigned char *)0xfc56)	/* PWM4异常检测控制寄存器  - Control - Pulse Width Modulation*/

#define PWM40T1H (*(volatile __xdata unsigned char *)0xfc60)	/* PWM40T1计数值高字节  - Pulse Width Modulation*/
#define PWM40T1L (*(volatile __xdata unsigned char *)0xfc61)	/* PWM40T1计数值低字节  - Pulse Width Modulation*/
#define PWM40T2H (*(volatile __xdata unsigned char *)0xfc62)	/* PWM40T2计数值高字节  - Pulse Width Modulation*/
#define PWM40T2L (*(volatile __xdata unsigned char *)0xfc63)	/* PWM40T2计数值低字节  - Pulse Width Modulation*/
#define PWM40CR (*(volatile __xdata unsigned char *)0xfc64)	/* PWM40控制寄存器      - Control - Pulse Width Modulation*/
#define PWM40HLD (*(volatile __xdata unsigned char *)0xfc65)	/* PWM40电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM41T1H (*(volatile __xdata unsigned char *)0xfc68)	/* PWM41T1计数值高字节  - Pulse Width Modulation*/
#define PWM41T1L (*(volatile __xdata unsigned char *)0xfc69)	/* PWM41T1计数值低字节  - Pulse Width Modulation*/
#define PWM41T2H (*(volatile __xdata unsigned char *)0xfc6a)	/* PWM41T2计数值高字节  - Pulse Width Modulation*/
#define PWM41T2L (*(volatile __xdata unsigned char *)0xfc6b)	/* PWM41T2计数值低字节  - Pulse Width Modulation*/
#define PWM41CR (*(volatile __xdata unsigned char *)0xfc6c)	/* PWM41控制寄存器      - Control - Pulse Width Modulation*/
#define PWM41HLD (*(volatile __xdata unsigned char *)0xfc6d)	/* PWM41电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM42T1H (*(volatile __xdata unsigned char *)0xfc70)	/* PWM42T1计数值高字节  - Pulse Width Modulation*/
#define PWM42T1L (*(volatile __xdata unsigned char *)0xfc71)	/* PWM42T1计数值低字节  - Pulse Width Modulation*/
#define PWM42T2H (*(volatile __xdata unsigned char *)0xfc72)	/* PWM42T2计数值高字节  - Pulse Width Modulation*/
#define PWM42T2L (*(volatile __xdata unsigned char *)0xfc73)	/* PWM42T2计数值低字节  - Pulse Width Modulation*/
#define PWM42CR (*(volatile __xdata unsigned char *)0xfc74)	/* PWM42控制寄存器      - Control - Pulse Width Modulation*/
#define PWM42HLD (*(volatile __xdata unsigned char *)0xfc75)	/* PWM42电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM43T1H (*(volatile __xdata unsigned char *)0xfc78)	/* PWM43T1计数值高字节  - Pulse Width Modulation*/
#define PWM43T1L (*(volatile __xdata unsigned char *)0xfc79)	/* PWM43T1计数值低字节  - Pulse Width Modulation*/
#define PWM43T2H (*(volatile __xdata unsigned char *)0xfc7a)	/* PWM43T2计数值高字节  - Pulse Width Modulation*/
#define PWM43T2L (*(volatile __xdata unsigned char *)0xfc7b)	/* PWM43T2计数值低字节  - Pulse Width Modulation*/
#define PWM43CR (*(volatile __xdata unsigned char *)0xfc7c)	/* PWM43控制寄存器      - Control - Pulse Width Modulation*/
#define PWM43HLD (*(volatile __xdata unsigned char *)0xfc7d)	/* PWM43电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM44T1H (*(volatile __xdata unsigned char *)0xfc80)	/* PWM44T1计数值高字节  - Pulse Width Modulation*/
#define PWM44T1L (*(volatile __xdata unsigned char *)0xfc81)	/* PWM44T1计数值低字节  - Pulse Width Modulation*/
#define PWM44T2H (*(volatile __xdata unsigned char *)0xfc82)	/* PWM44T2计数值高字节  - Pulse Width Modulation*/
#define PWM44T2L (*(volatile __xdata unsigned char *)0xfc83)	/* PWM44T2计数值低字节  - Pulse Width Modulation*/
#define PWM44CR (*(volatile __xdata unsigned char *)0xfc84)	/* PWM44控制寄存器      - Control - Pulse Width Modulation*/
#define PWM44HLD (*(volatile __xdata unsigned char *)0xfc85)	/* PWM44电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM45T1H (*(volatile __xdata unsigned char *)0xfc88)	/* PWM45T1计数值高字节  - Pulse Width Modulation*/
#define PWM45T1L (*(volatile __xdata unsigned char *)0xfc89)	/* PWM45T1计数值低字节  - Pulse Width Modulation*/
#define PWM45T2H (*(volatile __xdata unsigned char *)0xfc8a)	/* PWM45T2计数值高字节  - Pulse Width Modulation*/
#define PWM45T2L (*(volatile __xdata unsigned char *)0xfc8b)	/* PWM45T2计数值低字节  - Pulse Width Modulation*/
#define PWM45CR (*(volatile __xdata unsigned char *)0xfc8c)	/* PWM45控制寄存器      - Control - Pulse Width Modulation*/
#define PWM45HLD (*(volatile __xdata unsigned char *)0xfc8d)	/* PWM45电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM46T1H (*(volatile __xdata unsigned char *)0xfc90)	/* PWM46T1计数值高字节  - Pulse Width Modulation*/
#define PWM46T1L (*(volatile __xdata unsigned char *)0xfc91)	/* PWM46T1计数值低字节  - Pulse Width Modulation*/
#define PWM46T2H (*(volatile __xdata unsigned char *)0xfc92)	/* PWM46T2计数值高字节  - Pulse Width Modulation*/
#define PWM46T2L (*(volatile __xdata unsigned char *)0xfc93)	/* PWM46T2计数值低字节  - Pulse Width Modulation*/
#define PWM46CR (*(volatile __xdata unsigned char *)0xfc94)	/* PWM46控制寄存器      - Control - Pulse Width Modulation*/
#define PWM46HLD (*(volatile __xdata unsigned char *)0xfc95)	/* PWM46电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM47T1H (*(volatile __xdata unsigned char *)0xfc98)	/* PWM47T1计数值高字节  - Pulse Width Modulation*/
#define PWM47T1L (*(volatile __xdata unsigned char *)0xfc99)	/* PWM47T1计数值低字节  - Pulse Width Modulation*/
#define PWM47T2H (*(volatile __xdata unsigned char *)0xfc9a)	/* PWM47T2计数值高字节  - Pulse Width Modulation*/
#define PWM47T2L (*(volatile __xdata unsigned char *)0xfc9b)	/* PWM47T2计数值低字节  - Pulse Width Modulation*/
#define PWM47CR (*(volatile __xdata unsigned char *)0xfc9c)	/* PWM47控制寄存器      - Control - Pulse Width Modulation*/
#define PWM47HLD (*(volatile __xdata unsigned char *)0xfc9d)	/* PWM47电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM5CH (*(volatile __xdata unsigned char *)0xfca0)	/* PWM5计数器高字节  - Counter - Pulse Width Modulation*/
#define PWM5CL (*(volatile __xdata unsigned char *)0xfca1)	/* PWM5计数器低字节  - Counter - Pulse Width Modulation*/
#define PWM5CKS (*(volatile __xdata unsigned char *)0xfca2)	/* PWM5时钟选择  - Clock - Pulse Width Modulation*/
#define PWM5TADCH (*(volatile __xdata unsigned char *)0xfca3)	/* PWM5触发ADC计数高字节  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM5TADCL (*(volatile __xdata unsigned char *)0xfca4)	/* PWM5触发ADC计数低字节  - Pulse Width Modulation - Analog to Digital Converter*/
#define PWM5IF (*(volatile __xdata unsigned char *)0xfca5)	/* PWM5中断标志寄存器     - Interrupt - Flag - Pulse Width Modulation*/
#define PWM5FDCR (*(volatile __xdata unsigned char *)0xfca6)	/* PWM5异常检测控制寄存器  - Control - Pulse Width Modulation*/

#define PWM50T1H (*(volatile __xdata unsigned char *)0xfcb0)	/* PWM50T1计数值高字节  - Pulse Width Modulation*/
#define PWM50T1L (*(volatile __xdata unsigned char *)0xfcb1)	/* PWM50T1计数值低字节  - Pulse Width Modulation*/
#define PWM50T2H (*(volatile __xdata unsigned char *)0xfcb2)	/* PWM50T2计数值高字节  - Pulse Width Modulation*/
#define PWM50T2L (*(volatile __xdata unsigned char *)0xfcb3)	/* PWM50T2计数值低字节  - Pulse Width Modulation*/
#define PWM50CR (*(volatile __xdata unsigned char *)0xfcb4)	/* PWM50控制寄存器      - Control - Pulse Width Modulation*/
#define PWM50HLD (*(volatile __xdata unsigned char *)0xfcb5)	/* PWM50电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM51T1H (*(volatile __xdata unsigned char *)0xfcb8)	/* PWM51T1计数值高字节  - Pulse Width Modulation*/
#define PWM51T1L (*(volatile __xdata unsigned char *)0xfcb9)	/* PWM51T1计数值低字节  - Pulse Width Modulation*/
#define PWM51T2H (*(volatile __xdata unsigned char *)0xfcba)	/* PWM51T2计数值高字节  - Pulse Width Modulation*/
#define PWM51T2L (*(volatile __xdata unsigned char *)0xfcbb)	/* PWM51T2计数值低字节  - Pulse Width Modulation*/
#define PWM51CR (*(volatile __xdata unsigned char *)0xfcbc)	/* PWM51控制寄存器      - Control - Pulse Width Modulation*/
#define PWM51HLD (*(volatile __xdata unsigned char *)0xfcbd)	/* PWM51电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM52T1H (*(volatile __xdata unsigned char *)0xfcc0)	/* PWM52T1计数值高字节  - Pulse Width Modulation*/
#define PWM52T1L (*(volatile __xdata unsigned char *)0xfcc1)	/* PWM52T1计数值低字节  - Pulse Width Modulation*/
#define PWM52T2H (*(volatile __xdata unsigned char *)0xfcc2)	/* PWM52T2计数值高字节  - Pulse Width Modulation*/
#define PWM52T2L (*(volatile __xdata unsigned char *)0xfcc3)	/* PWM52T2计数值低字节  - Pulse Width Modulation*/
#define PWM52CR (*(volatile __xdata unsigned char *)0xfcc4)	/* PWM52控制寄存器      - Control - Pulse Width Modulation*/
#define PWM52HLD (*(volatile __xdata unsigned char *)0xfcc5)	/* PWM52电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM53T1H (*(volatile __xdata unsigned char *)0xfcc8)	/* PWM53T1计数值高字节  - Pulse Width Modulation*/
#define PWM53T1L (*(volatile __xdata unsigned char *)0xfcc9)	/* PWM53T1计数值低字节  - Pulse Width Modulation*/
#define PWM53T2H (*(volatile __xdata unsigned char *)0xfcca)	/* PWM53T2计数值高字节  - Pulse Width Modulation*/
#define PWM53T2L (*(volatile __xdata unsigned char *)0xfccb)	/* PWM53T2计数值低字节  - Pulse Width Modulation*/
#define PWM53CR (*(volatile __xdata unsigned char *)0xfccc)	/* PWM53控制寄存器      - Control - Pulse Width Modulation*/
#define PWM53HLD (*(volatile __xdata unsigned char *)0xfccd)	/* PWM53电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM54T1H (*(volatile __xdata unsigned char *)0xfcd0)	/* PWM54T1计数值高字节  - Pulse Width Modulation*/
#define PWM54T1L (*(volatile __xdata unsigned char *)0xfcd1)	/* PWM54T1计数值低字节  - Pulse Width Modulation*/
#define PWM54T2H (*(volatile __xdata unsigned char *)0xfcd2)	/* PWM54T2计数值高字节  - Pulse Width Modulation*/
#define PWM54T2L (*(volatile __xdata unsigned char *)0xfcd3)	/* PWM54T2计数值低字节  - Pulse Width Modulation*/
#define PWM54CR (*(volatile __xdata unsigned char *)0xfcd4)	/* PWM54控制寄存器      - Control - Pulse Width Modulation*/
#define PWM54HLD (*(volatile __xdata unsigned char *)0xfcd5)	/* PWM54电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM55T1H (*(volatile __xdata unsigned char *)0xfcd8)	/* PWM55T1计数值高字节  - Pulse Width Modulation*/
#define PWM55T1L (*(volatile __xdata unsigned char *)0xfcd9)	/* PWM55T1计数值低字节  - Pulse Width Modulation*/
#define PWM55T2H (*(volatile __xdata unsigned char *)0xfcda)	/* PWM55T2计数值高字节  - Pulse Width Modulation*/
#define PWM55T2L (*(volatile __xdata unsigned char *)0xfcdb)	/* PWM55T2计数值低字节  - Pulse Width Modulation*/
#define PWM55CR (*(volatile __xdata unsigned char *)0xfcdc)	/* PWM55控制寄存器      - Control - Pulse Width Modulation*/
#define PWM55HLD (*(volatile __xdata unsigned char *)0xfcdd)	/* PWM55电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM56T1H (*(volatile __xdata unsigned char *)0xfce0)	/* PWM56T1计数值高字节  - Pulse Width Modulation*/
#define PWM56T1L (*(volatile __xdata unsigned char *)0xfce1)	/* PWM56T1计数值低字节  - Pulse Width Modulation*/
#define PWM56T2H (*(volatile __xdata unsigned char *)0xfce2)	/* PWM56T2计数值高字节  - Pulse Width Modulation*/
#define PWM56T2L (*(volatile __xdata unsigned char *)0xfce3)	/* PWM56T2计数值低字节  - Pulse Width Modulation*/
#define PWM56CR (*(volatile __xdata unsigned char *)0xfce4)	/* PWM56控制寄存器      - Control - Pulse Width Modulation*/
#define PWM56HLD (*(volatile __xdata unsigned char *)0xfce5)	/* PWM56电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define PWM57T1H (*(volatile __xdata unsigned char *)0xfce8)	/* PWM57T1计数值高字节  - Pulse Width Modulation*/
#define PWM57T1L (*(volatile __xdata unsigned char *)0xfce9)	/* PWM57T1计数值低字节  - Pulse Width Modulation*/
#define PWM57T2H (*(volatile __xdata unsigned char *)0xfcea)	/* PWM57T2计数值高字节  - Pulse Width Modulation*/
#define PWM57T2L (*(volatile __xdata unsigned char *)0xfceb)	/* PWM57T2计数值低字节  - Pulse Width Modulation*/
#define PWM57CR (*(volatile __xdata unsigned char *)0xfcec)	/* PWM57控制寄存器      - Control - Pulse Width Modulation*/
#define PWM57HLD (*(volatile __xdata unsigned char *)0xfced)	/* PWM57电平保持控制寄存器  - Control - Pulse Width Modulation*/

#define MD3U32    (*(unsigned long volatile xdata *)0xfcf0)	/* MDU数据寄存器  - Data*/
#define MD3U16 (*(volatile __xdata unsigned int *)0xfcf0)	/* MDU数据寄存器  - Data*/
#define MD1U16 (*(volatile __xdata unsigned int *)0xfcf2)	/* MDU数据寄存器  - Data*/
#define MD5U16 (*(volatile __xdata unsigned int *)0xfcf4)	/* MDU数据寄存器  - Data*/

#define MD3 (*(volatile __xdata unsigned char *)0xfcf0)	/* MDU数据寄存器  - Data*/
#define MD2 (*(volatile __xdata unsigned char *)0xfcf1)	/* MDU数据寄存器  - Data*/
#define MD1 (*(volatile __xdata unsigned char *)0xfcf2)	/* MDU数据寄存器  - Data*/
#define MD0 (*(volatile __xdata unsigned char *)0xfcf3)	/* MDU数据寄存器  - Data*/
#define MD5 (*(volatile __xdata unsigned char *)0xfcf4)	/* MDU数据寄存器  - Data*/
#define MD4 (*(volatile __xdata unsigned char *)0xfcf5)	/* MDU数据寄存器  - Data*/
#define ARCON (*(volatile __xdata unsigned char *)0xfcf6)	/* MDU模式控制寄存器  - Mode - Control*/
#define OPCON (*(volatile __xdata unsigned char *)0xfcf7)	/* MDU操作控制寄存器  - Control*/

#define COMEN (*(volatile __xdata unsigned char *)0xfb00)	/* COM使能寄存器  - Enable*/
#define SEGENL (*(volatile __xdata unsigned char *)0xfb01)	/* SEG使能寄存器  - Enable*/
#define SEGENH (*(volatile __xdata unsigned char *)0xfb02)	/* SEG使能寄存器  - Enable*/
#define LEDCTRL (*(volatile __xdata unsigned char *)0xfb03)	/* LED控制寄存器  - Control*/
#define LEDCKS (*(volatile __xdata unsigned char *)0xfb04)	/* LED时钟分频寄存器  - Clock*/

#define COM0_DAL (*(volatile __xdata unsigned char *)0xfb10)	/* 共阳模式显示数据  - Mode - Data*/
#define COM1_DAL (*(volatile __xdata unsigned char *)0xfb11)	/* 共阳模式显示数据  - Mode - Data*/
#define COM2_DAL (*(volatile __xdata unsigned char *)0xfb12)	/* 共阳模式显示数据  - Mode - Data*/
#define COM3_DAL (*(volatile __xdata unsigned char *)0xfb13)	/* 共阳模式显示数据  - Mode - Data*/
#define COM4_DAL (*(volatile __xdata unsigned char *)0xfb14)	/* 共阳模式显示数据  - Mode - Data*/
#define COM5_DAL (*(volatile __xdata unsigned char *)0xfb15)	/* 共阳模式显示数据  - Mode - Data*/
#define COM6_DAL (*(volatile __xdata unsigned char *)0xfb16)	/* 共阳模式显示数据  - Mode - Data*/
#define COM7_DAL (*(volatile __xdata unsigned char *)0xfb17)	/* 共阳模式显示数据  - Mode - Data*/
#define COM0_DAH (*(volatile __xdata unsigned char *)0xfb18)	/* 共阳模式显示数据  - Mode - Data*/
#define COM1_DAH (*(volatile __xdata unsigned char *)0xfb19)	/* 共阳模式显示数据  - Mode - Data*/
#define COM2_DAH (*(volatile __xdata unsigned char *)0xfb1a)	/* 共阳模式显示数据  - Mode - Data*/
#define COM3_DAH (*(volatile __xdata unsigned char *)0xfb1b)	/* 共阳模式显示数据  - Mode - Data*/
#define COM4_DAH (*(volatile __xdata unsigned char *)0xfb1c)	/* 共阳模式显示数据  - Mode - Data*/
#define COM5_DAH (*(volatile __xdata unsigned char *)0xfb1d)	/* 共阳模式显示数据  - Mode - Data*/
#define COM6_DAH (*(volatile __xdata unsigned char *)0xfb1e)	/* 共阳模式显示数据  - Mode - Data*/
#define COM7_DAH (*(volatile __xdata unsigned char *)0xfb1f)	/* 共阳模式显示数据  - Mode - Data*/

#define COM0_DCL (*(volatile __xdata unsigned char *)0xfb20)	/* 共阴模式显示数据  - Mode - Data*/
#define COM1_DCL (*(volatile __xdata unsigned char *)0xfb21)	/* 共阴模式显示数据  - Mode - Data*/
#define COM2_DCL (*(volatile __xdata unsigned char *)0xfb22)	/* 共阴模式显示数据  - Mode - Data*/
#define COM3_DCL (*(volatile __xdata unsigned char *)0xfb23)	/* 共阴模式显示数据  - Mode - Data*/
#define COM4_DCL (*(volatile __xdata unsigned char *)0xfb24)	/* 共阴模式显示数据  - Mode - Data*/
#define COM5_DCL (*(volatile __xdata unsigned char *)0xfb25)	/* 共阴模式显示数据  - Mode - Data*/
#define COM6_DCL (*(volatile __xdata unsigned char *)0xfb26)	/* 共阴模式显示数据  - Mode - Data*/
#define COM7_DCL (*(volatile __xdata unsigned char *)0xfb27)	/* 共阴模式显示数据  - Mode - Data*/
#define COM0_DCH (*(volatile __xdata unsigned char *)0xfb28)	/* 共阴模式显示数据  - Mode - Data*/
#define COM1_DCH (*(volatile __xdata unsigned char *)0xfb29)	/* 共阴模式显示数据  - Mode - Data*/
#define COM2_DCH (*(volatile __xdata unsigned char *)0xfb2a)	/* 共阴模式显示数据  - Mode - Data*/
#define COM3_DCH (*(volatile __xdata unsigned char *)0xfb2b)	/* 共阴模式显示数据  - Mode - Data*/
#define COM4_DCH (*(volatile __xdata unsigned char *)0xfb2c)	/* 共阴模式显示数据  - Mode - Data*/
#define COM5_DCH (*(volatile __xdata unsigned char *)0xfb2d)	/* 共阴模式显示数据  - Mode - Data*/
#define COM6_DCH (*(volatile __xdata unsigned char *)0xfb2e)	/* 共阴模式显示数据  - Mode - Data*/
#define COM7_DCH (*(volatile __xdata unsigned char *)0xfb2f)	/* 共阴模式显示数据  - Mode - Data*/

#define TSCHEN (*(volatile __xdata unsigned int *)0xfb40)	/* 触摸按键使能寄存器  - Enable*/
#define TSCFG (*(volatile __xdata unsigned int *)0xfb42)	/* 触摸按键配置寄存器1  - Configuration*/
#define TSSTA (*(volatile __xdata unsigned int *)0xfb46)	/* 触摸按键状态寄存器1  - Status*/
#define TSDAT (*(volatile __xdata unsigned int *)0xfb49)	/* 触摸按键数据  - Data*/
#define TSTH00 (*(volatile __xdata unsigned int *)0xfb50)	/* 触摸按键0门槛值高字节 */
#define TSTH01 (*(volatile __xdata unsigned int *)0xfb52)	/* 触摸按键1门槛值高字节 */
#define TSTH02 (*(volatile __xdata unsigned int *)0xfb54)	/* 触摸按键2门槛值高字节 */
#define TSTH03 (*(volatile __xdata unsigned int *)0xfb56)	/* 触摸按键3门槛值高字节 */
#define TSTH04 (*(volatile __xdata unsigned int *)0xfb58)	/* 触摸按键4门槛值高字节 */
#define TSTH05 (*(volatile __xdata unsigned int *)0xfb5a)	/* 触摸按键5门槛值高字节 */
#define TSTH06 (*(volatile __xdata unsigned int *)0xfb5c)	/* 触摸按键6门槛值高字节 */
#define TSTH07 (*(volatile __xdata unsigned int *)0xfb5e)	/* 触摸按键7门槛值高字节 */
#define TSTH08 (*(volatile __xdata unsigned int *)0xfb60)	/* 触摸按键8门槛值高字节 */
#define TSTH09 (*(volatile __xdata unsigned int *)0xfb62)	/* 触摸按键9门槛值高字节 */
#define TSTH10 (*(volatile __xdata unsigned int *)0xfb64)	/* 触摸按键10门槛值高字节 */
#define TSTH11 (*(volatile __xdata unsigned int *)0xfb66)	/* 触摸按键11门槛值高字节 */
#define TSTH12 (*(volatile __xdata unsigned int *)0xfb68)	/* 触摸按键12门槛值高字节 */
#define TSTH13 (*(volatile __xdata unsigned int *)0xfb6a)	/* 触摸按键13门槛值高字节 */
#define TSTH14 (*(volatile __xdata unsigned int *)0xfb6c)	/* 触摸按键14门槛值高字节 */
#define TSTH15 (*(volatile __xdata unsigned int *)0xfb6e)	/* 触摸按键15门槛值高字节 */

#define TSCHEN1 (*(volatile __xdata unsigned char *)0xfb40)	/* 触摸按键使能寄存器1  - Enable*/
#define TSCHEN2 (*(volatile __xdata unsigned char *)0xfb41)	/* 触摸按键使能寄存器2  - Enable*/
#define TSCFG1 (*(volatile __xdata unsigned char *)0xfb42)	/* 触摸按键配置寄存器1  - Configuration*/
#define TSCFG2 (*(volatile __xdata unsigned char *)0xfb43)	/* 触摸按键配置寄存器2  - Configuration*/
#define TSWUTC (*(volatile __xdata unsigned char *)0xfb44)	/* 触摸按键唤醒控制寄存器  - Control*/
#define TSCTRL (*(volatile __xdata unsigned char *)0xfb45)	/* 触摸按键控制寄存器   - Control*/
#define TSSTA1 (*(volatile __xdata unsigned char *)0xfb46)	/* 触摸按键状态寄存器1  - Status*/
#define TSSTA2 (*(volatile __xdata unsigned char *)0xfb47)	/* 触摸按键状态寄存器2  - Status*/

#define TSRT (*(volatile __xdata unsigned char *)0xfb48)	/* 触摸按键时间控制寄存器  - Control*/
#define TSDATH (*(volatile __xdata unsigned char *)0xfb49)	/* 触摸按键数据高字节  - Data*/
#define TSDATL (*(volatile __xdata unsigned char *)0xfb4a)	/* 触摸按键数据低字节  - Data*/

#define TSTH00H (*(volatile __xdata unsigned char *)0xfb50)	/* 触摸按键0门槛值高字节 */
#define TSTH00L (*(volatile __xdata unsigned char *)0xfb51)	/* 触摸按键0门槛值低字节 */
#define TSTH01H (*(volatile __xdata unsigned char *)0xfb52)	/* 触摸按键1门槛值高字节 */
#define TSTH01L (*(volatile __xdata unsigned char *)0xfb53)	/* 触摸按键1门槛值低字节 */
#define TSTH02H (*(volatile __xdata unsigned char *)0xfb54)	/* 触摸按键2门槛值高字节 */
#define TSTH02L (*(volatile __xdata unsigned char *)0xfb55)	/* 触摸按键2门槛值低字节 */
#define TSTH03H (*(volatile __xdata unsigned char *)0xfb56)	/* 触摸按键3门槛值高字节 */
#define TSTH03L (*(volatile __xdata unsigned char *)0xfb57)	/* 触摸按键3门槛值低字节 */
#define TSTH04H (*(volatile __xdata unsigned char *)0xfb58)	/* 触摸按键4门槛值高字节 */
#define TSTH04L (*(volatile __xdata unsigned char *)0xfb59)	/* 触摸按键4门槛值低字节 */
#define TSTH05H (*(volatile __xdata unsigned char *)0xfb5a)	/* 触摸按键5门槛值高字节 */
#define TSTH05L (*(volatile __xdata unsigned char *)0xfb5b)	/* 触摸按键5门槛值低字节 */
#define TSTH06H (*(volatile __xdata unsigned char *)0xfb5c)	/* 触摸按键6门槛值高字节 */
#define TSTH06L (*(volatile __xdata unsigned char *)0xfb5d)	/* 触摸按键6门槛值低字节 */
#define TSTH07H (*(volatile __xdata unsigned char *)0xfb5e)	/* 触摸按键7门槛值高字节 */
#define TSTH07L (*(volatile __xdata unsigned char *)0xfb5f)	/* 触摸按键7门槛值低字节 */
#define TSTH08H (*(volatile __xdata unsigned char *)0xfb60)	/* 触摸按键8门槛值高字节 */
#define TSTH08L (*(volatile __xdata unsigned char *)0xfb61)	/* 触摸按键8门槛值低字节 */
#define TSTH09H (*(volatile __xdata unsigned char *)0xfb62)	/* 触摸按键9门槛值高字节 */
#define TSTH09L (*(volatile __xdata unsigned char *)0xfb63)	/* 触摸按键9门槛值低字节 */
#define TSTH10H (*(volatile __xdata unsigned char *)0xfb64)	/* 触摸按键10门槛值高字节 */
#define TSTH10L (*(volatile __xdata unsigned char *)0xfb65)	/* 触摸按键10门槛值低字节 */
#define TSTH11H (*(volatile __xdata unsigned char *)0xfb66)	/* 触摸按键11门槛值高字节 */
#define TSTH11L (*(volatile __xdata unsigned char *)0xfb67)	/* 触摸按键11门槛值低字节 */
#define TSTH12H (*(volatile __xdata unsigned char *)0xfb68)	/* 触摸按键12门槛值高字节 */
#define TSTH12L (*(volatile __xdata unsigned char *)0xfb69)	/* 触摸按键12门槛值低字节 */
#define TSTH13H (*(volatile __xdata unsigned char *)0xfb6a)	/* 触摸按键13门槛值高字节 */
#define TSTH13L (*(volatile __xdata unsigned char *)0xfb6b)	/* 触摸按键13门槛值低字节 */
#define TSTH14H (*(volatile __xdata unsigned char *)0xfb6c)	/* 触摸按键14门槛值高字节 */
#define TSTH14L (*(volatile __xdata unsigned char *)0xfb6d)	/* 触摸按键14门槛值低字节 */
#define TSTH15H (*(volatile __xdata unsigned char *)0xfb6e)	/* 触摸按键15门槛值高字节 */
#define TSTH15L (*(volatile __xdata unsigned char *)0xfb6f)	/* 触摸按键15门槛值低字节 */


//=============================================================================================================

#define	EAXSFR()		P_SW2 |=  0x80		/* MOVX A,@DPTR/MOVX @DPTR,A指令的操作对象为扩展SFR(XSFR) */
#define	EAXRAM()		P_SW2 &= ~0x80		/* MOVX A,@DPTR/MOVX @DPTR,A指令的操作对象为扩展RAM(XRAM) */

#define	I2C_USE_P15P14()	P_SW2 &= ~0x30						/* 将I2C切换到P1.5(SCL) P1.4(SDA)(上电默认). - Inter-Integrated Circuit*/
#define	I2C_USE_P25P24()	P_SW2  = (P_SW2 & ~0x30) | 0x10		/* 将I2C切换到P2.5(SCL) P2.4(SDA). - Inter-Integrated Circuit*/
#define	I2C_USE_P32P33()	P_SW2 |= 0x30						/* 将I2C切换到P3.2(SCL) P3.3(SDA). - Inter-Integrated Circuit*/

#define	MainFosc_IRC24M()	CKSEL = (CKSEL & ~0x03)			/* 选择内部24MHZ时钟  - Clock*/
#define	MainFosc_XTAL()		CKSEL = (CKSEL & ~0x03) | 0x01	/* 选择外部晶振或时钟  - Clock*/
#define	EXT_CLOCK()			XOSCCR = 0x80					/* 选择外部时钟  - Clock*/
#define	EXT_CRYSTAL()		XOSCCR = 0xC0					/* 选择外部晶振 */
#define	MainFosc_IRC32K()	CKSEL =  CKSEL | 0x03			/* 选择内部32K时钟  - Clock*/
#define	MCLKO_None()		MCLKOCR = 0						/* 主时钟不输出 	     - Clock*/
#define	MCLKO54_DIV(n)		MCLKOCR = n						/* 主时钟从P5.4分频输出 0~127  - Clock*/
#define	MCLKO16_DIV(n)		MCLKOCR = n | 0x80				/* 主时钟从P1.6分频输出 0~127  - Clock*/


/*  BIT Registers  */
/*  PSW   */
__sbit __at(0xD7) CY;
__sbit __at(0xD6) AC;
__sbit __at(0xD5) F0;
__sbit __at(0xD4) RS1;
__sbit __at(0xD3) RS0;
__sbit __at(0xD2) OV;
__sbit __at(0xD1) F1;
__sbit __at(0xD0) P;

/*  TCON  */
__sbit __at(0x8F) TF1;	//定时器1溢出中断标志位 // Timer // Interrupt // Flag
__sbit __at(0x8E) TR1;	//定时器1运行控制位 // Timer // Control
__sbit __at(0x8D) TF0;	//定时器0溢出中断标志位 // Timer // Interrupt // Flag
__sbit __at(0x8C) TR0;	//定时器0运行控制位 // Timer // Control
__sbit __at(0x8B) IE1;	//外中断1标志位 // Interrupt // Flag
__sbit __at(0x8A) IT1;	//外中断1信号方式控制位，1：下降沿中断，0：上升下降均中断。 // Interrupt // Control
__sbit __at(0x89) IE0;	//外中断0标志位 // Interrupt // Flag
__sbit __at(0x88) IT0;	//外中断0信号方式控制位，1：下降沿中断，0：上升下降均中断。 // Interrupt // Control

/*  P0  */
__sbit __at(0x80) P00;
__sbit __at(0x81) P01;
__sbit __at(0x82) P02;
__sbit __at(0x83) P03;
__sbit __at(0x84) P04;
__sbit __at(0x85) P05;
__sbit __at(0x86) P06;
__sbit __at(0x87) P07;

/*  P1  */
__sbit __at(0x90) P10;
__sbit __at(0x91) P11;
__sbit __at(0x92) P12;
__sbit __at(0x93) P13;
__sbit __at(0x94) P14;
__sbit __at(0x95) P15;
__sbit __at(0x96) P16;
__sbit __at(0x97) P17;

/*  P2  */
__sbit __at(0xA0) P20;
__sbit __at(0xA1) P21;
__sbit __at(0xA2) P22;
__sbit __at(0xA3) P23;
__sbit __at(0xA4) P24;
__sbit __at(0xA5) P25;
__sbit __at(0xA6) P26;
__sbit __at(0xA7) P27;

/*  P3  */
__sbit __at(0xB0) P30;
__sbit __at(0xB1) P31;
__sbit __at(0xB2) P32;
__sbit __at(0xB3) P33;
__sbit __at(0xB4) P34;
__sbit __at(0xB5) P35;
__sbit __at(0xB6) P36;
__sbit __at(0xB7) P37;

/*  P4  */
__sbit __at(0xC0) P40;
__sbit __at(0xC1) P41;
__sbit __at(0xC2) P42;
__sbit __at(0xC3) P43;
__sbit __at(0xC4) P44;
__sbit __at(0xC5) P45;
__sbit __at(0xC6) P46;
__sbit __at(0xC7) P47;

/*  P5  */
__sbit __at(0xC8) P50;
__sbit __at(0xC9) P51;
__sbit __at(0xCA) P52;
__sbit __at(0xCB) P53;
__sbit __at(0xCC) P54;
__sbit __at(0xCD) P55;
__sbit __at(0xCE) P56;
__sbit __at(0xCF) P57;

/*  P6  */
__sbit __at(0xE8) P60;
__sbit __at(0xE9) P61;
__sbit __at(0xEA) P62;
__sbit __at(0xEB) P63;
__sbit __at(0xEC) P64;
__sbit __at(0xED) P65;
__sbit __at(0xEE) P66;
__sbit __at(0xEF) P67;

/*  P7  */
__sbit __at(0xF8) P70;
__sbit __at(0xF9) P71;
__sbit __at(0xFA) P72;
__sbit __at(0xFB) P73;
__sbit __at(0xFC) P74;
__sbit __at(0xFD) P75;
__sbit __at(0xFE) P76;
__sbit __at(0xFF) P77;

__sbit __at(0x90) RXD2;
__sbit __at(0x91) TXD2;
__sbit __at(0x92) ECI;
__sbit __at(0x91) CCP0;
__sbit __at(0x90) CCP1;
__sbit __at(0xB7) CCP2;
__sbit __at(0xB4) ECI_2;
__sbit __at(0xB5) CCP0_2;
__sbit __at(0xB6) CCP1_2;
__sbit __at(0xB7) CCP2_2;

__sbit __at(0x92) SPI_SS;
__sbit __at(0x93) SPI_MOSI;
__sbit __at(0x94) SPI_MISO;
__sbit __at(0x95) SPI_SCLK;

__sbit __at(0xB5) SPI_SS_4;
__sbit __at(0xB4) SPI_MOSI_4;
__sbit __at(0xB3) SPI_MISO_4;
__sbit __at(0xB2) SPI_SCLK_4;

__sbit __at(0xB0) RXD;
__sbit __at(0xB1) TXD;
__sbit __at(0xB2) INT0;
__sbit __at(0xB3) INT1;
__sbit __at(0xB4) T0;
__sbit __at(0xB5) T1;

__sbit __at(0xB6) INT2;
__sbit __at(0xB7) INT3;
__sbit __at(0xB0) INT4;

__sbit __at(0xB5) T0CLKOUT;
__sbit __at(0xB4) T1CLKOUT;


/*  SCON  */
__sbit __at(0x9F) SM0;	//SM0/FE		SM0 SM1 = 00 ~ 11: 方式0~3
__sbit __at(0x9E) SM1;	//
__sbit __at(0x9D) SM2;	//多机通讯
__sbit __at(0x9C) REN;	//接收允许
__sbit __at(0x9B) TB8;	//发送数据第8位 // Data
__sbit __at(0x9A) RB8;	//接收数据第8位 // Data
__sbit __at(0x99) TI;	//发送中断标志位 // Interrupt // Flag
__sbit __at(0x98) RI;	//接收中断标志位 // Interrupt // Flag

/*  IE   */
__sbit __at(0xAF) EA;	//中断允许总控制位 // Interrupt // Control
__sbit __at(0xAE) ELVD;	//低压监测中断允许位 // Interrupt
__sbit __at(0xAD) EADC;	//ADC 中断 允许位 // Interrupt // Analog to Digital Converter
__sbit __at(0xAC) ES;	//串行中断 允许控制位 // Interrupt // Control
__sbit __at(0xAB) ET1;	//定时中断1允许控制位 // Interrupt // Control
__sbit __at(0xAA) EX1;	//外部中断1允许控制位 // Interrupt // Control
__sbit __at(0xA9) ET0;	//定时中断0允许控制位 // Interrupt // Control
__sbit __at(0xA8) EX0;	//外部中断0允许控制位 // Interrupt // Control

__sbit __at(0xE0) ACC0;
__sbit __at(0xE1) ACC1;
__sbit __at(0xE2) ACC2;
__sbit __at(0xE3) ACC3;
__sbit __at(0xE4) ACC4;
__sbit __at(0xE5) ACC5;
__sbit __at(0xE6) ACC6;
__sbit __at(0xE7) ACC7;

__sbit __at(0xF0) B0;
__sbit __at(0xF1) B1;
__sbit __at(0xF2) B2;
__sbit __at(0xF3) B3;
__sbit __at(0xF4) B4;
__sbit __at(0xF5) B5;
__sbit __at(0xF6) B6;
__sbit __at(0xF7) B7;

//                                     7    6    5    4    3     2       1       0      Reset Value
//INT_CLKO:  中断与时钟输出控制寄存器  -   EX4  EX3  EX2   -   T2CLKO  T1CLKO  T0CLKO    0000,0000 // Interrupt // Clock // Control
#define	INT4_Enable()	INT_CLKO |= (1 << 6)
#define	INT3_Enable()	INT_CLKO |= (1 << 5)	
#define	INT2_Enable()	INT_CLKO |= (1 << 4)	
#define	INT1_Enable()	EX1 = 1
#define	INT0_Enable()	EX0 = 1

#define	INT4_Disable()	INT_CLKO &= ~(1 << 6)
#define	INT3_Disable()	INT_CLKO &= ~(1 << 5)	
#define	INT2_Disable()	INT_CLKO &= ~(1 << 4)	
#define	INT1_Disable()	EX1 = 0
#define	INT0_Disable()	EX0 = 0

//                               7    6       5       4      3    2     1     0      Reset Value
//AUXINTIF:  辅助中断标志寄存器  -  INT4IF  INT3IF  INT2IF   -   T4IF  T3IF  T2IF    0000,0000 // Interrupt // Flag
#define	INT4IF	0x40
#define	INT3IF	0x20
#define	INT2IF	0x10
#define	T4IF	0x04
#define	T3IF	0x02
#define	T2IF	0x01

#define	INT4_Clear()	AUXINTIF &= ~INT4IF		/* 清除外中断4标志位  - Interrupt - Flag*/
#define	INT3_Clear()	AUXINTIF &= ~INT3IF		/* 清除外中断3标志位  - Interrupt - Flag*/
#define	INT2_Clear()	AUXINTIF &= ~INT2IF		/* 清除外中断2标志位  - Interrupt - Flag*/
#define	INT1_Clear()	IE1 = 0					/* 清除外中断1标志位  - Interrupt - Flag*/
#define	INT0_Clear()	IE0 = 0					/* 清除外中断0标志位  - Interrupt - Flag*/

#define	INT0_Fall()		IT0 = 1		/* INT0 下降沿中断            - Interrupt*/
#define	INT0_RiseFall()	IT0 = 0		/* INT0 下降沿上升沿均中断    - Interrupt*/
#define	INT1_Fall()		IT1 = 1		/* INT1 下降沿中断            - Interrupt*/
#define	INT1_RiseFall()	IT0 = 0		/* INT1 下降沿上升沿均中断    - Interrupt*/


//							7     6     5    4    3    2    1     0    Reset Value
//__sfr __at(0xAF) IE2;		-     -     -    -    -    -   ESPI  ES2   0000,0000B	//Auxiliary Interrupt    // Serial Peripheral Interface
#define		SPI_INT_ENABLE()		IE2 |=  2	/* 允许SPI中断		 - Interrupt - Serial Peripheral Interface*/
#define		SPI_INT_DISABLE()		IE2 &= ~2	/* 允许SPI中断		 - Interrupt - Serial Peripheral Interface*/
#define		UART2_INT_ENABLE()		IE2 |=  1	/* 允许串口2中断	 - UART/Serial - Interrupt*/
#define		UART2_INT_DISABLE()		IE2 &= ~1	/* 允许串口2中断	 - UART/Serial - Interrupt*/

//                                          7     6     5    4    3    2    1    0    Reset Value
//__sfr __at(0xB8) IP; //中断优先级低位      PPCA  PLVD  PADC  PS   PT1  PX1  PT0  PX0   0000,0000 // Interrupt // Analog to Digital Converter
//--------
__sbit __at(0xBF) PPCA;	//PCA 模块中断优先级 // Interrupt
__sbit __at(0xBE) PLVD;	//低压监测中断优先级 // Interrupt
__sbit __at(0xBD) PADC;	//ADC 中断优先级 // Interrupt // Analog to Digital Converter
__sbit __at(0xBC) PS;	//串行中断0优先级设定位 // Interrupt
__sbit __at(0xBB) PT1;	//定时中断1优先级设定位 // Interrupt
__sbit __at(0xBA) PX1;	//外部中断1优先级设定位 // Interrupt
__sbit __at(0xB9) PT0;	//定时中断0优先级设定位 // Interrupt
__sbit __at(0xB8) PX0;	//外部中断0优先级设定位 // Interrupt

//                                           7      6      5     4     3     2    1     0        Reset Value
//__sfr __at(0xB7) IPH; //中断优先级高位       PPCAH  PLVDH  PADCH  PSH  PT1H  PX1H  PT0H  PX0H   0000,0000 // Interrupt // Analog to Digital Converter
//__sfr __at(0xB5) IP2; //                       -      -      -     -     -     -   PSPI   PS2   xxxx,xx00 // Serial Peripheral Interface
//__sfr __at(0xB6) IP2H; //                       -      -      -     -     -     -   PSPIH  PS2H  xxxx,xx00 // Serial Peripheral Interface
#define		PPCAH	0x80
#define		PLVDH	0x40
#define		PADCH	0x20
#define		PSH		0x10
#define		PT1H	0x08
#define		PX1H	0x04
#define		PT0H	0x02
#define		PX0H	0x01

#define		PCA_InterruptFirst()	PPCA = 1
#define		LVD_InterruptFirst()	PLVD = 1
#define		ADC_InterruptFirst()	PADC = 1
#define		UART1_InterruptFirst()	PS   = 1
#define		Timer1_InterruptFirst()	PT1  = 1
#define		INT1_InterruptFirst()	PX1  = 1
#define		Timer0_InterruptFirst()	PT0  = 1
#define		INT0_InterruptFirst()	PX0  = 1


/*************************************************************************************************/


//                       7      6     5    4    3    2     1      0        Reset Value
//__sfr __at(0xE6) CMPCR1;   CMPEN  CMPIF  PIE  NIE  PIS  NIS  CMPOE  CMPRES      00000000B
#define	CMPEN	0x80	//1: 允许比较器, 0: 禁止,关闭比较器电源 // Disable // Compare
#define	CMPIF	0x40	//比较器中断标志, 包括上升沿或下降沿中断, 软件清0 // Interrupt // Flag // Compare
#define	PIE		0x20	//1: 比较结果由0变1, 产生上升沿中断 // Interrupt // Compare
#define	NIE		0x10	//1: 比较结果由1变0, 产生下降沿中断 // Interrupt // Compare
#define	PIS		0x08	//输入正极性选择, 0: 选择内部P3.7做正输入,           1: 由ADC_CHS[3:0]所选择的ADC输入端做正输入. // Analog to Digital Converter
#define	NIS		0x04	//输入负极性选择, 0: 选择内部BandGap电压BGv做负输入, 1: 选择外部P3.6做输入.
#define	CMPOE	0x02	//1: 允许比较结果输出, 0: 禁止. // Disable // Compare
#define	CMPRES	0x01	//比较结果, 1: CMP+电平高于CMP-,  0: CMP+电平低于CMP-,  只读 // Compare

#define	CMP_P_P37	0x00	//输入正极性选择, 0: 选择内部P3.7做正输入
#define	CMP_P_ADC	0x08	//输入正极性选择, 1: 由ADC_CHS[3:0]所选择的ADC输入端做正输入. // Analog to Digital Converter
#define	CMP_N_GAP	0x00	//输入负极性选择, 0: 选择内部BandGap电压BGv做负输入.
#define	CMP_N_P36	0x04	//输入负极性选择, 1: 选择外部P3.6做输入.

#define	CMPO_P34()	P_SW2 &= ~0x08	//结果输出到P3.4.
#define	CMPO_P41()	P_SW2 |=  0x08	//结果输出到P4.1.

//                       7        6       5  4  3  2  1  0    Reset Value
//__sfr __at(0xE7) CMPCR2;   INVCMPO  DISFLT       LCDTY[5:0]       00001001B
#define	INVCMPO	0x80	//1: 比较器输出IO取反,  0: 不取反 // Compare
#define	DISFLT	0x40	//1: 关闭0.1uF滤波,   	0: 允许
#define	LCDTY	0x00	//0~63, 比较结果变化延时周期数 // Compare



/*************************************************************************************************/
//                     7     6     5    4    3    2   1   0       Reset Value
//__sfr __at(0x98) SCON;   SM0   SM1   SM2  REN  TB8  RB8  TI  RI      00000000B		 //S1 Control

#define		S1_DoubleRate()		PCON  |=  0x80
#define		S1_SHIFT()			SCON  &=  0x3f

#define		S1_8bit()			SCON   =  (SCON & 0x3f) | 0x40
#define		S1_9bit()			SCON   =  (SCON & 0x3f) | 0xc0
#define		S1_RX_Enable()		SCON  |=  0x10
#define		S1_RX_Disable()		SCON  &= ~0x10
#define		TI1					TI					/* 判断TI1是否发送完成								 */
#define		RI1					RI					/* 判断RI1是否接收完成								 */
#define		SET_TI1()			TI = 1				/* 设置TI1(引起中断)								  - Interrupt*/
#define		CLR_TI1()			TI = 0				/* 清除TI1											 */
#define		CLR_RI1()			RI = 0				/* 清除RI1											 */
#define		S1TB8_SET()			TB8 = 1				/* 设置TB8											 */
#define		S1TB8_CLR()			TB8 = 0				/* 清除TB8											 */
#define		S1_Int_Enable()		ES     =  1			/* 串口1允许中断									  - UART/Serial - Interrupt*/
#define		S1_Int_Disable()	ES     =  0			/* 串口1禁止中断									  - UART/Serial - Interrupt - Disable*/
#define 	S1_BRT_UseTimer1()	AUXR  &= ~1
#define 	S1_BRT_UseTimer2()	AUXR  |=  1
#define		S1_USE_P30P31()		P_SW1 &= ~0xc0						//UART1 使用P3.0 P3.1口	默认
#define		S1_USE_P36P37()		P_SW1  =  (P_SW1 & ~0xc0) | 0x40	//UART1 使用P3.6 P3.7口
#define		S1_USE_P16P17()		P_SW1  =  (P_SW1 & ~0xc0) | 0x80	//UART1 使用P1.6 P1.7口
#define		S1_USE_P43P44()		P_SW1  =  (P_SW1 & ~0xc0) | 0xc0	//UART1 使用P4.3 P4.4口
#define		S1_USE_P32P33()		P_SW1  =  (P_SW1 & ~0xc0) | 0x40	//UART1 使用P3.2 P3.3口	用于8脚MCU
#define		S1_USE_P54P55()		P_SW1  =  (P_SW1 & ~0xc0) | 0x80	//UART1 使用P5.4 P5.5口 用于8脚MCU

//						  7      6      5      4      3      2     1     0        Reset Value
//__sfr __at(0x9A) S2CON;		S2SM0    -    S2SM2  S2REN  S2TB8  S2RB8  S2TI  S2RI      00000000B		 //S2 Control

#define		S2_MODE0()			S2CON &= ~(1<<7)	/* 串口2模式0，8位UART，波特率 = 定时器2的溢出率 / 4  - Timer - UART/Serial - Mode*/
#define		S2_MODE1()			S2CON |=  (1<<7)	/* 串口2模式1，9位UART，波特率 = 定时器2的溢出率 / 4  - Timer - UART/Serial - Mode*/
#define		S2_8bit()			S2CON &= ~(1<<7)	/* 串口2模式0，8位UART，波特率 = 定时器2的溢出率 / 4  - Timer - UART/Serial - Mode*/
#define		S2_9bit()			S2CON |=  (1<<7)	/* 串口2模式1，9位UART，波特率 = 定时器2的溢出率 / 4  - Timer - UART/Serial - Mode*/
#define		S2_RX_Enable()		S2CON |=  (1<<4)	/* 允许串2接收										 */
#define		S2_RX_Disable()		S2CON &= ~(1<<4)	/* 禁止串2接收										  - Disable*/
#define		TI2					(S2CON & 2) 		/* 判断TI2是否发送完成								 */
#define		RI2					(S2CON & 1) 		/* 判断RI2是否接收完成								 */
#define		SET_TI2()			S2CON |=  (1<<1)	/* 设置TI2(引起中断)								  - Interrupt*/
#define		CLR_TI2()			S2CON &= ~(1<<1)	/* 清除TI2											 */
#define		CLR_RI2()			S2CON &= ~1			/* 清除RI2											 */
#define		S2TB8_SET()			S2CON |=  (1<<3)	/* 设置TB8											 */
#define		S2TB8_CLR()			S2CON &= ~(1<<3)	/* 清除TB8											 */
#define		S2_Int_Enable()		IE2   |=  1			/* 串口2允许中断									  - UART/Serial - Interrupt*/
#define		S2_Int_Disable()	IE2   &= ~1			/* 串口2禁止中断									  - UART/Serial - Interrupt - Disable*/
#define		S2_USE_P10P11()		P_SW2 &= ~1			/* UART2 使用P1.0 P1.1口	默认					 */
#define		S2_USE_P46P47()		P_SW2 |=  1			/* UART2 使用P4.6 P4.7口							 */

//						  7      6      5      4      3      2     1     0        Reset Value
//__sfr __at(0xAC) S3CON;		S3SM0  S3ST3  S3SM2  S3REN  S3TB8  S3RB8  S3TI  S3RI      00000000B		 //S3 Control

#define		S3_MODE0()			S3CON &= ~(1<<7)	/* 串口3模式0，8位UART，波特率 = 定时器的溢出率 / 4   - Timer - UART/Serial - Mode*/
#define		S3_MODE1()			S3CON |=  (1<<7)	/* 串口3模式1，9位UART，波特率 = 定时器的溢出率 / 4   - Timer - UART/Serial - Mode*/
#define		S3_8bit()			S3CON &= ~(1<<7)	/* 串口3模式0，8位UART，波特率 = 定时器的溢出率 / 4   - Timer - UART/Serial - Mode*/
#define		S3_9bit()			S3CON |=  (1<<7)	/* 串口3模式1，9位UART，波特率 = 定时器的溢出率 / 4   - Timer - UART/Serial - Mode*/
#define		S3_RX_Enable()		S3CON |=  (1<<4)	/* 允许串3接收									     */
#define		S3_RX_Disable()		S3CON &= ~(1<<4)	/* 禁止串3接收									      - Disable*/
#define		TI3					(S3CON & 2) != 0	/* 判断TI3是否发送完成								 */
#define		RI3					(S3CON & 1) != 0	/* 判断RI3是否接收完成								 */
#define		SET_TI3()			S3CON |=  (1<<1)	/* 设置TI3(引起中断)								  - Interrupt*/
#define		CLR_TI3()			S3CON &= ~(1<<1)	/* 清除TI3											 */
#define		CLR_RI3()			S3CON &= ~1			/* 清除RI3											 */
#define		S3TB8_SET()			S3CON |=  (1<<3)	/* 设置TB8											 */
#define		S3TB8_CLR()			S3CON &= ~(1<<3)	/* 清除TB8											 */
#define		S3_Int_Enable()		IE2   |=  (1<<3)	/* 串口3允许中断								      - UART/Serial - Interrupt*/
#define		S3_Int_Disable()	IE2   &= ~(1<<3)	/* 串口3禁止中断								      - UART/Serial - Interrupt - Disable*/
#define 	S3_BRT_UseTimer3()	S3CON |=  (1<<6)	/* BRT select Timer3								 */
#define 	S3_BRT_UseTimer2()	S3CON &= ~(1<<6)	/* BRT select Timer2								 */
#define		S3_USE_P00P01()		P_SW2 &= ~2			/* UART3 使用P0.0 P0.1口	默认				     */
#define		S3_USE_P50P51()		P_SW2 |=  2			/* UART3 使用P5.0 P5.1口						     */

//						  7      6      5      4      3      2     1     0        Reset Value
//__sfr __at(0x84) S4CON;		S4SM0  S4ST4  S4SM2  S4REN  S4TB8  S4RB8  S4TI  S4RI      00000000B		 //S4 Control

#define		S4_MODE0()			S4CON &= ~(1<<7)	/* 串口4模式0，8位UART，波特率 = 定时器的溢出率 / 4   - Timer - UART/Serial - Mode*/
#define		S4_MODE1()			S4CON |=  (1<<7)	/* 串口4模式1，9位UART，波特率 = 定时器的溢出率 / 4   - Timer - UART/Serial - Mode*/
#define		S4_8bit()			S4CON &= ~(1<<7)	/* 串口4模式0，8位UART，波特率 = 定时器的溢出率 / 4   - Timer - UART/Serial - Mode*/
#define		S4_9bit()			S4CON |=  (1<<7)	/* 串口4模式1，9位UART，波特率 = 定时器的溢出率 / 4   - Timer - UART/Serial - Mode*/
#define		S4_RX_Enable()		S4CON |=  (1<<4)	/* 允许串4接收									     */
#define		S4_RX_Disable()		S4CON &= ~(1<<4)	/* 禁止串4接收									      - Disable*/
#define		TI4					(S4CON & 2) != 0	/* 判断TI3是否发送完成							     */
#define		RI4					(S4CON & 1) != 0	/* 判断RI3是否接收完成							     */
#define		SET_TI4()			S4CON |=  2			/* 设置TI3(引起中断)							      - Interrupt*/
#define		CLR_TI4()			S4CON &= ~2			/* 清除TI3										     */
#define		CLR_RI4()			S4CON &= ~1			/* 清除RI3										     */
#define		S4TB8_SET()			S4CON |=  8			/* 设置TB8										     */
#define		S4TB8_CLR()			S4CON &= ~8			/* 清除TB8										     */
#define		S4_Int_Enable()		IE2   |=  (1<<4)	/* 串口4允许中断								      - UART/Serial - Interrupt*/
#define		S4_Int_Disable()	IE2   &= ~(1<<4)	/* 串口4禁止中断								      - UART/Serial - Interrupt - Disable*/
#define 	S4_BRT_UseTimer4()	S4CON |=  (1<<6)	/* BRT select Timer4								 */
#define 	S4_BRT_UseTimer2()	S4CON &= ~(1<<6)	/* BRT select Timer2								 */
#define		S4_USE_P02P03()		P_SW2 &= ~4			/* UART4 使用P0.2 P0.3口	默认				     */
#define		S4_USE_P52P53()		P_SW2 |=  4			/* UART4 使用P5.2 P5.3口						     */


/**********************************************************/
//						   7     6       5      4     3      2      1      0    Reset Value
//__sfr __at(0x8E) AUXR;		T0x12 T1x12 UART_M0x6  T2R  T2_C/T T2x12 EXTRAM  S1ST2  0000,0000	//Auxiliary Register 

#define 	InternalXdata_Disable()		AUXR |=  2		/* 禁止使用内部xdata, 所有访问xdata都是访问外部xdata   - Disable*/
#define 	InternalXdata_Enable()		AUXR &= ~2		/* 允许使用内部xdata, 当访问的地址在内部xdata范围时, 访问内部的xadta, 当地址超过内部xdata时, 访问外部xdata  */
#define		S1_M0x6()					AUXR |=  (1<<5)	/* UART Mode0 Speed is 6x Standard       */
#define		S1_M0x1()					AUXR &= ~(1<<5)	/* default,	UART Mode0 Speed is Standard */

//====================================
#define		Timer0_16bitAutoReload()	TMOD &= ~0x03					/* 16位自动重装	*/
#define		Timer0_16bit()				TMOD  = (TMOD & ~0x03) | 0x01	/* 16位         */
#define		Timer0_8bitAutoReload()		TMOD  = (TMOD & ~0x03) | 0x02	/* 8位自动重装	*/
#define		Timer0_16bitAutoRL_NoMask()	TMOD |=  0x03		/* 16位自动重装不可屏蔽中断	 - Interrupt*/
#define 	Timer0_Run()	 			TR0 = 1				/* 允许定时器0计数			 - Timer*/
#define 	Timer0_Stop()	 			TR0 = 0				/* 禁止定时器0计数			 - Timer - Disable*/
#define		Timer0_Gate_INT0_P32()		TMOD |=  (1<<3)		/* 时器0由外部INT0高电平允许定时计数 */
#define		Timer0_AsTimer()			TMOD &= ~(1<<2)		/* 时器0用做定时器	 - Timer*/
#define		Timer0_AsCounter()			TMOD |=  (1<<2)		/* 时器0用做计数器	 - Counter*/
#define		Timer0_AsCounterP34()		TMOD |=  (1<<2)		/* 时器0用做计数器	 - Counter*/
#define 	Timer0_1T()					AUXR |=  (1<<7)		/* Timer0 clodk = fo	*/
#define 	Timer0_12T()				AUXR &= ~(1<<7)		/* Timer0 clodk = fo/12	12分频,	default	*/
#define		Timer0_CLKO_Enable()		INT_CLKO |=  1			/* 允许 T0 溢出脉冲在T0(P3.5)脚输出，Fck0 = 1/2 T0 溢出率，T0可以1T或12T。	*/
#define		Timer0_CLKO_Disable()		INT_CLKO &= ~1
#define		Timer0_CLKO_Enable_P35()	INT_CLKO |=  1			/* 允许 T0 溢出脉冲在T0(P3.5)脚输出，Fck0 = 1/2 T0 溢出率，T0可以1T或12T。	*/
#define		Timer0_CLKO_Disable_P35()	INT_CLKO &= ~1
#define 	Timer0_InterruptEnable()	ET0 = 1				/* 允许Timer1中断. - Interrupt*/
#define 	Timer0_InterruptDisable()	ET0 = 0				/* 禁止Timer1中断. - Interrupt - Disable*/

#define		T0_Load(n)					TH0 = (n) / 256,	TL0 = (n) % 256
#define		T0_Load_us_1T(n)			Timer0_AsTimer(),Timer0_1T(), Timer0_16bitAutoReload(),TH0=(65536-((MAIN_Fosc/1000)*(n)+500)/1000)/256, TL0=(65536-((MAIN_Fosc/1000)*(n)+500)/1000)%256
#define		T0_Load_us_12T(n)			Timer0_AsTimer(),Timer0_12T(),Timer0_16bitAutoReload(),TH0=(65536-((MAIN_Fosc/12000)*(n)+500)/1000)/256,TL0=(65536-((MAIN_Fosc/12000)*(n)+500)/1000)%256
#define		T0_Frequency_1T_P35(n)		ET0=0,Timer0_AsTimer(),Timer0_1T(),Timer0_16bitAutoReload(),TH0=(65536-(n/2+MAIN_Fosc/2)/(n))/256,TL0=(65536-(n/2+MAIN_Fosc/2)/(n))%256,INT_CLKO |= 1,TR0=1		/* fx=fosc/(2*M)/n,  M=1 or M=12 */
#define		T0_Frequency_12T_P35(n)		ET0=0,Timer0_AsTimer(),Timer0_12T(),Timer0_16bitAutoReload(),TH0=(65536-(n/2+MAIN_Fosc/24)/(n))/256,TL0=(65536-(n/2+MAIN_Fosc/24)/(n))%256,INT_CLKO |= 1,TR0=1	/* fx=fosc/(2*M)/n,  M=1 or M=12 */

//====================================
#define		Timer1_16bitAutoReload()	TMOD &= ~0x30					/* 16位自动重装	*/
#define		Timer1_16bit()				TMOD  = (TMOD & ~0x30) | 0x10	/* 16位			*/
#define		Timer1_8bitAutoReload()		TMOD  = (TMOD & ~0x30) | 0x20	/* 8位自动重装	*/
#define 	Timer1_Run()	 			TR1 = 1				/* 允许定时器1计数			 - Timer*/
#define 	Timer1_Stop()	 			TR1 = 0				/* 禁止定时器1计数			 - Timer - Disable*/
#define		Timer1_Gate_INT1_P33()		TMOD |=  (1<<7)		/* 时器1由外部INT1高电平允许定时计数	*/
#define		Timer1_AsTimer()			TMOD &= ~(1<<6)		/* 时器1用做定时器			 - Timer*/
#define		Timer1_AsCounter()			TMOD |=  (1<<6)		/* 时器1用做计数器			 - Counter*/
#define		Timer1_AsCounterP35()		TMOD |=  (1<<6)		/* 时器1用做计数器			 - Counter*/
#define 	Timer1_1T()					AUXR |=  (1<<6)		/* Timer1 clodk = fo		*/
#define 	Timer1_12T()				AUXR &= ~(1<<6)		/* Timer1 clodk = fo/12	12分频,	default	*/
#define		Timer1_CLKO_Enable()		INT_CLKO |=  2			/* 允许 T1 溢出脉冲在T1(P3.4)脚输出，Fck1 = 1/2 T1 溢出率，T1可以1T或12T。	*/
#define		Timer1_CLKO_Disable()		INT_CLKO &= ~2
#define		Timer1_CLKO_Enable_P34()	INT_CLKO |=  2			/* 允许 T1 溢出脉冲在T1(P3.4)脚输出，Fck1 = 1/2 T1 溢出率，T1可以1T或12T。	*/
#define		Timer1_CLKO_Disable_P34()	INT_CLKO &= ~2
#define 	Timer1_InterruptEnable()	ET1 = 1				/* 允许Timer1中断.	 - Interrupt*/
#define 	Timer1_InterruptDisable()	ET1 = 0				/* 禁止Timer1中断.	 - Interrupt - Disable*/

#define		T1_Load(n)					TH1 = (n) / 256,	TL1 = (n) % 256
#define		T1_Load_us_1T(n)			Timer1_AsTimer(),Timer1_1T(), Timer1_16bitAutoReload(),TH1=(65536-((MAIN_Fosc/1000)*(n)+500)/1000)/256, TL1=(65536-((MAIN_Fosc/1000)*(n)+500)/1000)%256
#define		T1_Load_us_12T(n)			Timer1_AsTimer(),Timer1_12T(),Timer1_16bitAutoReload(),TH1=(65536-((MAIN_Fosc/12000)*(n)+500)/1000)/256,TL1=(65536-((MAIN_Fosc/12000)*(n)+500)/1000)%256
#define		T1_Frequency_1T_P34(n)		ET1=0,Timer1_AsTimer(),Timer1_1T(),Timer1_16bitAutoReload(),TH1=(65536-(n/2+MAIN_Fosc/2)/(n))/256,TL1=(65536-(n/2+MAIN_Fosc/2)/(n))%256,INT_CLKO |= 2,TR1=1		/* fx=fosc/(2*M)/n,  M=1 or M=12 */
#define		T1_Frequency_12T_P34(n)		ET1=0,Timer1_AsTimer(),Timer1_12T(),Timer1_16bitAutoReload(),TH1=(65536-(n/2+MAIN_Fosc/24)/(n))/256,TL1=(65536-(n/2+MAIN_Fosc/24)/(n))%256,INT_CLKO |= 2,TR1=1	/* fx=fosc/(2*M)/n,  M=1 or M=12 */

//====================================
#define 	Timer2_Run()	 			AUXR |=  (1<<4)	/* 允许定时器2计数	 - Timer*/
#define 	Timer2_Stop()	 			AUXR &= ~(1<<4)	/* 禁止定时器2计数	 - Timer - Disable*/
#define		Timer2_AsTimer()			AUXR &= ~(1<<3)	/* 时器2用做定时器	 - Timer*/
#define		Timer2_AsCounter()			AUXR |=  (1<<3)	/* 时器2用做计数器	 - Counter*/
#define		Timer2_AsCounterP31()		AUXR |=  (1<<3)	/* 时器2用做计数器	 - Counter*/
#define 	Timer2_1T()					AUXR |=  (1<<2)	/* Timer0 clock = fo	*/
#define 	Timer2_12T()				AUXR &= ~(1<<2)	/* Timer0 clock = fo/12	12分频,	default	*/
#define		Timer2_CLKO_Enable()		INT_CLKO |=  4		/* 允许 T2 溢出脉冲在P1.3脚输出，Fck2 = 1/2 T2 溢出率，T2可以1T或12T。	*/
#define		Timer2_CLKO_Disable()		INT_CLKO &= ~4
#define		Timer2_CLKO_Enable_P13()	INT_CLKO |=  4		/* 允许 T2 溢出脉冲在P1.3脚输出，Fck2 = 1/2 T2 溢出率，T2可以1T或12T。	*/
#define		Timer2_CLKO_Disable_P13()	INT_CLKO &= ~4
#define 	Timer2_InterruptEnable()	IE2  |=  (1<<2)	/* 允许Timer2中断.	 - Interrupt*/
#define 	Timer2_InterruptDisable()	IE2  &= ~(1<<2)	/* 禁止Timer2中断.	 - Interrupt - Disable*/

#define		T2_Load(n)					TH2 = (n) / 256,	TL2 = (n) % 256
#define		T2_Load_us_1T(n)			Timer2_AsTimer(),Timer2_1T(), TH2=(65536-((MAIN_Fosc/1000)*(n)+500)/1000)/256, TL2=(65536-((MAIN_Fosc/1000)*(n)+500)/1000)%256
#define		T2_Load_us_12T(n)			Timer2_AsTimer(),Timer2_12T(),TH2=(65536-((MAIN_Fosc/12000)*(n)+500)/1000)/256,TL2=(65536-((MAIN_Fosc/12000)*(n)+500)/1000)%256
#define		T2_Frequency_1T_P13(n)		Timer2_InterruptDisable(),Timer2_AsTimer(),Timer2_1T(), TH2=(65536-(n/2+MAIN_Fosc/2)/(n))/256, TL2=(65536-(n/2+MAIN_Fosc/2)/(n))%256, Timer2_CLKO_Enable_P13(),Timer2_Run()	/* fx=fosc/(2*M)/n,  M=1 or M=12 */
#define		T2_Frequency_12T_P13(n)		Timer2_InterruptDisable(),Timer2_AsTimer(),Timer2_12T(),TH2=(65536-(n/2+MAIN_Fosc/24)/(n))/256,TL2=(65536-(n/2+MAIN_Fosc/24)/(n))%256,Timer2_CLKO_Enable_P13(),Timer2_Run()	/* fx=fosc/(2*M)/n,  M=1 or M=12 */

//====================================================================================================================

//__sfr __at(0xC1) WDT_CONTR; //Watch-Dog-Timer Control register
//                                      7     6     5      4       3      2   1   0     Reset Value
//                                  WDT_FLAG  -  EN_WDT CLR_WDT IDLE_WDT PS2 PS1 PS0    xx00,0000
#define D_WDT_FLAG			(1<<7)
#define D_EN_WDT			(1<<5)
#define D_CLR_WDT			(1<<4)	/* auto clear	*/
#define D_IDLE_WDT			(1<<3)	/* WDT counter when Idle	*/
#define D_WDT_SCALE_2		0
#define D_WDT_SCALE_4		1
#define D_WDT_SCALE_8		2		/* T=393216*N/fo	*/
#define D_WDT_SCALE_16		3
#define D_WDT_SCALE_32		4
#define D_WDT_SCALE_64		5
#define D_WDT_SCALE_128		6
#define D_WDT_SCALE_256		7

#define	WDT_reset(n)	WDT_CONTR = D_EN_WDT + D_CLR_WDT + D_IDLE_WDT + (n)		/* 初始化WDT，喂狗 */


//						  7     6      5    4     3      2    1     0     Reset Value
//__sfr __at(0x87) PCON;	SMOD  SMOD0  LVDF  POF   GF1    GF0   PD   IDL    0001,0000	 //Power Control 
//SMOD		//串口双倍速 // UART/Serial
//SMOD0
#define		LVDF		(1<<5)	/* P4.6低压检测标志  - Flag*/
//POF
//GF1
//GF0
//#define 	D_PD		2		/* set 1, power down mode */
//#define 	D_IDLE		1		/* set 1, idle mode */
#define		MCU_IDLE()			PCON |= 1	/* MCU 进入 IDLE 模式  - Mode*/
#define		MCU_POWER_DOWN()	PCON |= 2	/* MCU 进入 睡眠 模式  - Mode*/


//__sfr __at(0xC5) ISP_CMD;
#define		ISP_STANDBY()	ISP_CMD = 0		/* ISP空闲命令（禁止） - Disable*/
#define		ISP_READ()		ISP_CMD = 1		/* ISP读出命令		*/
#define		ISP_WRITE()		ISP_CMD = 2		/* ISP写入命令		*/
#define		ISP_ERASE()		ISP_CMD = 3		/* ISP擦除命令		*/

//__sfr __at(0xC6) ISP_TRIG;
#define 	ISP_TRIG()	ISP_TRIG = 0x5A,	ISP_TRIG = 0xA5		/* ISP触发命令 */

//							  7    6    5      4    3    2    1     0    Reset Value
//__sfr __at(0xC7) IAP_CONTR;		IAPEN SWBS SWRST CFAIL  -    -    -     -    0000,x000	//IAP Control Register
#define ISP_EN			(1<<7)
#define ISP_SWBS		(1<<6)
#define ISP_SWRST		(1<<5)
#define ISP_CMD_FAIL	(1<<4)


/* ADC Register  - Analog to Digital Converter*/
//								7       6      5       4         3      2    1    0   Reset Value
//__sfr __at(0xBC) ADC_CONTR;		ADC_POWER SPEED1 SPEED0 ADC_FLAG ADC_START CHS2 CHS1 CHS0 0000,0000	/* AD 转换控制寄存器 */  // Control // Analog to Digital Converter
//__sfr __at(0xBD) ADC_RES;		ADCV.9 ADCV.8 ADCV.7 ADCV.6 ADCV.5 ADCV.4 ADCV.3 ADCV.2	  0000,0000	/* A/D 转换结果高8位 */  // Analog to Digital Converter
//__sfr __at(0xBE) ADC_RESL;												  ADCV.1 ADCV.0	  0000,0000	/* A/D 转换结果低2位 */ // Analog to Digital Converter
//__sfr __at(0xBC) ADC_CONTR;	//直接用MOV操作，不要用与或 // Analog to Digital Converter


//__sfr __at(0xCE) SPCTL;	SPI控制寄存器 // Control // Serial Peripheral Interface
//   7       6       5       4       3       2       1       0    	Reset Value
//	SSIG	SPEN	DORD	MSTR	CPOL	CPHA	SPR1	SPR0		0x00

#define	SPI_SSIG_None()		SPCTL |=  (1<<7)		/* 1: 忽略SS脚	*/
#define	SPI_SSIG_Enable()	SPCTL &= ~(1<<7)		/* 0: SS脚用于决定主从机	*/
#define	SPI_Enable()		SPCTL |=  (1<<6)		/* 1: 允许SPI	 - Serial Peripheral Interface*/
#define	SPI_Disable()		SPCTL &= ~(1<<6)		/* 0: 禁止SPI	 - Disable - Serial Peripheral Interface*/
#define	SPI_LSB_First()		SPCTL |=  (1<<5)		/* 1: LSB先发	*/
#define	SPI_MSB_First()		SPCTL &= ~(1<<5)		/* 0: MSB先发	*/
#define	SPI_Master()		SPCTL |=  (1<<4)		/* 1: 设为主机	*/
#define	SPI_Slave()			SPCTL &= ~(1<<4)		/* 0: 设为从机	*/
#define	SPI_SCLK_NormalH()	SPCTL |=  (1<<3)		/* 1: 空闲时SCLK为高电平	*/
#define	SPI_SCLK_NormalL()	SPCTL &= ~(1<<3)		/* 0: 空闲时SCLK为低电平	*/
#define	SPI_PhaseH()		SPCTL |=  (1<<2)		/* 1: 	*/
#define	SPI_PhaseL()		SPCTL &= ~(1<<2)		/* 0: 	*/
#define	SPI_Speed(n)		SPCTL = (SPCTL & ~3) | (n)	/*设置速度, 0 -- fosc/4, 1 -- fosc/8, 2 -- fosc/16, 3 -- fosc/32	*/

//__sfr __at(0xCF) SPDAT; //SPI Data Register                                                     0000,0000 // Serial Peripheral Interface
//__sfr __at(0xCD) SPSTAT;	//SPI状态寄存器 // Status // Serial Peripheral Interface
//   7       6      5   4   3   2   1   0    	Reset Value
//	SPIF	WCOL	-	-	-	-	-	- // Serial Peripheral Interface
#define	SPIF	0x80		/* SPI传输完成标志。写入1清0。 - Flag - Serial Peripheral Interface*/
#define	WCOL	0x40		/* SPI写冲突标志。写入1清0。   - Flag - Serial Peripheral Interface*/

#define		SPI_USE_P12P13P14P15()	P_SW1 &= ~0x0c					/* 将SPI切换到P12(SS) P13(MOSI) P14(MISO) P15(SCLK)(上电默认)。 - Serial Peripheral Interface*/
#define		SPI_USE_P22P23P24P25()	P_SW1 = (P_SW1 & ~0x0c) | 0x04	/* 将SPI切换到P22(SS) P23(MOSI) P24(MISO) P25(SCLK)。 - Serial Peripheral Interface*/
#define		SPI_USE_P35P34P33P32()	P_SW1 =  P_SW1 | 0x0C			/* 将SPI切换到P35(SS) P34(MOSI) P33(MISO) P32(SCLK)。 - Serial Peripheral Interface*/


/*
;PCA_PWMn:    7       6     5   4   3   2     1       0
;			EBSn_1	EBSn_0	-	-	-	-	EPCnH	EPCnL
;B5-B2:		保留
;B1(EPCnH):	在PWM模式下，与CCAPnH组成9位数。
;B0(EPCnL):	在PWM模式下，与CCAPnL组成9位数。
 - Mode - Pulse Width Modulation*/
#define		PWM0_NORMAL()	PCA_PWM0 &= ~2									/* PWM0正常输出(默认)	 - Pulse Width Modulation*/
#define		PWM0_OUT_0()	PCA_PWM0 |= 0x3f, CCAP0H = 0xff, CCAP0L = 0xff	/* PWM0一直输出0		 - Pulse Width Modulation*/
#define		PWM0_OUT_1()	PCA_PWM0 &= 0xc0, CCAP0H = 0,    CCAP0L = 0		/* PWM0一直输出1		 - Pulse Width Modulation*/

#define		PWM1_NORMAL()	PCA_PWM1 &= ~2									/* PWM1正常输出(默认)	 - Pulse Width Modulation*/
#define		PWM1_OUT_0()	PCA_PWM1 |= 0x3f, CCAP1H = 0xff, CCAP1L = 0xff	/* PWM1一直输出0		 - Pulse Width Modulation*/
#define		PWM1_OUT_1()	PCA_PWM1 &= 0xc0, CCAP1H = 0,    CCAP1L = 0		/* PWM1一直输出1		 - Pulse Width Modulation*/

#define		PWM2_NORMAL()	PCA_PWM2 &= ~2									/* PWM2正常输出(默认)	 - Pulse Width Modulation*/
#define		PWM2_OUT_0()	PCA_PWM2 |= 0x3f, CCAP2H = 0xff, CCAP2L = 0xff	/* PWM2一直输出0		 - Pulse Width Modulation*/
#define		PWM2_OUT_1()	PCA_PWM2 &= 0xc0, CCAP2H = 0,    CCAP2L = 0		/* PWM2一直输出1		 - Pulse Width Modulation*/

//						7     6     5     4     3     2     1     0     Reset Value
//__sfr __at(0xD8) CCON;	CF    CR    -     -    CCF3  CCF2  CCF1  CCF0   00xx,xx00	//PCA 控制寄存器。 // Control
__sbit __at(0xD8) CCF0;	/* PCA 模块0中断标志，由硬件置位，必须由软件清0。	 - Interrupt - Flag*/
__sbit __at(0xD9) CCF1;	/* PCA 模块1中断标志，由硬件置位，必须由软件清0。	 - Interrupt - Flag*/
__sbit __at(0xDA) CCF2;	/* PCA 模块2中断标志，由硬件置位，必须由软件清0。	 - Interrupt - Flag*/
__sbit __at(0xDE) CR;	/* 1: 允许PCA计数器计数，必须由软件清0。 - Counter*/
__sbit __at(0xDF) CF;	/* PCA计数器溢出（CH，CL由FFFFH变为0000H）标志。PCA计数器溢出后由硬件置位，必须由软件清0。 - Flag - Counter*/

//					 7     6     5     4     3     2     1     0    Reset Value
//__sfr __at(0xD9) CMOD;	CIDL   -     -     -   CPS2   CPS1  CPS0  ECF   0xxx,0000	//PCA 工作模式寄存器。 // Mode
#define PCA_IDLE_OFF()		CMOD |=  (1<<7)				/* IDLE状态PCA停止计数。	 - Status*/
#define PCA_IDLE_ON()		CMOD &= ~(1<<7)				/* IDLE状态PCA继续计数。	 - Status*/
#define PCA_CLK_12T()		CMOD &= ~0x0E				/* PCA计数脉冲选择 fosc/12	*/
#define PCA_CLK_2T()		CMOD = (CMOD & ~0x0E) + 2	/* PCA计数脉冲选择 fosc/2	*/
#define PCA_CLK_T0()		CMOD = (CMOD & ~0x0E) + 4	/* PCA计数脉冲选择Timer0中断，Timer0可通过AUXR寄存器设置成工作在12T或1T模式。	 - Interrupt - Mode*/
#define PCA_CLK_ECI()		CMOD = (CMOD & ~0x0E) + 6	/* PCA计数脉冲选择从ECI/P3.4脚输入的外部时钟，最大 fosc/2。	 - Clock*/
#define PCA_CLK_1T()		CMOD = (CMOD & ~0x0E) + 8	/* PCA计数脉冲选择 Fosc	*/
#define PCA_CLK_4T()		CMOD = (CMOD & ~0x0E) + 10	/* PCA计数脉冲选择 Fosc/4	*/
#define PCA_CLK_6T()		CMOD = (CMOD & ~0x0E) + 12	/* PCA计数脉冲选择 Fosc/6	*/
#define PCA_CLK_8T()		CMOD = (CMOD & ~0x0E) + 14	/* PCA计数脉冲选择 Fosc/8	*/
#define PCA_INT_ENABLE()	CMOD |=  1					/* PCA计数器溢出中断允许位，1---允许CF（CCON.7）产生中断。	 - Interrupt - Counter*/
#define PCA_INT_DISABLE()	CMOD &= ~1					/* PCA计数器溢出中断禁止。	 - Interrupt - Disable - Counter*/

//					    7      6       5        4       3       2       1      0    Reset Value
//__sfr __at(0xA2) P_SW1;	  S1_S1  S1_S0  CCP_S1   CCP_S0  SPI_S1   SPI_S0    -     DPS   0100,0000	//Auxiliary Register 1 // Serial Peripheral Interface

#define		PCA_USE_P12P11P10P37()	P_SW1 &= ~0x30					/* 将PCA/PWM切换到P12(ECI) P11(CCP0) P10(CCP1) P37(CCP2)(上电默认)  - Pulse Width Modulation*/
#define		PCA_USE_P34P35P36P37()	P_SW1 = (P_SW1 & ~0x30) | 0x10	/* 将PCA/PWM切换到P34(ECI) P35(CCP0) P36(CCP1) P37(CCP2)  - Pulse Width Modulation*/
#define		PCA_USE_P24P25P26P27()	P_SW1 = (P_SW1 & ~0x30) | 0x20	/* 将PCA/PWM切换到P24(ECI) P25(CCP0) P26(CCP1) P27(CCP2)  - Pulse Width Modulation*/

/*									7     6       5       4     3     2     1     0     Reset Value
//__sfr __at(0xDA) CCAPM0;	PWM 寄存器  -   ECOM0  CCAPP0  CCAPN0  MAT0  TOG0  PWM0  ECCF0   x000,0000	//PCA 模块0 // Pulse Width Modulation
//__sfr __at(0xDB) CCAPM1;	PWM 寄存器  -   ECOM1  CCAPP1  CCAPN1  MAT1  TOG1  PWM1  ECCF1   x000,0000	//PCA 模块1 // Pulse Width Modulation
//__sfr __at(0xDC) CCAPM2;	PWM 寄存器  -   ECOM2  CCAPP2  CCAPN2  MAT2  TOG2  PWM2  ECCF2   x000,0000	//PCA 模块2 // Pulse Width Modulation
//__sfr __at(0xDD) CCAPM3;	PWM 寄存器  -   ECOM3  CCAPP3  CCAPN3  MAT3  TOG3  PWM3  ECCF3   x000,0000	//PCA 模块3 // Pulse Width Modulation
;ECOMn = 1:	允许比较功能。
;CAPPn = 1:	允许上升沿触发捕获功能。
;CAPNn = 1:	允许下降沿触发捕获功能。
;MATn  = 1:	当匹配情况发生时，允许CCON中的CCFn置位。
;TOGn  = 1:	当匹配情况发生时，CEXn将翻转。(CEX0/PCA0/PWM0/P3.7,CEX1/PCA1/PWM1/P3.5)
;PWMn  = 1:	将CEXn设置为PWM输出。
;ECCFn = 1:	允许CCON中的CCFn触发中断。
;ECOMn CAPPn CAPNn MATn TOGn PWMn ECCFn
;  0     0     0    0    0    0     0		00H	未启用任何功能。
;  x     1     0    0    0    0     x	 	20H	16位CEXn上升沿触发捕获功能。
;  x     0     1    0    0    0     x	 	10H	16位CEXn下降沿触发捕获功能。
;  x     1     1    0    0    0     x	 	30H	16位CEXn/PCAn边沿（上、下沿）触发捕获功能。
;  1     0     0    1    0    0     x	 	48H	16位软件定时器。
;  1     0     0    1    1    0     x	 	4CH	16位高速脉冲输出。
;  1     0     0    0    0    1     0		42H	8位PWM。无中断
;  1     1     0    0    0    1     1		63H	8位PWM。低变高可产生中断
;  1     0     1    0    0    1     1		53H	8位PWM。高变低可产生中断
;  1     1     1    0    0    1     1		73H	8位PWM。低变高或高变低均可产生中断
;*******************************************************************
;*******************************************************************/
#define		PCA0_none()				CCAPM0 = 0		/* PCA无功能 */
#define		PCA0_PWM(nbit)			CCAPM0 = 0x42,PCA_PWM0 = (PCA_PWM0 & 0x3f) | (nbit<<6)	/* 无中断PWM模式(PWM长度)  - Interrupt - Mode - Pulse Width Modulation*/
#define		PCA0_PWM_rise_int(nbit) CCAPM0 = 0x63,PCA_PWM0 = (PCA_PWM0 & 0x3f) | (nbit<<6)	/* 上升沿中断PWM模式(PWM长度)  - Interrupt - Mode - Pulse Width Modulation*/
#define		PCA0_PWM_fall_int(nbit) CCAPM0 = 0x53,PCA_PWM0 = (PCA_PWM0 & 0x3f) | (nbit<<6)	/* 下降沿中断PWM模式(PWM长度)  - Interrupt - Mode - Pulse Width Modulation*/
#define		PCA0_PWM_edge_int(nbit) CCAPM0 = 0x73,PCA_PWM0 = (PCA_PWM0 & 0x3f) | (nbit<<6)	/* 上升下降沿中断PWM模式(PWM长度)  - Interrupt - Mode - Pulse Width Modulation*/
#define		PCA0_capture_rise()		CCAPM0 = (0x20 + 1)		/* 上升沿捕获模式  - Mode - Capture*/
#define		PCA0_capture_fall()		CCAPM0 = (0x10 + 1)		/* 下降沿捕获模式  - Mode - Capture*/
#define		PCA0_capture_edge()		CCAPM0 = (0x30 + 1)		/* 上升下降沿捕获模式  - Mode - Capture*/
#define		PCA0_16bit_Timer()		CCAPM0 = (0x48 + 1)		/* 16位软件定时器模式  - Timer - Mode*/
#define		PCA0_High_PulseEnable()	CCAPM0 |= 0x04			/* 16位软件定时器 高速输出脉冲模式  - Timer - Mode*/

#define		PCA1_none()				CCAPM1 = 0		/* PCA无功能 */
#define		PCA1_PWM(nbit)			CCAPM1 = 0x42,PCA_PWM1 = (PCA_PWM1 & 0x3f) | (nbit<<6)	/* 无中断PWM模式(PWM长度)  - Interrupt - Mode - Pulse Width Modulation*/
#define		PCA1_PWM_rise_int(nbit) CCAPM1 = 0x63,PCA_PWM1 = (PCA_PWM1 & 0x3f) | (nbit<<6)	/* 上升沿中断PWM模式(PWM长度)  - Interrupt - Mode - Pulse Width Modulation*/
#define		PCA1_PWM_fall_int(nbit) CCAPM1 = 0x53,PCA_PWM1 = (PCA_PWM1 & 0x3f) | (nbit<<6)	/* 下降沿中断PWM模式(PWM长度)  - Interrupt - Mode - Pulse Width Modulation*/
#define		PCA1_PWM_edge_int(nbit) CCAPM1 = 0x73,PCA_PWM1 = (PCA_PWM1 & 0x3f) | (nbit<<6)	/* 上升下降沿中断PWM模式(PWM长度)  - Interrupt - Mode - Pulse Width Modulation*/
#define		PCA1_capture_rise()		CCAPM1 = (0x20 + 1)		/* 上升沿捕获模式  - Mode - Capture*/
#define		PCA1_capture_fall()		CCAPM1 = (0x10 + 1)		/* 下降沿捕获模式  - Mode - Capture*/
#define		PCA1_capture_edge()		CCAPM1 = (0x30 + 1)		/* 上升下降沿捕获模式  - Mode - Capture*/
#define		PCA1_16bit_Timer()		CCAPM1 = (0x48 + 1)		/* 16位软件定时器模式  - Timer - Mode*/
#define		PCA1_High_PulseEnable()	CCAPM1 |= 0x04			/* 16位软件定时器 高速输出脉冲模式  - Timer - Mode*/

#define		PCA2_none()				CCAPM2 = 0		/* PCA无功能 */
#define		PCA2_PWM(nbit)			CCAPM2 = 0x42,PCA_PWM2 = (PCA_PWM2 & 0x3f) | (nbit<<6)	/* 无中断PWM模式(PWM长度)  - Interrupt - Mode - Pulse Width Modulation*/
#define		PCA2_PWM_rise_int(nbit) CCAPM2 = 0x63,PCA_PWM2 = (PCA_PWM2 & 0x3f) | (nbit<<6)	/* 上升沿中断PWM模式(PWM长度)  - Interrupt - Mode - Pulse Width Modulation*/
#define		PCA2_PWM_fall_int(nbit) CCAPM2 = 0x53,PCA_PWM2 = (PCA_PWM2 & 0x3f) | (nbit<<6)	/* 下降沿中断PWM模式(PWM长度)  - Interrupt - Mode - Pulse Width Modulation*/
#define		PCA2_PWM_edge_int(nbit) CCAPM2 = 0x73,PCA_PWM2 = (PCA_PWM2 & 0x3f) | (nbit<<6)	/* 上升下降沿中断PWM模式(PWM长度)  - Interrupt - Mode - Pulse Width Modulation*/
#define		PCA2_capture_rise()		CCAPM2 = (0x20 + 1)		/* 上升沿捕获模式  - Mode - Capture*/
#define		PCA2_capture_fall()		CCAPM2 = (0x10 + 1)		/* 下降沿捕获模式  - Mode - Capture*/
#define		PCA2_capture_edge()		CCAPM2 = (0x30 + 1)		/* 上升下降沿捕获模式  - Mode - Capture*/
#define		PCA2_16bit_Timer()		CCAPM2 = (0x48 + 1)		/* 16位软件定时器模式  - Timer - Mode*/
#define		PCA2_High_PulseEnable()	CCAPM2 |= 0x04			/* 16位软件定时器 高速输出脉冲模式  - Timer - Mode*/

#define	PCA0			0
#define	PCA1			1
#define	PCA2			2
#define	PCA_Counter		4

/**********************************************************/
typedef 	unsigned char	u8;
typedef 	unsigned int	u16;
typedef 	unsigned long	u32;

/**********************************************************/
#define NOP1()  __asm NOP __endasm
#define NOP2() do{NOP1();NOP1();}while(0)
#define NOP3() do{NOP2();NOP1();}while(0)
#define NOP4() do{NOP3();NOP1();}while(0)
#define NOP5() do{NOP4();NOP1();}while(0)
#define NOP6() do{NOP5();NOP1();}while(0)
#define NOP7() do{NOP6();NOP1();}while(0)
#define NOP8() do{NOP7();NOP1();}while(0)
#define NOP9() do{NOP8();NOP1();}while(0)
#define NOP10() do{NOP9();NOP1();}while(0)
#define NOP11() do{NOP10();NOP1();}while(0)
#define NOP12() do{NOP11();NOP1();}while(0)
#define NOP13() do{NOP12();NOP1();}while(0)
#define NOP14() do{NOP13();NOP1();}while(0)
#define NOP15() do{NOP14();NOP1();}while(0)
#define NOP16() do{NOP15();NOP1();}while(0)
#define NOP17() do{NOP16();NOP1();}while(0)
#define NOP18() do{NOP17();NOP1();}while(0)
#define NOP19() do{NOP18();NOP1();}while(0)
#define NOP20() do{NOP19();NOP1();}while(0)
#define NOP21() do{NOP20();NOP1();}while(0)
#define NOP22() do{NOP21();NOP1();}while(0)
#define NOP23() do{NOP22();NOP1();}while(0)
#define NOP24() do{NOP23();NOP1();}while(0)
#define NOP25() do{NOP24();NOP1();}while(0)
#define NOP26() do{NOP25();NOP1();}while(0)
#define NOP27() do{NOP26();NOP1();}while(0)
#define NOP28() do{NOP27();NOP1();}while(0)
#define NOP29() do{NOP28();NOP1();}while(0)
#define NOP30() do{NOP29();NOP1();}while(0)
#define NOP31() do{NOP30();NOP1();}while(0)
#define NOP32() do{NOP31();NOP1();}while(0)
#define NOP33() do{NOP32();NOP1();}while(0)
#define NOP34() do{NOP33();NOP1();}while(0)
#define NOP35() do{NOP34();NOP1();}while(0)
#define NOP36() do{NOP35();NOP1();}while(0)
#define NOP37() do{NOP36();NOP1();}while(0)
#define NOP38() do{NOP37();NOP1();}while(0)
#define NOP39() do{NOP38();NOP1();}while(0)
#define NOP40() do{NOP39();NOP1();}while(0)
#define NOP(N)  NOP##N()


/**********************************************/
#define	Pin0		0x01	//IO引脚 Px.0
#define	Pin1		0x02	//IO引脚 Px.1
#define	Pin2		0x04	//IO引脚 Px.2
#define	Pin3		0x08	//IO引脚 Px.3
#define	Pin4		0x10	//IO引脚 Px.4
#define	Pin5		0x20	//IO引脚 Px.5
#define	Pin6		0x40	//IO引脚 Px.6
#define	Pin7		0x80	//IO引脚 Px.7
#define	PinAll		0xFF	//IO所有引脚

#define	GPIO_Pin_0		0x01	//IO引脚 Px.0
#define	GPIO_Pin_1		0x02	//IO引脚 Px.1
#define	GPIO_Pin_2		0x04	//IO引脚 Px.2
#define	GPIO_Pin_3		0x08	//IO引脚 Px.3
#define	GPIO_Pin_4		0x10	//IO引脚 Px.4
#define	GPIO_Pin_5		0x20	//IO引脚 Px.5
#define	GPIO_Pin_6		0x40	//IO引脚 Px.6
#define	GPIO_Pin_7		0x80	//IO引脚 Px.7
#define	GPIO_Pin_All	0xFF	//IO所有引脚

#define	GPIO_PullUp		0	//上拉准双向口
#define	GPIO_HighZ		1	//浮空输入
#define	GPIO_OUT_OD		2	//开漏输出
#define	GPIO_OUT_PP		3	//推挽输出

#define	GPIO_P0			0		//
#define	GPIO_P1			1
#define	GPIO_P2			2
#define	GPIO_P3			3
#define	GPIO_P4			4
#define	GPIO_P5			5
#define	GPIO_P6			6
#define	GPIO_P7			7
#define	GPIO_P8			8
#define	GPIO_P9			9

#define P0n_standard(bitn)			P0M1 &= ~(bitn),	P0M0 &= ~(bitn)	/* 00  */
#define P0n_push_pull(bitn)			P0M1 &= ~(bitn),	P0M0 |=  (bitn)	/* 01  */
#define P0n_pure_input(bitn)		P0M1 |=  (bitn),	P0M0 &= ~(bitn)	/* 10  */
#define P0n_open_drain(bitn)		P0M1 |=  (bitn),	P0M0 |=  (bitn)	/* 11  */

#define P1n_standard(bitn)			P1M1 &= ~(bitn),	P1M0 &= ~(bitn)
#define P1n_push_pull(bitn)			P1M1 &= ~(bitn),	P1M0 |=  (bitn)
#define P1n_pure_input(bitn)		P1M1 |=  (bitn),	P1M0 &= ~(bitn)
#define P1n_open_drain(bitn)		P1M1 |=  (bitn),	P1M0 |=  (bitn)

#define P2n_standard(bitn)			P2M1 &= ~(bitn),	P2M0 &= ~(bitn)
#define P2n_push_pull(bitn)			P2M1 &= ~(bitn),	P2M0 |=  (bitn)
#define P2n_pure_input(bitn)		P2M1 |=  (bitn),	P2M0 &= ~(bitn)
#define P2n_open_drain(bitn)		P2M1 |=  (bitn),	P2M0 |=  (bitn)

#define P3n_standard(bitn)			P3M1 &= ~(bitn),	P3M0 &= ~(bitn)
#define P3n_push_pull(bitn)			P3M1 &= ~(bitn),	P3M0 |=  (bitn)
#define P3n_pure_input(bitn)		P3M1 |=  (bitn),	P3M0 &= ~(bitn)
#define P3n_open_drain(bitn)		P3M1 |=  (bitn),	P3M0 |=  (bitn)

#define P4n_standard(bitn)			P4M1 &= ~(bitn),	P4M0 &= ~(bitn)
#define P4n_push_pull(bitn)			P4M1 &= ~(bitn),	P4M0 |=  (bitn)
#define P4n_pure_input(bitn)		P4M1 |=  (bitn),	P4M0 &= ~(bitn)
#define P4n_open_drain(bitn)		P4M1 |=  (bitn),	P4M0 |=  (bitn)

#define P5n_standard(bitn)			P5M1 &= ~(bitn),	P5M0 &= ~(bitn)
#define P5n_push_pull(bitn)			P5M1 &= ~(bitn),	P5M0 |=  (bitn)
#define P5n_pure_input(bitn)		P5M1 |=  (bitn),	P5M0 &= ~(bitn)
#define P5n_open_drain(bitn)		P5M1 |=  (bitn),	P5M0 |=  (bitn)

#define P6n_standard(bitn)			P6M1 &= ~(bitn),	P6M0 &= ~(bitn)
#define P6n_push_pull(bitn)			P6M1 &= ~(bitn),	P6M0 |=  (bitn)
#define P6n_pure_input(bitn)		P6M1 |=  (bitn),	P6M0 &= ~(bitn)
#define P6n_open_drain(bitn)		P6M1 |=  (bitn),	P6M0 |=  (bitn)

#define P7n_standard(bitn)			P7M1 &= ~(bitn),	P7M0 &= ~(bitn)
#define P7n_push_pull(bitn)			P7M1 &= ~(bitn),	P7M0 |=  (bitn)
#define P7n_pure_input(bitn)		P7M1 |=  (bitn),	P7M0 &= ~(bitn)
#define P7n_open_drain(bitn)		P7M1 |=  (bitn),	P7M0 |=  (bitn)

/****************************************************************/


//__sfr __at(0x8F) INT_CLKO;
/*
    7   6    5    4   3     2        1       0         Reset Value
    -  EX4  EX3  EX2  -   T2CLKO   T1CLKO  T0CLKO      0000,0000B
b6 -  EX4      : 外中断INT4允许
b5 -  EX3      : 外中断INT3允许
b4 -  EX2      : 外中断INT2允许
b2 - T1CLKO    : 允许 T2 溢出脉冲在P3.0脚输出，Fck1 = 1/2 T1 溢出率
b1 - T1CLKO    : 允许 T1 溢出脉冲在P3.4脚输出，Fck1 = 1/2 T1 溢出率
b0 - T0CLKO    : 允许 T0 溢出脉冲在P3.5脚输出，Fck0 = 1/2 T0 溢出率
 - Interrupt*/

#define		LVD_InterruptEnable()		ELVD = 1
#define		LVD_InterruptDisable()		ELVD = 0


//__sfr __at(0xAA) WKTCL;	//STC11F\10和STC15系列 唤醒定时器低字节 // Timer
//__sfr __at(0xAB) WKTCH;	//STC11F\10和STC15系列 唤醒定时器高字节 // Timer
//	B7		B6	B5	B4	B3	B2	B1	B0		B7	B6	B5	B4	B3	B2	B1	B0
//	WKTEN				S11	S10	S9	S8		S7	S6	S5	S4	S3	S2	S1	S0	n * 560us
#define		WakeTimerDisable()		WKTCH &= 0x7f	/* WKTEN = 0		禁止睡眠唤醒定时器  - Timer - Disable*/
#define		WakeTimerSet(scale)		WKTCL = (scale) % 256,WKTCH = (scale) / 256 | 0x80	/* WKTEN = 1	允许睡眠唤醒定时器  - Timer*/


/*   interrupt vector */
#define		INT0_VECTOR		0
#define		TIMER0_VECTOR	1
#define		INT1_VECTOR		2
#define		TIMER1_VECTOR	3
#define		UART1_VECTOR	4
#define		ADC_VECTOR		5
#define		LVD_VECTOR		6
#define		PCA_VECTOR		7
#define		UART2_VECTOR	8
#define		SPI_VECTOR		9
#define		INT2_VECTOR		10
#define		INT3_VECTOR		11
#define		TIMER2_VECTOR	12
#define		INT4_VECTOR		16
#define		UART3_VECTOR	17
#define		UART4_VECTOR	18
#define		TIMER3_VECTOR	19
#define		TIMER4_VECTOR	20
#define		CMP_VECTOR		21
#define		PWM0_VECTOR		22	/* PWM0 P0.0~P0.7中断  - Interrupt - Pulse Width Modulation*/
#define		PWMFD_VECTOR	23
#define		I2C_VECTOR		24
#define		USB_VECTOR		25
#define		HPWM1_VECTOR	26	/* 高级PWM1  - Pulse Width Modulation*/
#define		HPWM2_VECTOR	27	/* 高级PWM2  - Pulse Width Modulation*/
#define		PWM1_VECTOR		28	/* PWM1 P1.0~P1.7中断  - Interrupt - Pulse Width Modulation*/
#define		PWM2_VECTOR		29	/* PWM2 P2.0~P2.7中断  - Interrupt - Pulse Width Modulation*/
#define		PWM3_VECTOR		30	/* PWM3 P3.0~P3.7中断  - Interrupt - Pulse Width Modulation*/
#define		PWM4_VECTOR		31	/* PWM4 P4.0~P4.7中断  - Interrupt - Pulse Width Modulation*/
#define		PWM5_VECTOR		32	/* PWM5 P5.0~P5.4中断  - Interrupt - Pulse Width Modulation*/
#define		PWM2FD_VECTOR	33	/* PWM2异常中断  - Interrupt - Pulse Width Modulation*/
#define		PWM4FD_VECTOR	34	/* PWM4异常中断  - Interrupt - Pulse Width Modulation*/
#define		TKSU_VECTOR		35	/* 触摸按键中断  - Interrupt*/
#define		RTC_VECTOR		36	/* RTC中断  - Interrupt*/
#define		P0INT_VECTOR	37	/* P0.0~P0.7中断  - Interrupt*/
#define		P1INT_VECTOR	38	/* P1.0~P1.7中断  - Interrupt*/
#define		P2INT_VECTOR	39	/* P2.0~P2.7中断  - Interrupt*/
#define		P3INT_VECTOR	40	/* P3.0~P3.7中断  - Interrupt*/
#define		P4INT_VECTOR	41	/* P4.0~P4.7中断  - Interrupt*/
#define		P5INT_VECTOR	42	/* P5.0~P5.4中断  - Interrupt*/
#define		P6INT_VECTOR	43	/* P6.0~P6.7中断  - Interrupt*/
#define		P7INT_VECTOR	44	/* P7.0~P7.7中断  - Interrupt*/
#define		P8INT_VECTOR	45	/* P8.0~P8.7中断  - Interrupt*/
#define		P9INT_VECTOR	46	/* P9.0~P9.7中断  - Interrupt*/

//=============================================================

#define	TRUE	1
#define	FALSE	0

#define	PolityLow			0	//低优先级中断 // Interrupt
#define	PolityHigh			1	//高优先级中断 // Interrupt

#define		ENABLE		1
#define		DISABLE		0

#endif
