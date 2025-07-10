
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

#include <intrins.h>

/*  BYTE Registers  */
sfr P0    = 0x80;
sfr SP    = 0x81;
sfr DPL   = 0x82;
sfr DPH   = 0x83;
sfr	S4CON = 0x84;
sfr	S4BUF = 0x85;
sfr PCON  = 0x87;

sfr TCON = 0x88;
sfr TMOD = 0x89;
sfr TL0  = 0x8A;
sfr TL1  = 0x8B;
sfr TH0  = 0x8C;
sfr TH1  = 0x8D;
sfr	AUXR = 0x8E;
sfr INT_CLKO = 0x8F;
sfr INTCLKO  = 0x8F;

sfr P1    = 0x90;
sfr P1M1  = 0x91;	//P1M1.n,P1M0.n 	=00--->Standard,	01--->push-pull		实际上1T的都一样
sfr P1M0  = 0x92;	//					=10--->pure input,	11--->open drain
sfr P0M1  = 0x93;	//P0M1.n,P0M0.n 	=00--->Standard,	01--->push-pull
sfr P0M0  = 0x94;	//					=10--->pure input,	11--->open drain
sfr P2M1  = 0x95;	//P2M1.n,P2M0.n 	=00--->Standard,	01--->push-pull
sfr P2M0  = 0x96;	//					=10--->pure input,	11--->open drain

sfr SCON    = 0x98;
sfr SBUF    = 0x99;
sfr S2CON   = 0x9A;	//
sfr S2BUF   = 0x9B;	//
sfr IRCBAND = 0x9D;	//IRC频段选择检测
sfr LIRTRIM = 0x9E;	//IRC频率微调寄存器
sfr IRTRIM  = 0x9F;	//IRC频率调整寄存器

sfr P2        = 0xA0;
sfr BUS_SPEED = 0xA1;
sfr P_SW1     = 0xA2;

sfr IE    = 0xA8;
sfr SADDR = 0xA9;	//串口1从机地址寄存器
sfr WKTCL = 0xAA;	//唤醒定时器低字节
sfr WKTCH = 0xAB;	//唤醒定时器高字节
sfr	S3CON = 0xAC;
sfr S3BUF = 0xAD;
sfr TA    = 0xAE;	//DPTR时序控制寄存器
sfr IE2   = 0xAF;	//中断允许寄存器2

sfr P3    = 0xB0;
sfr P3M1  = 0xB1;	//P3M1.n,P3M0.n 	=00--->Standard,	01--->push-pull
sfr P3M0  = 0xB2;	//					=10--->pure input,	11--->open drain
sfr P4M1  = 0xB3;	//P4M1.n,P4M0.n 	=00--->Standard,	01--->push-pull
sfr P4M0  = 0xB4;	//					=10--->pure input,	11--->open drain
sfr IP2   = 0xB5;	//中断优先级控制寄存器2
sfr IP2H  = 0xB6;	//高中断优先级控制寄存器2
sfr IPH   = 0xB7;	//高中断优先级控制寄存器

sfr IP        = 0xB8;	//中断优先级控制寄存器
sfr SADEN     = 0xB9;	//串口1从机地址屏蔽寄存器
sfr	P_SW2     = 0xBA;	//外设端口切换寄存器2
sfr ADC_CONTR = 0xBC;	//ADC控制寄存器
sfr ADC_RES   = 0xBD;	//ADC结果高字节
sfr ADC_RESL  = 0xBE;	//ADC结果低字节

sfr P4        = 0xC0;
sfr WDT_CONTR = 0xC1;

sfr IAP_DATA  = 0xC2;
sfr IAP_ADDRH = 0xC3;
sfr IAP_ADDRL = 0xC4;
sfr IAP_CMD   = 0xC5;
sfr IAP_TRIG  = 0xC6;
sfr IAP_CONTR = 0xC7;

sfr ISP_DATA  = 0xC2;
sfr ISP_ADDRH = 0xC3;
sfr ISP_ADDRL = 0xC4;
sfr ISP_CMD   = 0xC5;
sfr ISP_TRIG  = 0xC6;
sfr ISP_CONTR = 0xC7;

sfr P5     = 0xC8;	//
sfr P5M1   = 0xC9;	//	P5M1.n,P5M0.n 	=00--->Standard,	01--->push-pull
sfr P5M0   = 0xCA;	//					=10--->pure input,	11--->open drain
sfr P6M1   = 0xCB;	//	P6M1.n,P6M0.n 	=00--->Standard,	01--->push-pull
sfr P6M0   = 0xCC;	//					=10--->pure input,	11--->open drain
sfr SPSTAT = 0xCD;	//
sfr SPCTL  = 0xCE;	//
sfr SPDAT  = 0xCF;	//

sfr PSW    = 0xD0;
sfr	T4T3M  = 0xD1;
sfr	T4H    = 0xD2;
sfr	T4L    = 0xD3;
sfr	T3H    = 0xD4;
sfr	T3L    = 0xD5;
sfr	T2H    = 0xD6;
sfr	T2L    = 0xD7;

sfr	TH4    = 0xD2;
sfr	TL4    = 0xD3;
sfr	TH3    = 0xD4;
sfr	TL3    = 0xD5;
sfr	TH2    = 0xD6;
sfr	TL2    = 0xD7;

sfr CCON   = 0xD8;	//
sfr CMOD   = 0xD9;	//
sfr CCAPM0 = 0xDA;	//PCA模块0的工作模式寄存器
sfr CCAPM1 = 0xDB;	//PCA模块1的工作模式寄存器
sfr CCAPM2 = 0xDC;	//PCA模块2的工作模式寄存器
sfr	ADCCFG = 0xDE;	//
sfr	IP3    = 0xDF;	//中断优先级控制寄存器3

sfr ACC    = 0xE0;
sfr	P7M1   = 0xE1;	//	P7M1.n,P7M0.n 	=00--->Standard,	01--->push-pull
sfr	P7M0   = 0xE2;	//					=10--->pure input,	11--->open drain
sfr	DPS    = 0xE3;
sfr	DPL1   = 0xE4;
sfr	DPH1   = 0xE5;
sfr	CMPCR1 = 0xE6;
sfr	CMPCR2 = 0xE7;

sfr	P6     = 0xE8;
sfr CL     = 0xE9;	//
sfr CCAP0L = 0xEA;	//PCA模块0的捕获/比较寄存器低8位。
sfr CCAP1L = 0xEB;	//PCA模块1的捕获/比较寄存器低8位。
sfr CCAP2L = 0xEC;	//PCA模块2的捕获/比较寄存器低8位。
sfr	IP3H   = 0xEE;	//高中断优先级控制寄存器3
sfr	AUXINTIF = 0xEF;	//辅助中断标志 B6-INT4IF, B5-INT3IF, B4-INT2IF, B2-T4IF, B1-T3IF, B0-T2IF

sfr B        = 0xF0;
sfr	PWMSET   = 0xF1;	//增强型PWM全局配置寄存器
sfr PCA_PWM0 = 0xF2;	//PCA模块0 PWM寄存器。
sfr PCA_PWM1 = 0xF3;	//PCA模块1 PWM寄存器。
sfr PCA_PWM2 = 0xF4;	//PCA模块2 PWM寄存器。
sfr	IAP_TPS  = 0xF5;	//IAP等待时间控制寄存器
sfr	PWMCFG01 = 0xF6;	//增强型PWM配置寄存器
sfr	PWMCFG23 = 0xF7;	//增强型PWM配置寄存器

sfr	P7       = 0xF8;
sfr CH       = 0xF9;
sfr CCAP0H   = 0xFA;	//PCA模块0的捕获/比较寄存器高8位。
sfr CCAP1H   = 0xFB;	//PCA模块1的捕获/比较寄存器高8位。
sfr CCAP2H   = 0xFC;	//PCA模块2的捕获/比较寄存器高8位。
sfr	PWMCFG45 = 0xFE;	//增强型PWM配置寄存器
sfr	RSTCFG   = 0xFF;	//复位配置寄存器

//=============================================================================================================
#define P0INTE      (*(unsigned char volatile xdata *)0xfd00)	/* P0口中断使能寄存器 */
#define P1INTE      (*(unsigned char volatile xdata *)0xfd01)	/* P1口中断使能寄存器 */
#define P2INTE      (*(unsigned char volatile xdata *)0xfd02)	/* P2口中断使能寄存器 */
#define P3INTE      (*(unsigned char volatile xdata *)0xfd03)	/* P3口中断使能寄存器 */
#define P4INTE      (*(unsigned char volatile xdata *)0xfd04)	/* P4口中断使能寄存器 */
#define P5INTE      (*(unsigned char volatile xdata *)0xfd05)	/* P5口中断使能寄存器 */
#define P6INTE      (*(unsigned char volatile xdata *)0xfd06)	/* P6口中断使能寄存器 */
#define P7INTE      (*(unsigned char volatile xdata *)0xfd07)	/* P7口中断使能寄存器 */
#define P0INTF      (*(unsigned char volatile xdata *)0xfd10)	/* P0口中断标志寄存器 */
#define P1INTF      (*(unsigned char volatile xdata *)0xfd11)	/* P1口中断标志寄存器 */
#define P2INTF      (*(unsigned char volatile xdata *)0xfd12)	/* P2口中断标志寄存器 */
#define P3INTF      (*(unsigned char volatile xdata *)0xfd13)	/* P3口中断标志寄存器 */
#define P4INTF      (*(unsigned char volatile xdata *)0xfd14)	/* P4口中断标志寄存器 */
#define P5INTF      (*(unsigned char volatile xdata *)0xfd15)	/* P5口中断标志寄存器 */
#define P6INTF      (*(unsigned char volatile xdata *)0xfd16)	/* P6口中断标志寄存器 */
#define P7INTF      (*(unsigned char volatile xdata *)0xfd17)	/* P7口中断标志寄存器 */
#define P0IM0       (*(unsigned char volatile xdata *)0xfd20)	/* P0口中断模式寄存器0 */
#define P1IM0       (*(unsigned char volatile xdata *)0xfd21)	/* P1口中断模式寄存器0 */
#define P2IM0       (*(unsigned char volatile xdata *)0xfd22)	/* P2口中断模式寄存器0 */
#define P3IM0       (*(unsigned char volatile xdata *)0xfd23)	/* P3口中断模式寄存器0 */
#define P4IM0       (*(unsigned char volatile xdata *)0xfd24)	/* P4口中断模式寄存器0 */
#define P5IM0       (*(unsigned char volatile xdata *)0xfd25)	/* P5口中断模式寄存器0 */
#define P6IM0       (*(unsigned char volatile xdata *)0xfd26)	/* P6口中断模式寄存器0 */
#define P7IM0       (*(unsigned char volatile xdata *)0xfd27)	/* P7口中断模式寄存器0 */
#define P0IM1       (*(unsigned char volatile xdata *)0xfd30)	/* P0口中断模式寄存器1 */
#define P1IM1       (*(unsigned char volatile xdata *)0xfd31)	/* P1口中断模式寄存器1 */
#define P2IM1       (*(unsigned char volatile xdata *)0xfd32)	/* P2口中断模式寄存器1 */
#define P3IM1       (*(unsigned char volatile xdata *)0xfd33)	/* P3口中断模式寄存器1 */
#define P4IM1       (*(unsigned char volatile xdata *)0xfd34)	/* P4口中断模式寄存器1 */
#define P5IM1       (*(unsigned char volatile xdata *)0xfd35)	/* P5口中断模式寄存器1 */
#define P6IM1       (*(unsigned char volatile xdata *)0xfd36)	/* P6口中断模式寄存器1 */
#define P7IM1       (*(unsigned char volatile xdata *)0xfd37)	/* P7口中断模式寄存器1 */

#define INTE_0       0x01	/* 使能Px.0口中断功能 */
#define INTE_1       0x02	/* 使能Px.1口中断功能 */
#define INTE_2       0x04	/* 使能Px.2口中断功能 */
#define INTE_3       0x08	/* 使能Px.3口中断功能 */
#define INTE_4       0x10	/* 使能Px.4口中断功能 */
#define INTE_5       0x20	/* 使能Px.5口中断功能 */
#define INTE_6       0x40	/* 使能Px.6口中断功能 */
#define INTE_7       0x80	/* 使能Px.7口中断功能 */

#define INTF_0       0x01	/* Px.0口中断标志 */
#define INTF_1       0x02	/* Px.1口中断标志 */
#define INTF_2       0x04	/* Px.2口中断标志 */
#define INTF_3       0x08	/* Px.3口中断标志 */
#define INTF_4       0x10	/* Px.4口中断标志 */
#define INTF_5       0x20	/* Px.5口中断标志 */
#define INTF_6       0x40	/* Px.6口中断标志 */
#define INTF_7       0x80	/* Px.7口中断标志 */

#define	INT_FALL	0		/* 下降沿中断   */
#define	INT_RISE	1		/* 上升沿中断   */
#define	INT_LOW		2		/* 低电平中断   */
#define	INT_HIGH	3		/* 高电平中断   */


#define CLKSEL      (*(unsigned char volatile xdata *)0xfe00)	/* 主时钟源选择    */
#define	CKSEL		(*(unsigned char volatile xdata *)0xfe00)	/* 主时钟源选择    */
#define	CLKDIV		(*(unsigned char volatile xdata *)0xfe01)	/* 主时钟分频      */
#define	CKDIV		(*(unsigned char volatile xdata *)0xfe01)	/* 主时钟分频      */
#define	IRC24MCR	(*(unsigned char volatile xdata *)0xfe02)	/* IRC 24MHZ控制   */
#define	XOSCCR		(*(unsigned char volatile xdata *)0xfe03)	/* XOSC控制        */
#define	IRC32KCR	(*(unsigned char volatile xdata *)0xfe04)	/* IRC 32KHZ控制   */
#define	MCLKOCR		(*(unsigned char volatile xdata *)0xfe05)	/* 主时钟输出控制寄存器  */
#define	IRCDB		(*(unsigned char volatile xdata *)0xfe06)	/* 内部高速振荡器去抖控制寄存器  */

#define	P0PU		(*(unsigned char volatile xdata *)0xfe10)	/* P0 3.7K Pull Up Enable  */
#define	P1PU		(*(unsigned char volatile xdata *)0xfe11)	/* P1 3.7K Pull Up Enable  */
#define	P2PU		(*(unsigned char volatile xdata *)0xfe12)	/* P2 3.7K Pull Up Enable  */
#define	P3PU		(*(unsigned char volatile xdata *)0xfe13)	/* P3 3.7K Pull Up Enable  */
#define	P4PU		(*(unsigned char volatile xdata *)0xfe14)	/* P4 3.7K Pull Up Enable  */
#define	P5PU		(*(unsigned char volatile xdata *)0xfe15)	/* P5 3.7K Pull Up Enable  */
#define	P6PU		(*(unsigned char volatile xdata *)0xfe16)	/* P6 3.7K Pull Up Enable  */
#define	P7PU		(*(unsigned char volatile xdata *)0xfe17)	/* P7 3.7K Pull Up Enable  */

#define	P0NCS		(*(unsigned char volatile xdata *)0xfe18)	/* P0 Non Schmit Trigger  0: 使能端口施密特触发功能(默认), 1: 禁止  */
#define	P1NCS		(*(unsigned char volatile xdata *)0xfe19)	/* P1 Non Schmit Trigger  */
#define	P2NCS		(*(unsigned char volatile xdata *)0xfe1a)	/* P2 Non Schmit Trigger  */
#define	P3NCS		(*(unsigned char volatile xdata *)0xfe1b)	/* P3 Non Schmit Trigger  */
#define	P4NCS		(*(unsigned char volatile xdata *)0xfe1c)	/* P4 Non Schmit Trigger  */
#define	P5NCS		(*(unsigned char volatile xdata *)0xfe1d)	/* P5 Non Schmit Trigger  */
#define	P6NCS		(*(unsigned char volatile xdata *)0xfe1e)	/* P6 Non Schmit Trigger  */
#define	P7NCS		(*(unsigned char volatile xdata *)0xfe1f)	/* P7 Non Schmit Trigger  */

#define	P0SR		(*(unsigned char volatile xdata *)0xfe20)	/* P0口电平转换速率寄存器 默认1: 普通模式, 0:高速模式 */
#define	P1SR		(*(unsigned char volatile xdata *)0xfe21)	/* P1口电平转换速率寄存器  */
#define	P2SR		(*(unsigned char volatile xdata *)0xfe22)	/* P2口电平转换速率寄存器  */
#define	P3SR		(*(unsigned char volatile xdata *)0xfe23)	/* P3口电平转换速率寄存器  */
#define	P4SR		(*(unsigned char volatile xdata *)0xfe24)	/* P4口电平转换速率寄存器  */
#define	P5SR		(*(unsigned char volatile xdata *)0xfe25)	/* P5口电平转换速率寄存器  */
#define	P6SR		(*(unsigned char volatile xdata *)0xfe26)	/* P6口电平转换速率寄存器  */
#define	P7SR		(*(unsigned char volatile xdata *)0xfe27)	/* P7口电平转换速率寄存器  */

#define	P0DR		(*(unsigned char volatile xdata *)0xfe28)	/* P0口驱动电流控制寄存器 默认1: 普通模式, 0:大电流模式*/
#define	P1DR		(*(unsigned char volatile xdata *)0xfe29)	/* P1口驱动电流控制寄存器 */
#define	P2DR		(*(unsigned char volatile xdata *)0xfe2a)	/* P2口驱动电流控制寄存器 */
#define	P3DR		(*(unsigned char volatile xdata *)0xfe2b)	/* P3口驱动电流控制寄存器 */
#define	P4DR		(*(unsigned char volatile xdata *)0xfe2c)	/* P4口驱动电流控制寄存器 */
#define	P5DR		(*(unsigned char volatile xdata *)0xfe2d)	/* P5口驱动电流控制寄存器 */
#define	P6DR		(*(unsigned char volatile xdata *)0xfe2e)	/* P6口驱动电流控制寄存器 */
#define	P7DR		(*(unsigned char volatile xdata *)0xfe2f)	/* P7口驱动电流控制寄存器 */

#define	P0IE		(*(unsigned char volatile xdata *)0xfe30)	/* P0口输入使能控制寄存器, 1允许(默认), 0禁止 */
#define	P1IE		(*(unsigned char volatile xdata *)0xfe31)	/* P1口输入使能控制寄存器 */
#define	P2IE		(*(unsigned char volatile xdata *)0xfe32)	/* P2口输入使能控制寄存器 */
#define	P3IE		(*(unsigned char volatile xdata *)0xfe33)	/* P3口输入使能控制寄存器 */
#define	P4IE		(*(unsigned char volatile xdata *)0xfe34)	/* P4口输入使能控制寄存器 */
#define	P5IE		(*(unsigned char volatile xdata *)0xfe35)	/* P5口输入使能控制寄存器 */
#define	P6IE		(*(unsigned char volatile xdata *)0xfe36)	/* P6口输入使能控制寄存器 */
#define	P7IE		(*(unsigned char volatile xdata *)0xfe37)	/* P7口输入使能控制寄存器 */

#define	I2CCFG		(*(unsigned char volatile xdata *)0xfe80)	/* I2C配置寄存器  */
#define	I2CMSCR		(*(unsigned char volatile xdata *)0xfe81)	/* I2C主机控制寄存器  */
#define	I2CMSST		(*(unsigned char volatile xdata *)0xfe82)	/* I2C主机状态寄存器  */
#define	I2CSLCR		(*(unsigned char volatile xdata *)0xfe83)	/* I2C从机控制寄存器  */
#define	I2CSLST		(*(unsigned char volatile xdata *)0xfe84)	/* I2C从机状态寄存器  */
#define	I2CSLADR	(*(unsigned char volatile xdata *)0xfe85)	/* I2C从机地址寄存器  */
#define	I2CTXD		(*(unsigned char volatile xdata *)0xfe86)	/* I2C数据发送寄存器  */
#define	I2CRXD		(*(unsigned char volatile xdata *)0xfe87)	/* I2C数据接收寄存器  */
#define	I2CMSAUX	(*(unsigned char volatile xdata *)0xfe88)	/* I2C主机辅助控制寄存器  */

#define	TM2PS		(*(unsigned char volatile xdata *)0xfea2)	/* 定时器2时钟预分频寄存器  */
#define	TM3PS		(*(unsigned char volatile xdata *)0xfea3)	/* 定时器3时钟预分频寄存器  */
#define	TM4PS		(*(unsigned char volatile xdata *)0xfea4)	/* 定时器4时钟预分频寄存器  */
#define	ADCTIM		(*(unsigned char volatile xdata *)0xfea8)	/* ADC时序控制寄存器  */

// PWMSET(0xF1)控制位定义 
#define	ENGLBSET	0x80	/* 1: 6组PWM统一采用PWMCFG01中的PWM0的设置进行配置, 0: 各组PWM独立设置 */
#define	PWMRST		0x40	/* 1: 复位所有XFR寄存器(但不复位SFR寄存器), 软件清零 */
#define	ENPWM5		0x20	/* 1: 使能PWM5(PWM50~PWM54), 0: 关闭PWM5 */
#define	ENPWM4		0x10	/* 1: 使能PWM4(PWM40~PWM47), 0: 关闭PWM4 */
#define	ENPWM3		0x08	/* 1: 使能PWM3(PWM30~PWM37), 0: 关闭PWM3 */
#define	ENPWM2		0x04	/* 1: 使能PWM2(PWM20~PWM27), 0: 关闭PWM2 */
#define	ENPWM1		0x02	/* 1: 使能PWM1(PWM10~PWM17), 0: 关闭PWM1 */
#define	ENPWM0		0x01	/* 1: 使能PWM0(PWM00~PWM07), 0: 关闭PWM0 */

// PWMCFG01(0xF6)控制位定义
#define	PWM1CBIF	0x80	/* 1: PWM1计数器归零中断标志位, 归零硬件就置1, 软件清零 */
#define	EPWM1CBI	0x40	/* 1: 使能计数器归零中断， 0: 关闭计数器归零中断 */
#define	FLTPS0		0x20	/*  */
#define	PWM1CEN		0x10	/* 1: PWM1开始计数, 0: 停止计数 */
#define	PWM0CBIF	0x08	/* 1: PWM0计数器归零中断标志位, 归零硬件就置1, 软件清零 */
#define	EPWM0CBI	0x04	/* 1: 使能计数器归零中断， 0: 关闭计数器归零中断 */
#define	ENPWM0TA	0x02	/* 1: 当PWM计数值等于PWM0TADC时, 触发ADC转换 */
#define	PWM0CEN		0x01	/* 1: PWM0开始计数, 0: 停止计数 */

// PWMCFG23(0xF7)控制位定义
#define	PWM3CBIF	0x80	/* 1: PWM3计数器归零中断标志位, 归零硬件就置1, 软件清零 */
#define	EPWM3CBI	0x40	/* 1: 使能计数器归零中断， 0: 关闭计数器归零中断 */
#define	FLTPS1		0x20	/*  */
#define	PWM3CEN		0x10	/* 1: PWM3开始计数, 0: 停止计数 */
#define	PWM2CBIF	0x08	/* 1: PWM2计数器归零中断标志位, 归零硬件就置1, 软件清零 */
#define	EPWM2CBI	0x04	/* 1: 使能计数器归零中断， 0: 关闭计数器归零中断 */
#define	ENPWM2TA	0x02	/* 1: 当PWM计数值等于PWM2TADC时, 触发ADC转换 */
#define	PWM2CEN		0x01	/* 1: PWM2开始计数, 0: 停止计数 */

// PWMCFG45(0xFE)控制位定义
#define	PWM5CBIF	0x80	/* 1: PWM5计数器归零中断标志位, 归零硬件就置1, 软件清零 */
#define	EPWM5CBI	0x40	/* 1: 使能计数器归零中断， 0: 关闭计数器归零中断 */
#define	FLTPS2		0x20	/*  */
#define	PWM5CEN		0x10	/* 1: PWM5开始计数, 0: 停止计数 */
#define	PWM4CBIF	0x08	/* 1: PWM4计数器归零中断标志位, 归零硬件就置1, 软件清零 */
#define	EPWM4CBI	0x04	/* 1: 使能计数器归零中断， 0: 关闭计数器归零中断 */
#define	ENPWM4TA	0x02	/* 1: 当PWM计数值等于PWM4TADC时, 触发ADC转换 */
#define	PWM4CEN		0x01	/* 1: PWM4开始计数, 0: 停止计数 */

//PWMxIF  PWM0中断标志寄存器位定义
#define	C7IF	0x80	/* 1: PWMx7匹配中断标志位, 软件清零 */
#define	C6IF	0x40	/* 1: PWMx6匹配中断标志位, 软件清零 */
#define	C5IF	0x20	/* 1: PWMx5匹配中断标志位, 软件清零 */
#define	C4IF	0x10	/* 1: PWMx4匹配中断标志位, 软件清零 */
#define	C3IF	0x08	/* 1: PWMx3匹配中断标志位, 软件清零 */
#define	C2IF	0x04	/* 1: PWMx2匹配中断标志位, 软件清零 */
#define	C1IF	0x02	/* 1: PWMx1匹配中断标志位, 软件清零 */
#define	C0IF	0x01	/* 1: PWMx0匹配中断标志位, 软件清零 */

//PWMxCKS PWM时钟选择寄存器位定义
#define	CKS_TIMER2	0x10	/* 使用定时器2溢出做PWM时钟 */
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

//PWMxxCR PWM通道控制寄存器位定义
#define	ENO		0x80	/* 1: 允许对应引脚为PWM, 0: 对应引脚为GPIO */
#define	INI		0x40	/* 1: 设置对应引脚初始电平为高电平, 0: 初始电平为低电平. 一旦启动PWM, 则引脚输出会受PWM控制 */
#define	ENI		0x04	/* 1: 允许中断, 0: 禁止中断 */
#define	ENT2I	0x02	/* 1: 允许上升沿中断, 0: 禁止上升沿中断 (T2匹配)*/
#define	ENT1I	0x01	/* 1: 允许下降沿中断, 0: 禁止下降沿中断 (T1匹配)*/
//PWMxxHLD PWM通道电平保持(强制输出)控制寄存器位定义
#define	PWM_KeepHigh	0x02	/* PWM强制输出高电平 */
#define	PWM_KeepLow		0x01	/* PWM强制输出低电平 */
#define	PWM_Normal		0x00	/* PWM正常输出 */

#define PWM0C       (*(unsigned int  volatile xdata *)0xff00)	/* PWM0计数器高字节 */
#define PWM0TADC    (*(unsigned int  volatile xdata *)0xff03)	/* PWM0触发ADC计数 */
#define PWM00T1     (*(unsigned int  volatile xdata *)0xff10)	/* PWM00T1计数值 */
#define PWM00T2     (*(unsigned int  volatile xdata *)0xff12)	/* PWM00T2计数值 */
#define PWM01T1     (*(unsigned int  volatile xdata *)0xff18)	/* PWM01T1计数值 */
#define PWM01T2     (*(unsigned int  volatile xdata *)0xff1a)	/* PWM01T2计数值 */
#define PWM02T1     (*(unsigned int  volatile xdata *)0xff20)	/* PWM02T1计数值 */
#define PWM02T2     (*(unsigned int  volatile xdata *)0xff22)	/* PWM02T2计数值 */
#define PWM03T1     (*(unsigned int  volatile xdata *)0xff28)	/* PWM03T1计数值 */
#define PWM03T2     (*(unsigned int  volatile xdata *)0xff2a)	/* PWM03T2计数值 */
#define PWM04T1     (*(unsigned int  volatile xdata *)0xff30)	/* PWM04T1计数值 */
#define PWM04T2     (*(unsigned int  volatile xdata *)0xff32)	/* PWM04T2计数值 */
#define PWM05T1     (*(unsigned int  volatile xdata *)0xff38)	/* PWM05T1计数值 */
#define PWM05T2     (*(unsigned int  volatile xdata *)0xff3a)	/* PWM05T2计数值 */
#define PWM06T1     (*(unsigned int  volatile xdata *)0xff40)	/* PWM06T1计数值 */
#define PWM06T2     (*(unsigned int  volatile xdata *)0xff42)	/* PWM06T2计数值 */
#define PWM07T1     (*(unsigned int  volatile xdata *)0xff48)	/* PWM07T1计数值 */
#define PWM07T2     (*(unsigned int  volatile xdata *)0xff4a)	/* PWM07T2计数值 */
#define PWM1C       (*(unsigned int  volatile xdata *)0xff50)	/* PWM1计数器高字节 */
#define PWM1TADC    (*(unsigned int  volatile xdata *)0xff53)	/* PWM1触发ADC计数 */
#define PWM10T1     (*(unsigned int  volatile xdata *)0xff60)	/* PWM10T1计数值 */
#define PWM10T2     (*(unsigned int  volatile xdata *)0xff62)	/* PWM10T2计数值 */
#define PWM11T1     (*(unsigned int  volatile xdata *)0xff68)	/* PWM11T1计数值 */
#define PWM11T2     (*(unsigned int  volatile xdata *)0xff6a)	/* PWM11T2计数值 */
#define PWM12T1     (*(unsigned int  volatile xdata *)0xff70)	/* PWM12T1计数值 */
#define PWM12T2     (*(unsigned int  volatile xdata *)0xff72)	/* PWM12T2计数值 */
#define PWM13T1     (*(unsigned int  volatile xdata *)0xff78)	/* PWM13T1计数值 */
#define PWM13T2     (*(unsigned int  volatile xdata *)0xff7a)	/* PWM13T2计数值 */
#define PWM14T1     (*(unsigned int  volatile xdata *)0xff80)	/* PWM14T1计数值 */
#define PWM14T2     (*(unsigned int  volatile xdata *)0xff82)	/* PWM14T2计数值 */
#define PWM15T1     (*(unsigned int  volatile xdata *)0xff88)	/* PWM15T1计数值 */
#define PWM15T2     (*(unsigned int  volatile xdata *)0xff8a)	/* PWM15T2计数值 */
#define PWM16T1     (*(unsigned int  volatile xdata *)0xff90)	/* PWM16T1计数值 */
#define PWM16T2     (*(unsigned int  volatile xdata *)0xff92)	/* PWM16T2计数值 */
#define PWM17T1     (*(unsigned int  volatile xdata *)0xff98)	/* PWM17T1计数值 */
#define PWM17T2     (*(unsigned int  volatile xdata *)0xff9a)	/* PWM17T2计数值 */
#define PWM2C       (*(unsigned int  volatile xdata *)0xffa0)	/* PWM2计数器高字节 */
#define PWM2TADC    (*(unsigned int  volatile xdata *)0xffa3)	/* PWM2触发ADC计数 */
#define PWM20T1     (*(unsigned int  volatile xdata *)0xffb0)	/* PWM20T1计数值 */
#define PWM20T2     (*(unsigned int  volatile xdata *)0xffb2)	/* PWM20T2计数值 */
#define PWM21T1     (*(unsigned int  volatile xdata *)0xffb8)	/* PWM21T1计数值 */
#define PWM21T2     (*(unsigned int  volatile xdata *)0xffba)	/* PWM21T2计数值 */
#define PWM22T1     (*(unsigned int  volatile xdata *)0xffc0)	/* PWM22T1计数值 */
#define PWM22T2     (*(unsigned int  volatile xdata *)0xffc2)	/* PWM22T2计数值 */
#define PWM23T1     (*(unsigned int  volatile xdata *)0xffc8)	/* PWM23T1计数值 */
#define PWM23T2     (*(unsigned int  volatile xdata *)0xffca)	/* PWM23T2计数值 */
#define PWM24T1     (*(unsigned int  volatile xdata *)0xffd0)	/* PWM24T1计数值 */
#define PWM24T2     (*(unsigned int  volatile xdata *)0xffd2)	/* PWM24T2计数值 */
#define PWM25T1     (*(unsigned int  volatile xdata *)0xffd8)	/* PWM25T1计数值 */
#define PWM25T2     (*(unsigned int  volatile xdata *)0xffda)	/* PWM25T2计数值 */
#define PWM26T1     (*(unsigned int  volatile xdata *)0xffe0)	/* PWM26T1计数值 */
#define PWM26T2     (*(unsigned int  volatile xdata *)0xffe2)	/* PWM26T2计数值 */
#define PWM27T1     (*(unsigned int  volatile xdata *)0xffe8)	/* PWM27T1计数值 */
#define PWM27T2     (*(unsigned int  volatile xdata *)0xffea)	/* PWM27T2计数值 */
#define PWM3C       (*(unsigned int  volatile xdata *)0xfc00)	/* PWM3计数器 */
#define PWM3TADC    (*(unsigned int  volatile xdata *)0xfc03)	/* PWM3触发ADC计数 */
#define PWM30T1     (*(unsigned int  volatile xdata *)0xfc10)	/* PWM30T1计数值 */
#define PWM30T2     (*(unsigned int  volatile xdata *)0xfc12)	/* PWM30T2计数值 */
#define PWM31T1     (*(unsigned int  volatile xdata *)0xfc18)	/* PWM31T1计数值 */
#define PWM31T2     (*(unsigned int  volatile xdata *)0xfc1a)	/* PWM31T2计数值 */
#define PWM32T1     (*(unsigned int  volatile xdata *)0xfc20)	/* PWM32T1计数值 */
#define PWM32T2     (*(unsigned int  volatile xdata *)0xfc22)	/* PWM32T2计数值 */
#define PWM33T1     (*(unsigned int  volatile xdata *)0xfc28)	/* PWM33T1计数值 */
#define PWM33T2     (*(unsigned int  volatile xdata *)0xfc2a)	/* PWM33T2计数值 */
#define PWM34T1     (*(unsigned int  volatile xdata *)0xfc30)	/* PWM34T1计数值 */
#define PWM34T2     (*(unsigned int  volatile xdata *)0xfc32)	/* PWM34T2计数值 */
#define PWM35T1     (*(unsigned int  volatile xdata *)0xfc38)	/* PWM35T1计数值 */
#define PWM35T2     (*(unsigned int  volatile xdata *)0xfc3a)	/* PWM35T2计数值 */
#define PWM36T1     (*(unsigned int  volatile xdata *)0xfc40)	/* PWM36T1计数值 */
#define PWM36T2     (*(unsigned int  volatile xdata *)0xfc42)	/* PWM36T2计数值 */
#define PWM37T1     (*(unsigned int  volatile xdata *)0xfc48)	/* PWM37T1计数值 */
#define PWM37T2     (*(unsigned int  volatile xdata *)0xfc4a)	/* PWM37T2计数值 */
#define PWM4C       (*(unsigned int  volatile xdata *)0xfc50)	/* PWM4计数器 */
#define PWM4TADC    (*(unsigned int  volatile xdata *)0xfc53)	/* PWM4触发ADC计数 */
#define PWM40T1     (*(unsigned int  volatile xdata *)0xfc60)	/* PWM40T1计数值 */
#define PWM40T2     (*(unsigned int  volatile xdata *)0xfc62)	/* PWM40T2计数值 */
#define PWM41T1     (*(unsigned int  volatile xdata *)0xfc68)	/* PWM41T1计数值 */
#define PWM41T2     (*(unsigned int  volatile xdata *)0xfc6a)	/* PWM41T2计数值 */
#define PWM42T1     (*(unsigned int  volatile xdata *)0xfc70)	/* PWM42T1计数值 */
#define PWM42T2     (*(unsigned int  volatile xdata *)0xfc72)	/* PWM42T2计数值 */
#define PWM43T1     (*(unsigned int  volatile xdata *)0xfc78)	/* PWM43T1计数值 */
#define PWM43T2     (*(unsigned int  volatile xdata *)0xfc7a)	/* PWM43T2计数值 */
#define PWM44T1     (*(unsigned int  volatile xdata *)0xfc80)	/* PWM44T1计数值 */
#define PWM44T2     (*(unsigned int  volatile xdata *)0xfc82)	/* PWM44T2计数值 */
#define PWM45T1     (*(unsigned int  volatile xdata *)0xfc88)	/* PWM45T1计数值 */
#define PWM45T2     (*(unsigned int  volatile xdata *)0xfc8a)	/* PWM45T2计数值 */
#define PWM46T1     (*(unsigned int  volatile xdata *)0xfc90)	/* PWM46T1计数值 */
#define PWM46T2     (*(unsigned int  volatile xdata *)0xfc92)	/* PWM46T2计数值 */
#define PWM47T1     (*(unsigned int  volatile xdata *)0xfc98)	/* PWM47T1计数值 */
#define PWM47T2     (*(unsigned int  volatile xdata *)0xfc9a)	/* PWM47T2计数值 */
#define PWM5C       (*(unsigned int  volatile xdata *)0xfca0)	/* PWM4计数器 */
#define PWM5TADC    (*(unsigned int  volatile xdata *)0xfca3)	/* PWM4触发ADC计数 */
#define PWM50T1     (*(unsigned int  volatile xdata *)0xfcb0)	/* PWM40T1计数值 */
#define PWM50T2     (*(unsigned int  volatile xdata *)0xfcb2)	/* PWM40T2计数值 */
#define PWM51T1     (*(unsigned int  volatile xdata *)0xfcb8)	/* PWM41T1计数值 */
#define PWM51T2     (*(unsigned int  volatile xdata *)0xfcba)	/* PWM41T2计数值 */
#define PWM52T1     (*(unsigned int  volatile xdata *)0xfcc0)	/* PWM42T1计数值 */
#define PWM52T2     (*(unsigned int  volatile xdata *)0xfcc2)	/* PWM42T2计数值 */
#define PWM53T1     (*(unsigned int  volatile xdata *)0xfcc8)	/* PWM43T1计数值 */
#define PWM53T2     (*(unsigned int  volatile xdata *)0xfcca)	/* PWM43T2计数值 */
#define PWM54T1     (*(unsigned int  volatile xdata *)0xfcd0)	/* PWM44T1计数值 */
#define PWM54T2     (*(unsigned int  volatile xdata *)0xfcd2)	/* PWM44T2计数值 */
#define PWM55T1     (*(unsigned int  volatile xdata *)0xfcd8)	/* PWM45T1计数值 */
#define PWM55T2     (*(unsigned int  volatile xdata *)0xfcda)	/* PWM45T2计数值 */
#define PWM56T1     (*(unsigned int  volatile xdata *)0xfce0)	/* PWM46T1计数值 */
#define PWM56T2     (*(unsigned int  volatile xdata *)0xfce2)	/* PWM46T2计数值 */
#define PWM57T1     (*(unsigned int  volatile xdata *)0xfce8)	/* PWM47T1计数值 */
#define PWM57T2     (*(unsigned int  volatile xdata *)0xfcea)	/* PWM47T2计数值 */

#define PWM0CH      (*(unsigned char volatile xdata *)0xff00)	/* PWM0计数器高字节 */
#define PWM0CL      (*(unsigned char volatile xdata *)0xff01)	/* PWM0计数器低字节 */
#define PWM0CKS     (*(unsigned char volatile xdata *)0xff02)	/* PWM0时钟选择 */
#define PWM0TADCH   (*(unsigned char volatile xdata *)0xff03)	/* PWM0触发ADC计数高字节 */
#define PWM0TADCL   (*(unsigned char volatile xdata *)0xff04)	/* PWM0触发ADC计数低字节 */
#define PWM0IF      (*(unsigned char volatile xdata *)0xff05)	/* PWM0中断标志寄存器    */
#define PWM0FDCR    (*(unsigned char volatile xdata *)0xff06)	/* PWM0异常检测控制寄存器 */

#define PWM00T1H    (*(unsigned char volatile xdata *)0xff10)	/* PWM00T1计数值高字节 */
#define PWM00T1L    (*(unsigned char volatile xdata *)0xff11)	/* PWM00T1计数值低字节 */
#define PWM00T2H    (*(unsigned char volatile xdata *)0xff12)	/* PWM00T2计数值高字节 */
#define PWM00T2L    (*(unsigned char volatile xdata *)0xff13)	/* PWM00T2计数值低字节 */
#define PWM00CR     (*(unsigned char volatile xdata *)0xff14)	/* PWM00控制寄存器     */
#define PWM00HLD    (*(unsigned char volatile xdata *)0xff15)	/* PWM00电平保持控制寄存器 */

#define PWM01T1H    (*(unsigned char volatile xdata *)0xff18)	/* PWM01T1计数值高字节 */
#define PWM01T1L    (*(unsigned char volatile xdata *)0xff19)	/* PWM01T1计数值低字节 */
#define PWM01T2H    (*(unsigned char volatile xdata *)0xff1a)	/* PWM01T2计数值高字节 */
#define PWM01T2L    (*(unsigned char volatile xdata *)0xff1b)	/* PWM01T2计数值低字节 */
#define PWM01CR     (*(unsigned char volatile xdata *)0xff1c)	/* PWM01控制寄存器     */
#define PWM01HLD    (*(unsigned char volatile xdata *)0xff1d)	/* PWM01电平保持控制寄存器 */

#define PWM02T1H    (*(unsigned char volatile xdata *)0xff20)	/* PWM02T1计数值高字节 */
#define PWM02T1L    (*(unsigned char volatile xdata *)0xff21)	/* PWM02T1计数值低字节 */
#define PWM02T2H    (*(unsigned char volatile xdata *)0xff22)	/* PWM02T2计数值高字节 */
#define PWM02T2L    (*(unsigned char volatile xdata *)0xff23)	/* PWM02T2计数值低字节 */
#define PWM02CR     (*(unsigned char volatile xdata *)0xff24)	/* PWM02控制寄存器     */
#define PWM02HLD    (*(unsigned char volatile xdata *)0xff25)	/* PWM02电平保持控制寄存器 */

#define PWM03T1H    (*(unsigned char volatile xdata *)0xff28)	/* PWM03T1计数值高字节 */
#define PWM03T1L    (*(unsigned char volatile xdata *)0xff29)	/* PWM03T1计数值低字节 */
#define PWM03T2H    (*(unsigned char volatile xdata *)0xff2a)	/* PWM03T2计数值高字节 */
#define PWM03T2L    (*(unsigned char volatile xdata *)0xff2b)	/* PWM03T2计数值低字节 */
#define PWM03CR     (*(unsigned char volatile xdata *)0xff2c)	/* PWM03控制寄存器     */
#define PWM03HLD    (*(unsigned char volatile xdata *)0xff2d)	/* PWM03电平保持控制寄存器 */

#define PWM04T1H    (*(unsigned char volatile xdata *)0xff30)	/* PWM04T1计数值高字节 */
#define PWM04T1L    (*(unsigned char volatile xdata *)0xff31)	/* PWM04T1计数值低字节 */
#define PWM04T2H    (*(unsigned char volatile xdata *)0xff32)	/* PWM04T2计数值高字节 */
#define PWM04T2L    (*(unsigned char volatile xdata *)0xff33)	/* PWM04T2计数值低字节 */
#define PWM04CR     (*(unsigned char volatile xdata *)0xff34)	/* PWM04控制寄存器     */
#define PWM04HLD    (*(unsigned char volatile xdata *)0xff35)	/* PWM04电平保持控制寄存器 */

#define PWM05T1H    (*(unsigned char volatile xdata *)0xff38)	/* PWM05T1计数值高字节 */
#define PWM05T1L    (*(unsigned char volatile xdata *)0xff39)	/* PWM05T1计数值低字节 */
#define PWM05T2H    (*(unsigned char volatile xdata *)0xff3a)	/* PWM05T2计数值高字节 */
#define PWM05T2L    (*(unsigned char volatile xdata *)0xff3b)	/* PWM05T2计数值低字节 */
#define PWM05CR     (*(unsigned char volatile xdata *)0xff3c)	/* PWM05控制寄存器     */
#define PWM05HLD    (*(unsigned char volatile xdata *)0xff3d)	/* PWM05电平保持控制寄存器 */

#define PWM06T1H    (*(unsigned char volatile xdata *)0xff40)	/* PWM06T1计数值高字节 */
#define PWM06T1L    (*(unsigned char volatile xdata *)0xff41)	/* PWM06T1计数值低字节 */
#define PWM06T2H    (*(unsigned char volatile xdata *)0xff42)	/* PWM06T2计数值高字节 */
#define PWM06T2L    (*(unsigned char volatile xdata *)0xff43)	/* PWM06T2计数值低字节 */
#define PWM06CR     (*(unsigned char volatile xdata *)0xff44)	/* PWM06控制寄存器     */
#define PWM06HLD    (*(unsigned char volatile xdata *)0xff45)	/* PWM06电平保持控制寄存器 */

#define PWM07T1H    (*(unsigned char volatile xdata *)0xff48)	/* PWM07T1计数值高字节 */
#define PWM07T1L    (*(unsigned char volatile xdata *)0xff49)	/* PWM07T1计数值低字节 */
#define PWM07T2H    (*(unsigned char volatile xdata *)0xff4a)	/* PWM07T2计数值高字节 */
#define PWM07T2L    (*(unsigned char volatile xdata *)0xff4b)	/* PWM07T2计数值低字节 */
#define PWM07CR     (*(unsigned char volatile xdata *)0xff4c)	/* PWM07控制寄存器     */
#define PWM07HLD    (*(unsigned char volatile xdata *)0xff4d)	/* PWM07电平保持控制寄存器 */

#define PWM1CH      (*(unsigned char volatile xdata *)0xff50)	/* PWM1计数器高字节 */
#define PWM1CL      (*(unsigned char volatile xdata *)0xff51)	/* PWM1计数器低字节 */
#define PWM1CKS     (*(unsigned char volatile xdata *)0xff52)	/* PWM1时钟选择 */
#define PWM1TADCH   (*(unsigned char volatile xdata *)0xff53)	/* PWM1触发ADC计数高字节 */
#define PWM1TADCL   (*(unsigned char volatile xdata *)0xff54)	/* PWM1触发ADC计数低字节 */
#define PWM1IF      (*(unsigned char volatile xdata *)0xff55)	/* PWM1中断标志寄存器    */
#define PWM1FDCR    (*(unsigned char volatile xdata *)0xff56)	/* PWM1异常检测控制寄存器 */

#define PWM10T1H    (*(unsigned char volatile xdata *)0xff60)	/* PWM10T1计数值高字节 */
#define PWM10T1L    (*(unsigned char volatile xdata *)0xff61)	/* PWM10T1计数值低字节 */
#define PWM10T2H    (*(unsigned char volatile xdata *)0xff62)	/* PWM10T2计数值高字节 */
#define PWM10T2L    (*(unsigned char volatile xdata *)0xff63)	/* PWM10T2计数值低字节 */
#define PWM10CR     (*(unsigned char volatile xdata *)0xff64)	/* PWM10控制寄存器     */
#define PWM10HLD    (*(unsigned char volatile xdata *)0xff65)	/* PWM10电平保持控制寄存器 */

#define PWM11T1H    (*(unsigned char volatile xdata *)0xff68)	/* PWM11T1计数值高字节 */
#define PWM11T1L    (*(unsigned char volatile xdata *)0xff69)	/* PWM11T1计数值低字节 */
#define PWM11T2H    (*(unsigned char volatile xdata *)0xff6a)	/* PWM11T2计数值高字节 */
#define PWM11T2L    (*(unsigned char volatile xdata *)0xff6b)	/* PWM11T2计数值低字节 */
#define PWM11CR     (*(unsigned char volatile xdata *)0xff6c)	/* PWM11控制寄存器     */
#define PWM11HLD    (*(unsigned char volatile xdata *)0xff6d)	/* PWM11电平保持控制寄存器 */

#define PWM12T1H    (*(unsigned char volatile xdata *)0xff70)	/* PWM12T1计数值高字节 */
#define PWM12T1L    (*(unsigned char volatile xdata *)0xff71)	/* PWM12T1计数值低字节 */
#define PWM12T2H    (*(unsigned char volatile xdata *)0xff72)	/* PWM12T2计数值高字节 */
#define PWM12T2L    (*(unsigned char volatile xdata *)0xff73)	/* PWM12T2计数值低字节 */
#define PWM12CR     (*(unsigned char volatile xdata *)0xff74)	/* PWM12控制寄存器     */
#define PWM12HLD    (*(unsigned char volatile xdata *)0xff75)	/* PWM12电平保持控制寄存器 */

#define PWM13T1H    (*(unsigned char volatile xdata *)0xff78)	/* PWM13T1计数值高字节 */
#define PWM13T1L    (*(unsigned char volatile xdata *)0xff79)	/* PWM13T1计数值低字节 */
#define PWM13T2H    (*(unsigned char volatile xdata *)0xff7a)	/* PWM13T2计数值高字节 */
#define PWM13T2L    (*(unsigned char volatile xdata *)0xff7b)	/* PWM13T2计数值低字节 */
#define PWM13CR     (*(unsigned char volatile xdata *)0xff7c)	/* PWM13控制寄存器     */
#define PWM13HLD    (*(unsigned char volatile xdata *)0xff7d)	/* PWM13电平保持控制寄存器 */

#define PWM14T1H    (*(unsigned char volatile xdata *)0xff80)	/* PWM14T1计数值高字节 */
#define PWM14T1L    (*(unsigned char volatile xdata *)0xff81)	/* PWM14T1计数值低字节 */
#define PWM14T2H    (*(unsigned char volatile xdata *)0xff82)	/* PWM14T2计数值高字节 */
#define PWM14T2L    (*(unsigned char volatile xdata *)0xff83)	/* PWM14T2计数值低字节 */
#define PWM14CR     (*(unsigned char volatile xdata *)0xff84)	/* PWM14控制寄存器     */
#define PWM14HLD    (*(unsigned char volatile xdata *)0xff85)	/* PWM14电平保持控制寄存器 */

#define PWM15T1H    (*(unsigned char volatile xdata *)0xff88)	/* PWM15T1计数值高字节 */
#define PWM15T1L    (*(unsigned char volatile xdata *)0xff89)	/* PWM15T1计数值低字节 */
#define PWM15T2H    (*(unsigned char volatile xdata *)0xff8a)	/* PWM15T2计数值高字节 */
#define PWM15T2L    (*(unsigned char volatile xdata *)0xff8b)	/* PWM15T2计数值低字节 */
#define PWM15CR     (*(unsigned char volatile xdata *)0xff8c)	/* PWM15控制寄存器     */
#define PWM15HLD    (*(unsigned char volatile xdata *)0xff8d)	/* PWM15电平保持控制寄存器 */

#define PWM16T1H    (*(unsigned char volatile xdata *)0xff90)	/* PWM16T1计数值高字节 */
#define PWM16T1L    (*(unsigned char volatile xdata *)0xff91)	/* PWM16T1计数值低字节 */
#define PWM16T2H    (*(unsigned char volatile xdata *)0xff92)	/* PWM16T2计数值高字节 */
#define PWM16T2L    (*(unsigned char volatile xdata *)0xff93)	/* PWM16T2计数值低字节 */
#define PWM16CR     (*(unsigned char volatile xdata *)0xff94)	/* PWM16控制寄存器     */
#define PWM16HLD    (*(unsigned char volatile xdata *)0xff95)	/* PWM16电平保持控制寄存器 */

#define PWM17T1H    (*(unsigned char volatile xdata *)0xff98)	/* PWM17T1计数值高字节 */
#define PWM17T1L    (*(unsigned char volatile xdata *)0xff99)	/* PWM17T1计数值低字节 */
#define PWM17T2H    (*(unsigned char volatile xdata *)0xff9a)	/* PWM17T2计数值高字节 */
#define PWM17T2L    (*(unsigned char volatile xdata *)0xff9b)	/* PWM17T2计数值低字节 */
#define PWM17CR     (*(unsigned char volatile xdata *)0xff9c)	/* PWM17控制寄存器     */
#define PWM17HLD    (*(unsigned char volatile xdata *)0xff9d)	/* PWM17电平保持控制寄存器 */

#define PWM2CH      (*(unsigned char volatile xdata *)0xffa0)	/* PWM2计数器高字节 */
#define PWM2CL      (*(unsigned char volatile xdata *)0xffa1)	/* PWM2计数器低字节 */
#define PWM2CKS     (*(unsigned char volatile xdata *)0xffa2)	/* PWM2时钟选择 */
#define PWM2TADCH   (*(unsigned char volatile xdata *)0xffa3)	/* PWM2触发ADC计数高字节 */
#define PWM2TADCL   (*(unsigned char volatile xdata *)0xffa4)	/* PWM2触发ADC计数低字节 */
#define PWM2IF      (*(unsigned char volatile xdata *)0xffa5)	/* PWM2中断标志寄存器    */
#define PWM2FDCR    (*(unsigned char volatile xdata *)0xffa6)	/* PWM2异常检测控制寄存器 */

#define PWM20T1H    (*(unsigned char volatile xdata *)0xffb0)	/* PWM20T1计数值高字节 */
#define PWM20T1L    (*(unsigned char volatile xdata *)0xffb1)	/* PWM20T1计数值低字节 */
#define PWM20T2H    (*(unsigned char volatile xdata *)0xffb2)	/* PWM20T2计数值高字节 */
#define PWM20T2L    (*(unsigned char volatile xdata *)0xffb3)	/* PWM20T2计数值低字节 */
#define PWM20CR     (*(unsigned char volatile xdata *)0xffb4)	/* PWM20控制寄存器     */
#define PWM20HLD    (*(unsigned char volatile xdata *)0xffb5)	/* PWM20电平保持控制寄存器 */

#define PWM21T1H    (*(unsigned char volatile xdata *)0xffb8)	/* PWM21T1计数值高字节 */
#define PWM21T1L    (*(unsigned char volatile xdata *)0xffb9)	/* PWM21T1计数值低字节 */
#define PWM21T2H    (*(unsigned char volatile xdata *)0xffba)	/* PWM21T2计数值高字节 */
#define PWM21T2L    (*(unsigned char volatile xdata *)0xffbb)	/* PWM21T2计数值低字节 */
#define PWM21CR     (*(unsigned char volatile xdata *)0xffbc)	/* PWM21控制寄存器     */
#define PWM21HLD    (*(unsigned char volatile xdata *)0xffbd)	/* PWM21电平保持控制寄存器 */

#define PWM22T1H    (*(unsigned char volatile xdata *)0xffc0)	/* PWM22T1计数值高字节 */
#define PWM22T1L    (*(unsigned char volatile xdata *)0xffc1)	/* PWM22T1计数值低字节 */
#define PWM22T2H    (*(unsigned char volatile xdata *)0xffc2)	/* PWM22T2计数值高字节 */
#define PWM22T2L    (*(unsigned char volatile xdata *)0xffc3)	/* PWM22T2计数值低字节 */
#define PWM22CR     (*(unsigned char volatile xdata *)0xffc4)	/* PWM22控制寄存器     */
#define PWM22HLD    (*(unsigned char volatile xdata *)0xffc5)	/* PWM22电平保持控制寄存器 */

#define PWM23T1H    (*(unsigned char volatile xdata *)0xffc8)	/* PWM23T1计数值高字节 */
#define PWM23T1L    (*(unsigned char volatile xdata *)0xffc9)	/* PWM23T1计数值低字节 */
#define PWM23T2H    (*(unsigned char volatile xdata *)0xffca)	/* PWM23T2计数值高字节 */
#define PWM23T2L    (*(unsigned char volatile xdata *)0xffcb)	/* PWM23T2计数值低字节 */
#define PWM23CR     (*(unsigned char volatile xdata *)0xffcc)	/* PWM23控制寄存器     */
#define PWM23HLD    (*(unsigned char volatile xdata *)0xffcd)	/* PWM23电平保持控制寄存器 */

#define PWM24T1H    (*(unsigned char volatile xdata *)0xffd0)	/* PWM24T1计数值高字节 */
#define PWM24T1L    (*(unsigned char volatile xdata *)0xffd1)	/* PWM24T1计数值低字节 */
#define PWM24T2H    (*(unsigned char volatile xdata *)0xffd2)	/* PWM24T2计数值高字节 */
#define PWM24T2L    (*(unsigned char volatile xdata *)0xffd3)	/* PWM24T2计数值低字节 */
#define PWM24CR     (*(unsigned char volatile xdata *)0xffd4)	/* PWM24控制寄存器     */
#define PWM24HLD    (*(unsigned char volatile xdata *)0xffd5)	/* PWM24电平保持控制寄存器 */

#define PWM25T1H    (*(unsigned char volatile xdata *)0xffd8)	/* PWM25T1计数值高字节 */
#define PWM25T1L    (*(unsigned char volatile xdata *)0xffd9)	/* PWM25T1计数值低字节 */
#define PWM25T2H    (*(unsigned char volatile xdata *)0xffda)	/* PWM25T2计数值高字节 */
#define PWM25T2L    (*(unsigned char volatile xdata *)0xffdb)	/* PWM25T2计数值低字节 */
#define PWM25CR     (*(unsigned char volatile xdata *)0xffdc)	/* PWM25控制寄存器     */
#define PWM25HLD    (*(unsigned char volatile xdata *)0xffdd)	/* PWM25电平保持控制寄存器 */

#define PWM26T1H    (*(unsigned char volatile xdata *)0xffe0)	/* PWM26T1计数值高字节 */
#define PWM26T1L    (*(unsigned char volatile xdata *)0xffe1)	/* PWM26T1计数值低字节 */
#define PWM26T2H    (*(unsigned char volatile xdata *)0xffe2)	/* PWM26T2计数值高字节 */
#define PWM26T2L    (*(unsigned char volatile xdata *)0xffe3)	/* PWM26T2计数值低字节 */
#define PWM26CR     (*(unsigned char volatile xdata *)0xffe4)	/* PWM26控制寄存器     */
#define PWM26HLD    (*(unsigned char volatile xdata *)0xffe5)	/* PWM26电平保持控制寄存器 */

#define PWM27T1H    (*(unsigned char volatile xdata *)0xffe8)	/* PWM27T1计数值高字节 */
#define PWM27T1L    (*(unsigned char volatile xdata *)0xffe9)	/* PWM27T1计数值低字节 */
#define PWM27T2H    (*(unsigned char volatile xdata *)0xffea)	/* PWM27T2计数值高字节 */
#define PWM27T2L    (*(unsigned char volatile xdata *)0xffeb)	/* PWM27T2计数值低字节 */
#define PWM27CR     (*(unsigned char volatile xdata *)0xffec)	/* PWM27控制寄存器     */
#define PWM27HLD    (*(unsigned char volatile xdata *)0xffed)	/* PWM27电平保持控制寄存器 */

#define PWM3CH      (*(unsigned char volatile xdata *)0xfc00)	/* PWM3计数器高字节 */
#define PWM3CL      (*(unsigned char volatile xdata *)0xfc01)	/* PWM3计数器低字节 */
#define PWM3CKS     (*(unsigned char volatile xdata *)0xfc02)	/* PWM3时钟选择 */
#define PWM3TADCH   (*(unsigned char volatile xdata *)0xfc03)	/* PWM3触发ADC计数高字节 */
#define PWM3TADCL   (*(unsigned char volatile xdata *)0xfc04)	/* PWM3触发ADC计数低字节 */
#define PWM3IF      (*(unsigned char volatile xdata *)0xfc05)	/* PWM3中断标志寄存器    */
#define PWM3FDCR    (*(unsigned char volatile xdata *)0xfc06)	/* PWM3异常检测控制寄存器 */

#define PWM30T1H    (*(unsigned char volatile xdata *)0xfc10)	/* PWM30T1计数值高字节 */
#define PWM30T1L    (*(unsigned char volatile xdata *)0xfc11)	/* PWM30T1计数值低字节 */
#define PWM30T2H    (*(unsigned char volatile xdata *)0xfc12)	/* PWM30T2计数值高字节 */
#define PWM30T2L    (*(unsigned char volatile xdata *)0xfc13)	/* PWM30T2计数值低字节 */
#define PWM30CR     (*(unsigned char volatile xdata *)0xfc14)	/* PWM30控制寄存器     */
#define PWM30HLD    (*(unsigned char volatile xdata *)0xfc15)	/* PWM30电平保持控制寄存器 */

#define PWM31T1H    (*(unsigned char volatile xdata *)0xfc18)	/* PWM31T1计数值高字节 */
#define PWM31T1L    (*(unsigned char volatile xdata *)0xfc19)	/* PWM31T1计数值低字节 */
#define PWM31T2H    (*(unsigned char volatile xdata *)0xfc1a)	/* PWM31T2计数值高字节 */
#define PWM31T2L    (*(unsigned char volatile xdata *)0xfc1b)	/* PWM31T2计数值低字节 */
#define PWM31CR     (*(unsigned char volatile xdata *)0xfc1c)	/* PWM31控制寄存器     */
#define PWM31HLD    (*(unsigned char volatile xdata *)0xfc1d)	/* PWM31电平保持控制寄存器 */

#define PWM32T1H    (*(unsigned char volatile xdata *)0xfc20)	/* PWM32T1计数值高字节 */
#define PWM32T1L    (*(unsigned char volatile xdata *)0xfc21)	/* PWM32T1计数值低字节 */
#define PWM32T2H    (*(unsigned char volatile xdata *)0xfc22)	/* PWM32T2计数值高字节 */
#define PWM32T2L    (*(unsigned char volatile xdata *)0xfc23)	/* PWM32T2计数值低字节 */
#define PWM32CR     (*(unsigned char volatile xdata *)0xfc24)	/* PWM32控制寄存器     */
#define PWM32HLD    (*(unsigned char volatile xdata *)0xfc25)	/* PWM32电平保持控制寄存器 */

#define PWM33T1H    (*(unsigned char volatile xdata *)0xfc28)	/* PWM33T1计数值高字节 */
#define PWM33T1L    (*(unsigned char volatile xdata *)0xfc29)	/* PWM33T1计数值低字节 */
#define PWM33T2H    (*(unsigned char volatile xdata *)0xfc2a)	/* PWM33T2计数值高字节 */
#define PWM33T2L    (*(unsigned char volatile xdata *)0xfc2b)	/* PWM33T2计数值低字节 */
#define PWM33CR     (*(unsigned char volatile xdata *)0xfc2c)	/* PWM33控制寄存器     */
#define PWM33HLD    (*(unsigned char volatile xdata *)0xfc2d)	/* PWM33电平保持控制寄存器 */

#define PWM34T1H    (*(unsigned char volatile xdata *)0xfc30)	/* PWM34T1计数值高字节 */
#define PWM34T1L    (*(unsigned char volatile xdata *)0xfc31)	/* PWM34T1计数值低字节 */
#define PWM34T2H    (*(unsigned char volatile xdata *)0xfc32)	/* PWM34T2计数值高字节 */
#define PWM34T2L    (*(unsigned char volatile xdata *)0xfc33)	/* PWM34T2计数值低字节 */
#define PWM34CR     (*(unsigned char volatile xdata *)0xfc34)	/* PWM34控制寄存器     */
#define PWM34HLD    (*(unsigned char volatile xdata *)0xfc35)	/* PWM34电平保持控制寄存器 */

#define PWM35T1H    (*(unsigned char volatile xdata *)0xfc38)	/* PWM35T1计数值高字节 */
#define PWM35T1L    (*(unsigned char volatile xdata *)0xfc39)	/* PWM35T1计数值低字节 */
#define PWM35T2H    (*(unsigned char volatile xdata *)0xfc3a)	/* PWM35T2计数值高字节 */
#define PWM35T2L    (*(unsigned char volatile xdata *)0xfc3b)	/* PWM35T2计数值低字节 */
#define PWM35CR     (*(unsigned char volatile xdata *)0xfc3c)	/* PWM35控制寄存器     */
#define PWM35HLD    (*(unsigned char volatile xdata *)0xfc3d)	/* PWM35电平保持控制寄存器 */

#define PWM36T1H    (*(unsigned char volatile xdata *)0xfc40)	/* PWM36T1计数值高字节 */
#define PWM36T1L    (*(unsigned char volatile xdata *)0xfc41)	/* PWM36T1计数值低字节 */
#define PWM36T2H    (*(unsigned char volatile xdata *)0xfc42)	/* PWM36T2计数值高字节 */
#define PWM36T2L    (*(unsigned char volatile xdata *)0xfc43)	/* PWM36T2计数值低字节 */
#define PWM36CR     (*(unsigned char volatile xdata *)0xfc44)	/* PWM36控制寄存器     */
#define PWM36HLD    (*(unsigned char volatile xdata *)0xfc45)	/* PWM36电平保持控制寄存器 */

#define PWM37T1H    (*(unsigned char volatile xdata *)0xfc48)	/* PWM37T1计数值高字节 */
#define PWM37T1L    (*(unsigned char volatile xdata *)0xfc49)	/* PWM37T1计数值低字节 */
#define PWM37T2H    (*(unsigned char volatile xdata *)0xfc4a)	/* PWM37T2计数值高字节 */
#define PWM37T2L    (*(unsigned char volatile xdata *)0xfc4b)	/* PWM37T2计数值低字节 */
#define PWM37CR     (*(unsigned char volatile xdata *)0xfc4c)	/* PWM37控制寄存器     */
#define PWM37HLD    (*(unsigned char volatile xdata *)0xfc4d)	/* PWM37电平保持控制寄存器 */

#define PWM4CH      (*(unsigned char volatile xdata *)0xfc50)	/* PWM4计数器高字节 */
#define PWM4CL      (*(unsigned char volatile xdata *)0xfc51)	/* PWM4计数器低字节 */
#define PWM4CKS     (*(unsigned char volatile xdata *)0xfc52)	/* PWM4时钟选择 */
#define PWM4TADCH   (*(unsigned char volatile xdata *)0xfc53)	/* PWM4触发ADC计数高字节 */
#define PWM4TADCL   (*(unsigned char volatile xdata *)0xfc54)	/* PWM4触发ADC计数低字节 */
#define PWM4IF      (*(unsigned char volatile xdata *)0xfc55)	/* PWM4中断标志寄存器    */
#define PWM4FDCR    (*(unsigned char volatile xdata *)0xfc56)	/* PWM4异常检测控制寄存器 */

#define PWM40T1H    (*(unsigned char volatile xdata *)0xfc60)	/* PWM40T1计数值高字节 */
#define PWM40T1L    (*(unsigned char volatile xdata *)0xfc61)	/* PWM40T1计数值低字节 */
#define PWM40T2H    (*(unsigned char volatile xdata *)0xfc62)	/* PWM40T2计数值高字节 */
#define PWM40T2L    (*(unsigned char volatile xdata *)0xfc63)	/* PWM40T2计数值低字节 */
#define PWM40CR     (*(unsigned char volatile xdata *)0xfc64)	/* PWM40控制寄存器     */
#define PWM40HLD    (*(unsigned char volatile xdata *)0xfc65)	/* PWM40电平保持控制寄存器 */

#define PWM41T1H    (*(unsigned char volatile xdata *)0xfc68)	/* PWM41T1计数值高字节 */
#define PWM41T1L    (*(unsigned char volatile xdata *)0xfc69)	/* PWM41T1计数值低字节 */
#define PWM41T2H    (*(unsigned char volatile xdata *)0xfc6a)	/* PWM41T2计数值高字节 */
#define PWM41T2L    (*(unsigned char volatile xdata *)0xfc6b)	/* PWM41T2计数值低字节 */
#define PWM41CR     (*(unsigned char volatile xdata *)0xfc6c)	/* PWM41控制寄存器     */
#define PWM41HLD    (*(unsigned char volatile xdata *)0xfc6d)	/* PWM41电平保持控制寄存器 */

#define PWM42T1H    (*(unsigned char volatile xdata *)0xfc70)	/* PWM42T1计数值高字节 */
#define PWM42T1L    (*(unsigned char volatile xdata *)0xfc71)	/* PWM42T1计数值低字节 */
#define PWM42T2H    (*(unsigned char volatile xdata *)0xfc72)	/* PWM42T2计数值高字节 */
#define PWM42T2L    (*(unsigned char volatile xdata *)0xfc73)	/* PWM42T2计数值低字节 */
#define PWM42CR     (*(unsigned char volatile xdata *)0xfc74)	/* PWM42控制寄存器     */
#define PWM42HLD    (*(unsigned char volatile xdata *)0xfc75)	/* PWM42电平保持控制寄存器 */

#define PWM43T1H    (*(unsigned char volatile xdata *)0xfc78)	/* PWM43T1计数值高字节 */
#define PWM43T1L    (*(unsigned char volatile xdata *)0xfc79)	/* PWM43T1计数值低字节 */
#define PWM43T2H    (*(unsigned char volatile xdata *)0xfc7a)	/* PWM43T2计数值高字节 */
#define PWM43T2L    (*(unsigned char volatile xdata *)0xfc7b)	/* PWM43T2计数值低字节 */
#define PWM43CR     (*(unsigned char volatile xdata *)0xfc7c)	/* PWM43控制寄存器     */
#define PWM43HLD    (*(unsigned char volatile xdata *)0xfc7d)	/* PWM43电平保持控制寄存器 */

#define PWM44T1H    (*(unsigned char volatile xdata *)0xfc80)	/* PWM44T1计数值高字节 */
#define PWM44T1L    (*(unsigned char volatile xdata *)0xfc81)	/* PWM44T1计数值低字节 */
#define PWM44T2H    (*(unsigned char volatile xdata *)0xfc82)	/* PWM44T2计数值高字节 */
#define PWM44T2L    (*(unsigned char volatile xdata *)0xfc83)	/* PWM44T2计数值低字节 */
#define PWM44CR     (*(unsigned char volatile xdata *)0xfc84)	/* PWM44控制寄存器     */
#define PWM44HLD    (*(unsigned char volatile xdata *)0xfc85)	/* PWM44电平保持控制寄存器 */

#define PWM45T1H    (*(unsigned char volatile xdata *)0xfc88)	/* PWM45T1计数值高字节 */
#define PWM45T1L    (*(unsigned char volatile xdata *)0xfc89)	/* PWM45T1计数值低字节 */
#define PWM45T2H    (*(unsigned char volatile xdata *)0xfc8a)	/* PWM45T2计数值高字节 */
#define PWM45T2L    (*(unsigned char volatile xdata *)0xfc8b)	/* PWM45T2计数值低字节 */
#define PWM45CR     (*(unsigned char volatile xdata *)0xfc8c)	/* PWM45控制寄存器     */
#define PWM45HLD    (*(unsigned char volatile xdata *)0xfc8d)	/* PWM45电平保持控制寄存器 */

#define PWM46T1H    (*(unsigned char volatile xdata *)0xfc90)	/* PWM46T1计数值高字节 */
#define PWM46T1L    (*(unsigned char volatile xdata *)0xfc91)	/* PWM46T1计数值低字节 */
#define PWM46T2H    (*(unsigned char volatile xdata *)0xfc92)	/* PWM46T2计数值高字节 */
#define PWM46T2L    (*(unsigned char volatile xdata *)0xfc93)	/* PWM46T2计数值低字节 */
#define PWM46CR     (*(unsigned char volatile xdata *)0xfc94)	/* PWM46控制寄存器     */
#define PWM46HLD    (*(unsigned char volatile xdata *)0xfc95)	/* PWM46电平保持控制寄存器 */

#define PWM47T1H    (*(unsigned char volatile xdata *)0xfc98)	/* PWM47T1计数值高字节 */
#define PWM47T1L    (*(unsigned char volatile xdata *)0xfc99)	/* PWM47T1计数值低字节 */
#define PWM47T2H    (*(unsigned char volatile xdata *)0xfc9a)	/* PWM47T2计数值高字节 */
#define PWM47T2L    (*(unsigned char volatile xdata *)0xfc9b)	/* PWM47T2计数值低字节 */
#define PWM47CR     (*(unsigned char volatile xdata *)0xfc9c)	/* PWM47控制寄存器     */
#define PWM47HLD    (*(unsigned char volatile xdata *)0xfc9d)	/* PWM47电平保持控制寄存器 */

#define PWM5CH      (*(unsigned char volatile xdata *)0xfca0)	/* PWM5计数器高字节 */
#define PWM5CL      (*(unsigned char volatile xdata *)0xfca1)	/* PWM5计数器低字节 */
#define PWM5CKS     (*(unsigned char volatile xdata *)0xfca2)	/* PWM5时钟选择 */
#define PWM5TADCH   (*(unsigned char volatile xdata *)0xfca3)	/* PWM5触发ADC计数高字节 */
#define PWM5TADCL   (*(unsigned char volatile xdata *)0xfca4)	/* PWM5触发ADC计数低字节 */
#define PWM5IF      (*(unsigned char volatile xdata *)0xfca5)	/* PWM5中断标志寄存器    */
#define PWM5FDCR    (*(unsigned char volatile xdata *)0xfca6)	/* PWM5异常检测控制寄存器 */

#define PWM50T1H    (*(unsigned char volatile xdata *)0xfcb0)	/* PWM50T1计数值高字节 */
#define PWM50T1L    (*(unsigned char volatile xdata *)0xfcb1)	/* PWM50T1计数值低字节 */
#define PWM50T2H    (*(unsigned char volatile xdata *)0xfcb2)	/* PWM50T2计数值高字节 */
#define PWM50T2L    (*(unsigned char volatile xdata *)0xfcb3)	/* PWM50T2计数值低字节 */
#define PWM50CR     (*(unsigned char volatile xdata *)0xfcb4)	/* PWM50控制寄存器     */
#define PWM50HLD    (*(unsigned char volatile xdata *)0xfcb5)	/* PWM50电平保持控制寄存器 */

#define PWM51T1H    (*(unsigned char volatile xdata *)0xfcb8)	/* PWM51T1计数值高字节 */
#define PWM51T1L    (*(unsigned char volatile xdata *)0xfcb9)	/* PWM51T1计数值低字节 */
#define PWM51T2H    (*(unsigned char volatile xdata *)0xfcba)	/* PWM51T2计数值高字节 */
#define PWM51T2L    (*(unsigned char volatile xdata *)0xfcbb)	/* PWM51T2计数值低字节 */
#define PWM51CR     (*(unsigned char volatile xdata *)0xfcbc)	/* PWM51控制寄存器     */
#define PWM51HLD    (*(unsigned char volatile xdata *)0xfcbd)	/* PWM51电平保持控制寄存器 */

#define PWM52T1H    (*(unsigned char volatile xdata *)0xfcc0)	/* PWM52T1计数值高字节 */
#define PWM52T1L    (*(unsigned char volatile xdata *)0xfcc1)	/* PWM52T1计数值低字节 */
#define PWM52T2H    (*(unsigned char volatile xdata *)0xfcc2)	/* PWM52T2计数值高字节 */
#define PWM52T2L    (*(unsigned char volatile xdata *)0xfcc3)	/* PWM52T2计数值低字节 */
#define PWM52CR     (*(unsigned char volatile xdata *)0xfcc4)	/* PWM52控制寄存器     */
#define PWM52HLD    (*(unsigned char volatile xdata *)0xfcc5)	/* PWM52电平保持控制寄存器 */

#define PWM53T1H    (*(unsigned char volatile xdata *)0xfcc8)	/* PWM53T1计数值高字节 */
#define PWM53T1L    (*(unsigned char volatile xdata *)0xfcc9)	/* PWM53T1计数值低字节 */
#define PWM53T2H    (*(unsigned char volatile xdata *)0xfcca)	/* PWM53T2计数值高字节 */
#define PWM53T2L    (*(unsigned char volatile xdata *)0xfccb)	/* PWM53T2计数值低字节 */
#define PWM53CR     (*(unsigned char volatile xdata *)0xfccc)	/* PWM53控制寄存器     */
#define PWM53HLD    (*(unsigned char volatile xdata *)0xfccd)	/* PWM53电平保持控制寄存器 */

#define PWM54T1H    (*(unsigned char volatile xdata *)0xfcd0)	/* PWM54T1计数值高字节 */
#define PWM54T1L    (*(unsigned char volatile xdata *)0xfcd1)	/* PWM54T1计数值低字节 */
#define PWM54T2H    (*(unsigned char volatile xdata *)0xfcd2)	/* PWM54T2计数值高字节 */
#define PWM54T2L    (*(unsigned char volatile xdata *)0xfcd3)	/* PWM54T2计数值低字节 */
#define PWM54CR     (*(unsigned char volatile xdata *)0xfcd4)	/* PWM54控制寄存器     */
#define PWM54HLD    (*(unsigned char volatile xdata *)0xfcd5)	/* PWM54电平保持控制寄存器 */

#define PWM55T1H    (*(unsigned char volatile xdata *)0xfcd8)	/* PWM55T1计数值高字节 */
#define PWM55T1L    (*(unsigned char volatile xdata *)0xfcd9)	/* PWM55T1计数值低字节 */
#define PWM55T2H    (*(unsigned char volatile xdata *)0xfcda)	/* PWM55T2计数值高字节 */
#define PWM55T2L    (*(unsigned char volatile xdata *)0xfcdb)	/* PWM55T2计数值低字节 */
#define PWM55CR     (*(unsigned char volatile xdata *)0xfcdc)	/* PWM55控制寄存器     */
#define PWM55HLD    (*(unsigned char volatile xdata *)0xfcdd)	/* PWM55电平保持控制寄存器 */

#define PWM56T1H    (*(unsigned char volatile xdata *)0xfce0)	/* PWM56T1计数值高字节 */
#define PWM56T1L    (*(unsigned char volatile xdata *)0xfce1)	/* PWM56T1计数值低字节 */
#define PWM56T2H    (*(unsigned char volatile xdata *)0xfce2)	/* PWM56T2计数值高字节 */
#define PWM56T2L    (*(unsigned char volatile xdata *)0xfce3)	/* PWM56T2计数值低字节 */
#define PWM56CR     (*(unsigned char volatile xdata *)0xfce4)	/* PWM56控制寄存器     */
#define PWM56HLD    (*(unsigned char volatile xdata *)0xfce5)	/* PWM56电平保持控制寄存器 */

#define PWM57T1H    (*(unsigned char volatile xdata *)0xfce8)	/* PWM57T1计数值高字节 */
#define PWM57T1L    (*(unsigned char volatile xdata *)0xfce9)	/* PWM57T1计数值低字节 */
#define PWM57T2H    (*(unsigned char volatile xdata *)0xfcea)	/* PWM57T2计数值高字节 */
#define PWM57T2L    (*(unsigned char volatile xdata *)0xfceb)	/* PWM57T2计数值低字节 */
#define PWM57CR     (*(unsigned char volatile xdata *)0xfcec)	/* PWM57控制寄存器     */
#define PWM57HLD    (*(unsigned char volatile xdata *)0xfced)	/* PWM57电平保持控制寄存器 */

#define MD3U32    (*(unsigned long volatile xdata *)0xfcf0)	/* MDU数据寄存器 */
#define MD3U16    (*(unsigned int  volatile xdata *)0xfcf0)	/* MDU数据寄存器 */
#define MD1U16    (*(unsigned int  volatile xdata *)0xfcf2)	/* MDU数据寄存器 */
#define MD5U16    (*(unsigned int  volatile xdata *)0xfcf4)	/* MDU数据寄存器 */

#define MD3       (*(unsigned char volatile xdata *)0xfcf0)	/* MDU数据寄存器 */
#define MD2       (*(unsigned char volatile xdata *)0xfcf1)	/* MDU数据寄存器 */
#define MD1       (*(unsigned char volatile xdata *)0xfcf2)	/* MDU数据寄存器 */
#define MD0       (*(unsigned char volatile xdata *)0xfcf3)	/* MDU数据寄存器 */
#define MD5       (*(unsigned char volatile xdata *)0xfcf4)	/* MDU数据寄存器 */
#define MD4       (*(unsigned char volatile xdata *)0xfcf5)	/* MDU数据寄存器 */
#define ARCON     (*(unsigned char volatile xdata *)0xfcf6)	/* MDU模式控制寄存器 */
#define OPCON     (*(unsigned char volatile xdata *)0xfcf7)	/* MDU操作控制寄存器 */

#define COMEN     (*(unsigned char volatile xdata *)0xfb00)	/* COM使能寄存器 */
#define SEGENL    (*(unsigned char volatile xdata *)0xfb01)	/* SEG使能寄存器 */
#define SEGENH    (*(unsigned char volatile xdata *)0xfb02)	/* SEG使能寄存器 */
#define LEDCTRL   (*(unsigned char volatile xdata *)0xfb03)	/* LED控制寄存器 */
#define LEDCKS    (*(unsigned char volatile xdata *)0xfb04)	/* LED时钟分频寄存器 */

#define COM0_DAL  (*(unsigned char volatile xdata *)0xfb10)	/* 共阳模式显示数据 */
#define COM1_DAL  (*(unsigned char volatile xdata *)0xfb11)	/* 共阳模式显示数据 */
#define COM2_DAL  (*(unsigned char volatile xdata *)0xfb12)	/* 共阳模式显示数据 */
#define COM3_DAL  (*(unsigned char volatile xdata *)0xfb13)	/* 共阳模式显示数据 */
#define COM4_DAL  (*(unsigned char volatile xdata *)0xfb14)	/* 共阳模式显示数据 */
#define COM5_DAL  (*(unsigned char volatile xdata *)0xfb15)	/* 共阳模式显示数据 */
#define COM6_DAL  (*(unsigned char volatile xdata *)0xfb16)	/* 共阳模式显示数据 */
#define COM7_DAL  (*(unsigned char volatile xdata *)0xfb17)	/* 共阳模式显示数据 */
#define COM0_DAH  (*(unsigned char volatile xdata *)0xfb18)	/* 共阳模式显示数据 */
#define COM1_DAH  (*(unsigned char volatile xdata *)0xfb19)	/* 共阳模式显示数据 */
#define COM2_DAH  (*(unsigned char volatile xdata *)0xfb1a)	/* 共阳模式显示数据 */
#define COM3_DAH  (*(unsigned char volatile xdata *)0xfb1b)	/* 共阳模式显示数据 */
#define COM4_DAH  (*(unsigned char volatile xdata *)0xfb1c)	/* 共阳模式显示数据 */
#define COM5_DAH  (*(unsigned char volatile xdata *)0xfb1d)	/* 共阳模式显示数据 */
#define COM6_DAH  (*(unsigned char volatile xdata *)0xfb1e)	/* 共阳模式显示数据 */
#define COM7_DAH  (*(unsigned char volatile xdata *)0xfb1f)	/* 共阳模式显示数据 */

#define COM0_DCL  (*(unsigned char volatile xdata *)0xfb20)	/* 共阴模式显示数据 */
#define COM1_DCL  (*(unsigned char volatile xdata *)0xfb21)	/* 共阴模式显示数据 */
#define COM2_DCL  (*(unsigned char volatile xdata *)0xfb22)	/* 共阴模式显示数据 */
#define COM3_DCL  (*(unsigned char volatile xdata *)0xfb23)	/* 共阴模式显示数据 */
#define COM4_DCL  (*(unsigned char volatile xdata *)0xfb24)	/* 共阴模式显示数据 */
#define COM5_DCL  (*(unsigned char volatile xdata *)0xfb25)	/* 共阴模式显示数据 */
#define COM6_DCL  (*(unsigned char volatile xdata *)0xfb26)	/* 共阴模式显示数据 */
#define COM7_DCL  (*(unsigned char volatile xdata *)0xfb27)	/* 共阴模式显示数据 */
#define COM0_DCH  (*(unsigned char volatile xdata *)0xfb28)	/* 共阴模式显示数据 */
#define COM1_DCH  (*(unsigned char volatile xdata *)0xfb29)	/* 共阴模式显示数据 */
#define COM2_DCH  (*(unsigned char volatile xdata *)0xfb2a)	/* 共阴模式显示数据 */
#define COM3_DCH  (*(unsigned char volatile xdata *)0xfb2b)	/* 共阴模式显示数据 */
#define COM4_DCH  (*(unsigned char volatile xdata *)0xfb2c)	/* 共阴模式显示数据 */
#define COM5_DCH  (*(unsigned char volatile xdata *)0xfb2d)	/* 共阴模式显示数据 */
#define COM6_DCH  (*(unsigned char volatile xdata *)0xfb2e)	/* 共阴模式显示数据 */
#define COM7_DCH  (*(unsigned char volatile xdata *)0xfb2f)	/* 共阴模式显示数据 */

#define TSCHEN     (*(unsigned int  volatile xdata *)0xfb40)	/* 触摸按键使能寄存器 */
#define TSCFG      (*(unsigned int  volatile xdata *)0xfb42)	/* 触摸按键配置寄存器1 */
#define TSSTA      (*(unsigned int  volatile xdata *)0xfb46)	/* 触摸按键状态寄存器1 */
#define TSDAT      (*(unsigned int  volatile xdata *)0xfb49)	/* 触摸按键数据 */
#define TSTH00     (*(unsigned int  volatile xdata *)0xfb50)	/* 触摸按键0门槛值高字节 */
#define TSTH01     (*(unsigned int  volatile xdata *)0xfb52)	/* 触摸按键1门槛值高字节 */
#define TSTH02     (*(unsigned int  volatile xdata *)0xfb54)	/* 触摸按键2门槛值高字节 */
#define TSTH03     (*(unsigned int  volatile xdata *)0xfb56)	/* 触摸按键3门槛值高字节 */
#define TSTH04     (*(unsigned int  volatile xdata *)0xfb58)	/* 触摸按键4门槛值高字节 */
#define TSTH05     (*(unsigned int  volatile xdata *)0xfb5a)	/* 触摸按键5门槛值高字节 */
#define TSTH06     (*(unsigned int  volatile xdata *)0xfb5c)	/* 触摸按键6门槛值高字节 */
#define TSTH07     (*(unsigned int  volatile xdata *)0xfb5e)	/* 触摸按键7门槛值高字节 */
#define TSTH08     (*(unsigned int  volatile xdata *)0xfb60)	/* 触摸按键8门槛值高字节 */
#define TSTH09     (*(unsigned int  volatile xdata *)0xfb62)	/* 触摸按键9门槛值高字节 */
#define TSTH10     (*(unsigned int  volatile xdata *)0xfb64)	/* 触摸按键10门槛值高字节 */
#define TSTH11     (*(unsigned int  volatile xdata *)0xfb66)	/* 触摸按键11门槛值高字节 */
#define TSTH12     (*(unsigned int  volatile xdata *)0xfb68)	/* 触摸按键12门槛值高字节 */
#define TSTH13     (*(unsigned int  volatile xdata *)0xfb6a)	/* 触摸按键13门槛值高字节 */
#define TSTH14     (*(unsigned int  volatile xdata *)0xfb6c)	/* 触摸按键14门槛值高字节 */
#define TSTH15     (*(unsigned int  volatile xdata *)0xfb6e)	/* 触摸按键15门槛值高字节 */

#define TSCHEN1    (*(unsigned char volatile xdata *)0xfb40)	/* 触摸按键使能寄存器1 */
#define TSCHEN2    (*(unsigned char volatile xdata *)0xfb41)	/* 触摸按键使能寄存器2 */
#define TSCFG1     (*(unsigned char volatile xdata *)0xfb42)	/* 触摸按键配置寄存器1 */
#define TSCFG2     (*(unsigned char volatile xdata *)0xfb43)	/* 触摸按键配置寄存器2 */
#define TSWUTC     (*(unsigned char volatile xdata *)0xfb44)	/* 触摸按键唤醒控制寄存器 */
#define TSCTRL     (*(unsigned char volatile xdata *)0xfb45)	/* 触摸按键控制寄存器  */
#define TSSTA1     (*(unsigned char volatile xdata *)0xfb46)	/* 触摸按键状态寄存器1 */
#define TSSTA2     (*(unsigned char volatile xdata *)0xfb47)	/* 触摸按键状态寄存器2 */

#define TSRT       (*(unsigned char volatile xdata *)0xfb48)	/* 触摸按键时间控制寄存器 */
#define TSDATH     (*(unsigned char volatile xdata *)0xfb49)	/* 触摸按键数据高字节 */
#define TSDATL     (*(unsigned char volatile xdata *)0xfb4a)	/* 触摸按键数据低字节 */

#define TSTH00H    (*(unsigned char volatile xdata *)0xfb50)	/* 触摸按键0门槛值高字节 */
#define TSTH00L    (*(unsigned char volatile xdata *)0xfb51)	/* 触摸按键0门槛值低字节 */
#define TSTH01H    (*(unsigned char volatile xdata *)0xfb52)	/* 触摸按键1门槛值高字节 */
#define TSTH01L    (*(unsigned char volatile xdata *)0xfb53)	/* 触摸按键1门槛值低字节 */
#define TSTH02H    (*(unsigned char volatile xdata *)0xfb54)	/* 触摸按键2门槛值高字节 */
#define TSTH02L    (*(unsigned char volatile xdata *)0xfb55)	/* 触摸按键2门槛值低字节 */
#define TSTH03H    (*(unsigned char volatile xdata *)0xfb56)	/* 触摸按键3门槛值高字节 */
#define TSTH03L    (*(unsigned char volatile xdata *)0xfb57)	/* 触摸按键3门槛值低字节 */
#define TSTH04H    (*(unsigned char volatile xdata *)0xfb58)	/* 触摸按键4门槛值高字节 */
#define TSTH04L    (*(unsigned char volatile xdata *)0xfb59)	/* 触摸按键4门槛值低字节 */
#define TSTH05H    (*(unsigned char volatile xdata *)0xfb5a)	/* 触摸按键5门槛值高字节 */
#define TSTH05L    (*(unsigned char volatile xdata *)0xfb5b)	/* 触摸按键5门槛值低字节 */
#define TSTH06H    (*(unsigned char volatile xdata *)0xfb5c)	/* 触摸按键6门槛值高字节 */
#define TSTH06L    (*(unsigned char volatile xdata *)0xfb5d)	/* 触摸按键6门槛值低字节 */
#define TSTH07H    (*(unsigned char volatile xdata *)0xfb5e)	/* 触摸按键7门槛值高字节 */
#define TSTH07L    (*(unsigned char volatile xdata *)0xfb5f)	/* 触摸按键7门槛值低字节 */
#define TSTH08H    (*(unsigned char volatile xdata *)0xfb60)	/* 触摸按键8门槛值高字节 */
#define TSTH08L    (*(unsigned char volatile xdata *)0xfb61)	/* 触摸按键8门槛值低字节 */
#define TSTH09H    (*(unsigned char volatile xdata *)0xfb62)	/* 触摸按键9门槛值高字节 */
#define TSTH09L    (*(unsigned char volatile xdata *)0xfb63)	/* 触摸按键9门槛值低字节 */
#define TSTH10H    (*(unsigned char volatile xdata *)0xfb64)	/* 触摸按键10门槛值高字节 */
#define TSTH10L    (*(unsigned char volatile xdata *)0xfb65)	/* 触摸按键10门槛值低字节 */
#define TSTH11H    (*(unsigned char volatile xdata *)0xfb66)	/* 触摸按键11门槛值高字节 */
#define TSTH11L    (*(unsigned char volatile xdata *)0xfb67)	/* 触摸按键11门槛值低字节 */
#define TSTH12H    (*(unsigned char volatile xdata *)0xfb68)	/* 触摸按键12门槛值高字节 */
#define TSTH12L    (*(unsigned char volatile xdata *)0xfb69)	/* 触摸按键12门槛值低字节 */
#define TSTH13H    (*(unsigned char volatile xdata *)0xfb6a)	/* 触摸按键13门槛值高字节 */
#define TSTH13L    (*(unsigned char volatile xdata *)0xfb6b)	/* 触摸按键13门槛值低字节 */
#define TSTH14H    (*(unsigned char volatile xdata *)0xfb6c)	/* 触摸按键14门槛值高字节 */
#define TSTH14L    (*(unsigned char volatile xdata *)0xfb6d)	/* 触摸按键14门槛值低字节 */
#define TSTH15H    (*(unsigned char volatile xdata *)0xfb6e)	/* 触摸按键15门槛值高字节 */
#define TSTH15L    (*(unsigned char volatile xdata *)0xfb6f)	/* 触摸按键15门槛值低字节 */


//=============================================================================================================

#define	EAXSFR()		P_SW2 |=  0x80		/* MOVX A,@DPTR/MOVX @DPTR,A指令的操作对象为扩展SFR(XSFR) */
#define	EAXRAM()		P_SW2 &= ~0x80		/* MOVX A,@DPTR/MOVX @DPTR,A指令的操作对象为扩展RAM(XRAM) */

#define	I2C_USE_P15P14()	P_SW2 &= ~0x30						/* 将I2C切换到P1.5(SCL) P1.4(SDA)(上电默认).*/
#define	I2C_USE_P25P24()	P_SW2  = (P_SW2 & ~0x30) | 0x10		/* 将I2C切换到P2.5(SCL) P2.4(SDA).*/
#define	I2C_USE_P32P33()	P_SW2 |= 0x30						/* 将I2C切换到P3.2(SCL) P3.3(SDA).*/

#define	MainFosc_IRC24M()	CKSEL = (CKSEL & ~0x03)			/* 选择内部24MHZ时钟 */
#define	MainFosc_XTAL()		CKSEL = (CKSEL & ~0x03) | 0x01	/* 选择外部晶振或时钟 */
#define	EXT_CLOCK()			XOSCCR = 0x80					/* 选择外部时钟 */
#define	EXT_CRYSTAL()		XOSCCR = 0xC0					/* 选择外部晶振 */
#define	MainFosc_IRC32K()	CKSEL =  CKSEL | 0x03			/* 选择内部32K时钟 */
#define	MCLKO_None()		MCLKOCR = 0						/* 主时钟不输出 	    */
#define	MCLKO54_DIV(n)		MCLKOCR = n						/* 主时钟从P5.4分频输出 0~127 */
#define	MCLKO16_DIV(n)		MCLKOCR = n | 0x80				/* 主时钟从P1.6分频输出 0~127 */


/*  BIT Registers  */
/*  PSW   */
sbit CY   = PSW^7;
sbit AC   = PSW^6;
sbit F0   = PSW^5;
sbit RS1  = PSW^4;
sbit RS0  = PSW^3;
sbit OV   = PSW^2;
sbit F1   = PSW^1;
sbit P    = PSW^0;

/*  TCON  */
sbit TF1  = TCON^7;	//定时器1溢出中断标志位
sbit TR1  = TCON^6;	//定时器1运行控制位
sbit TF0  = TCON^5;	//定时器0溢出中断标志位
sbit TR0  = TCON^4;	//定时器0运行控制位
sbit IE1  = TCON^3;	//外中断1标志位
sbit IT1  = TCON^2;	//外中断1信号方式控制位，1：下降沿中断，0：上升下降均中断。
sbit IE0  = TCON^1;	//外中断0标志位
sbit IT0  = TCON^0;	//外中断0信号方式控制位，1：下降沿中断，0：上升下降均中断。

/*  P0  */
sbit  P00 = P0^0;
sbit  P01 = P0^1;
sbit  P02 = P0^2;
sbit  P03 = P0^3;
sbit  P04 = P0^4;
sbit  P05 = P0^5;
sbit  P06 = P0^6;
sbit  P07 = P0^7;

/*  P1  */
sbit  P10 = P1^0;
sbit  P11 = P1^1;
sbit  P12 = P1^2;
sbit  P13 = P1^3;
sbit  P14 = P1^4;
sbit  P15 = P1^5;
sbit  P16 = P1^6;
sbit  P17 = P1^7;

/*  P2  */
sbit  P20 = P2^0;
sbit  P21 = P2^1;
sbit  P22 = P2^2;
sbit  P23 = P2^3;
sbit  P24 = P2^4;
sbit  P25 = P2^5;
sbit  P26 = P2^6;
sbit  P27 = P2^7;

/*  P3  */
sbit  P30 = P3^0;
sbit  P31 = P3^1;
sbit  P32 = P3^2;
sbit  P33 = P3^3;
sbit  P34 = P3^4;
sbit  P35 = P3^5;
sbit  P36 = P3^6;
sbit  P37 = P3^7;

/*  P4  */
sbit  P40 = P4^0;
sbit  P41 = P4^1;
sbit  P42 = P4^2;
sbit  P43 = P4^3;
sbit  P44 = P4^4;
sbit  P45 = P4^5;
sbit  P46 = P4^6;
sbit  P47 = P4^7;

/*  P5  */
sbit  P50 = P5^0;
sbit  P51 = P5^1;
sbit  P52 = P5^2;
sbit  P53 = P5^3;
sbit  P54 = P5^4;
sbit  P55 = P5^5;
sbit  P56 = P5^6;
sbit  P57 = P5^7;

/*  P6  */
sbit  P60 = P6^0;
sbit  P61 = P6^1;
sbit  P62 = P6^2;
sbit  P63 = P6^3;
sbit  P64 = P6^4;
sbit  P65 = P6^5;
sbit  P66 = P6^6;
sbit  P67 = P6^7;

/*  P7  */
sbit  P70 = P7^0;
sbit  P71 = P7^1;
sbit  P72 = P7^2;
sbit  P73 = P7^3;
sbit  P74 = P7^4;
sbit  P75 = P7^5;
sbit  P76 = P7^6;
sbit  P77 = P7^7;

sbit  RXD2      = P1^0;
sbit  TXD2      = P1^1;
sbit  ECI       = P1^2;
sbit  CCP0      = P1^1;
sbit  CCP1      = P1^0;
sbit  CCP2      = P3^7;
sbit  ECI_2     = P3^4;
sbit  CCP0_2    = P3^5;
sbit  CCP1_2    = P3^6;
sbit  CCP2_2    = P3^7;

sbit  SPI_SS    = P1^2;
sbit  SPI_MOSI  = P1^3;
sbit  SPI_MISO  = P1^4;
sbit  SPI_SCLK  = P1^5;

sbit  SPI_SS_4    = P3^5;
sbit  SPI_MOSI_4  = P3^4;
sbit  SPI_MISO_4  = P3^3;
sbit  SPI_SCLK_4  = P3^2;

sbit RXD  = P3^0;
sbit TXD  = P3^1;
sbit INT0 = P3^2;
sbit INT1 = P3^3;
sbit T0   = P3^4;
sbit T1   = P3^5;

sbit INT2 = P3^6;
sbit INT3 = P3^7;
sbit INT4 = P3^0;

sbit T0CLKOUT   = P3^5;
sbit T1CLKOUT   = P3^4;


/*  SCON  */
sbit SM0  = SCON^7;	//SM0/FE		SM0 SM1 = 00 ~ 11: 方式0~3
sbit SM1  = SCON^6;	//
sbit SM2  = SCON^5;	//多机通讯
sbit REN  = SCON^4;	//接收允许
sbit TB8  = SCON^3;	//发送数据第8位
sbit RB8  = SCON^2;	//接收数据第8位
sbit TI   = SCON^1;	//发送中断标志位
sbit RI   = SCON^0;	//接收中断标志位

/*  IE   */
sbit EA   = IE^7;	//中断允许总控制位
sbit ELVD = IE^6;	//低压监测中断允许位
sbit EADC = IE^5;	//ADC 中断 允许位
sbit ES   = IE^4;	//串行中断 允许控制位
sbit ET1  = IE^3;	//定时中断1允许控制位
sbit EX1  = IE^2;	//外部中断1允许控制位
sbit ET0  = IE^1;	//定时中断0允许控制位
sbit EX0  = IE^0;	//外部中断0允许控制位

sbit ACC0 = ACC^0;
sbit ACC1 = ACC^1;
sbit ACC2 = ACC^2;
sbit ACC3 = ACC^3;
sbit ACC4 = ACC^4;
sbit ACC5 = ACC^5;
sbit ACC6 = ACC^6;
sbit ACC7 = ACC^7;

sbit B0 = B^0;
sbit B1 = B^1;
sbit B2 = B^2;
sbit B3 = B^3;
sbit B4 = B^4;
sbit B5 = B^5;
sbit B6 = B^6;
sbit B7 = B^7;

//                                     7    6    5    4    3     2       1       0      Reset Value
//INT_CLKO:  中断与时钟输出控制寄存器  -   EX4  EX3  EX2   -   T2CLKO  T1CLKO  T0CLKO    0000,0000
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
//AUXINTIF:  辅助中断标志寄存器  -  INT4IF  INT3IF  INT2IF   -   T4IF  T3IF  T2IF    0000,0000
#define	INT4IF	0x40
#define	INT3IF	0x20
#define	INT2IF	0x10
#define	T4IF	0x04
#define	T3IF	0x02
#define	T2IF	0x01

#define	INT4_Clear()	AUXINTIF &= ~INT4IF		/* 清除外中断4标志位 */
#define	INT3_Clear()	AUXINTIF &= ~INT3IF		/* 清除外中断3标志位 */
#define	INT2_Clear()	AUXINTIF &= ~INT2IF		/* 清除外中断2标志位 */
#define	INT1_Clear()	IE1 = 0					/* 清除外中断1标志位 */
#define	INT0_Clear()	IE0 = 0					/* 清除外中断0标志位 */

#define	INT0_Fall()		IT0 = 1		/* INT0 下降沿中断           */
#define	INT0_RiseFall()	IT0 = 0		/* INT0 下降沿上升沿均中断   */
#define	INT1_Fall()		IT1 = 1		/* INT1 下降沿中断           */
#define	INT1_RiseFall()	IT0 = 0		/* INT1 下降沿上升沿均中断   */


//							7     6     5    4    3    2    1     0    Reset Value
//sfr IE2       = 0xAF;		-     -     -    -    -    -   ESPI  ES2   0000,0000B	//Auxiliary Interrupt   
#define		SPI_INT_ENABLE()		IE2 |=  2	/* 允许SPI中断		*/
#define		SPI_INT_DISABLE()		IE2 &= ~2	/* 允许SPI中断		*/
#define		UART2_INT_ENABLE()		IE2 |=  1	/* 允许串口2中断	*/
#define		UART2_INT_DISABLE()		IE2 &= ~1	/* 允许串口2中断	*/

//                                          7     6     5    4    3    2    1    0    Reset Value
//sfr IP      = 0xB8; //中断优先级低位      PPCA  PLVD  PADC  PS   PT1  PX1  PT0  PX0   0000,0000
//--------
sbit PPCA	= IP^7;	//PCA 模块中断优先级
sbit PLVD	= IP^6;	//低压监测中断优先级
sbit PADC	= IP^5;	//ADC 中断优先级
sbit PS   	= IP^4;	//串行中断0优先级设定位
sbit PT1	= IP^3;	//定时中断1优先级设定位
sbit PX1	= IP^2;	//外部中断1优先级设定位
sbit PT0	= IP^1;	//定时中断0优先级设定位
sbit PX0	= IP^0;	//外部中断0优先级设定位

//                                           7      6      5     4     3     2    1     0        Reset Value
//sfr IPH   = 0xB7; //中断优先级高位       PPCAH  PLVDH  PADCH  PSH  PT1H  PX1H  PT0H  PX0H   0000,0000
//sfr IP2   = 0xB5; //                       -      -      -     -     -     -   PSPI   PS2   xxxx,xx00
//sfr IP2H  = 0xB6; //                       -      -      -     -     -     -   PSPIH  PS2H  xxxx,xx00
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
//sfr CMPCR1 = 0xE6;   CMPEN  CMPIF  PIE  NIE  PIS  NIS  CMPOE  CMPRES      00000000B
#define	CMPEN	0x80	//1: 允许比较器, 0: 禁止,关闭比较器电源
#define	CMPIF	0x40	//比较器中断标志, 包括上升沿或下降沿中断, 软件清0
#define	PIE		0x20	//1: 比较结果由0变1, 产生上升沿中断
#define	NIE		0x10	//1: 比较结果由1变0, 产生下降沿中断
#define	PIS		0x08	//输入正极性选择, 0: 选择内部P3.7做正输入,           1: 由ADC_CHS[3:0]所选择的ADC输入端做正输入.
#define	NIS		0x04	//输入负极性选择, 0: 选择内部BandGap电压BGv做负输入, 1: 选择外部P3.6做输入.
#define	CMPOE	0x02	//1: 允许比较结果输出, 0: 禁止.
#define	CMPRES	0x01	//比较结果, 1: CMP+电平高于CMP-,  0: CMP+电平低于CMP-,  只读

#define	CMP_P_P37	0x00	//输入正极性选择, 0: 选择内部P3.7做正输入
#define	CMP_P_ADC	0x08	//输入正极性选择, 1: 由ADC_CHS[3:0]所选择的ADC输入端做正输入.
#define	CMP_N_GAP	0x00	//输入负极性选择, 0: 选择内部BandGap电压BGv做负输入.
#define	CMP_N_P36	0x04	//输入负极性选择, 1: 选择外部P3.6做输入.

#define	CMPO_P34()	P_SW2 &= ~0x08	//结果输出到P3.4.
#define	CMPO_P41()	P_SW2 |=  0x08	//结果输出到P4.1.

//                       7        6       5  4  3  2  1  0    Reset Value
//sfr CMPCR2 = 0xE7;   INVCMPO  DISFLT       LCDTY[5:0]       00001001B
#define	INVCMPO	0x80	//1: 比较器输出IO取反,  0: 不取反
#define	DISFLT	0x40	//1: 关闭0.1uF滤波,   	0: 允许
#define	LCDTY	0x00	//0~63, 比较结果变化延时周期数



/*************************************************************************************************/
//                     7     6     5    4    3    2   1   0       Reset Value
//sfr SCON  = 0x98;   SM0   SM1   SM2  REN  TB8  RB8  TI  RI      00000000B		 //S1 Control

#define		S1_DoubleRate()		PCON  |=  0x80
#define		S1_SHIFT()			SCON  &=  0x3f

#define		S1_8bit()			SCON   =  (SCON & 0x3f) | 0x40
#define		S1_9bit()			SCON   =  (SCON & 0x3f) | 0xc0
#define		S1_RX_Enable()		SCON  |=  0x10
#define		S1_RX_Disable()		SCON  &= ~0x10
#define		TI1					TI					/* 判断TI1是否发送完成								 */
#define		RI1					RI					/* 判断RI1是否接收完成								 */
#define		SET_TI1()			TI = 1				/* 设置TI1(引起中断)								 */
#define		CLR_TI1()			TI = 0				/* 清除TI1											 */
#define		CLR_RI1()			RI = 0				/* 清除RI1											 */
#define		S1TB8_SET()			TB8 = 1				/* 设置TB8											 */
#define		S1TB8_CLR()			TB8 = 0				/* 清除TB8											 */
#define		S1_Int_Enable()		ES     =  1			/* 串口1允许中断									 */
#define		S1_Int_Disable()	ES     =  0			/* 串口1禁止中断									 */
#define 	S1_BRT_UseTimer1()	AUXR  &= ~1
#define 	S1_BRT_UseTimer2()	AUXR  |=  1
#define		S1_USE_P30P31()		P_SW1 &= ~0xc0						//UART1 使用P3.0 P3.1口	默认
#define		S1_USE_P36P37()		P_SW1  =  (P_SW1 & ~0xc0) | 0x40	//UART1 使用P3.6 P3.7口
#define		S1_USE_P16P17()		P_SW1  =  (P_SW1 & ~0xc0) | 0x80	//UART1 使用P1.6 P1.7口
#define		S1_USE_P43P44()		P_SW1  =  (P_SW1 & ~0xc0) | 0xc0	//UART1 使用P4.3 P4.4口
#define		S1_USE_P32P33()		P_SW1  =  (P_SW1 & ~0xc0) | 0x40	//UART1 使用P3.2 P3.3口	用于8脚MCU
#define		S1_USE_P54P55()		P_SW1  =  (P_SW1 & ~0xc0) | 0x80	//UART1 使用P5.4 P5.5口 用于8脚MCU

//						  7      6      5      4      3      2     1     0        Reset Value
//sfr S2CON = 0x9A;		S2SM0    -    S2SM2  S2REN  S2TB8  S2RB8  S2TI  S2RI      00000000B		 //S2 Control

#define		S2_MODE0()			S2CON &= ~(1<<7)	/* 串口2模式0，8位UART，波特率 = 定时器2的溢出率 / 4 */
#define		S2_MODE1()			S2CON |=  (1<<7)	/* 串口2模式1，9位UART，波特率 = 定时器2的溢出率 / 4 */
#define		S2_8bit()			S2CON &= ~(1<<7)	/* 串口2模式0，8位UART，波特率 = 定时器2的溢出率 / 4 */
#define		S2_9bit()			S2CON |=  (1<<7)	/* 串口2模式1，9位UART，波特率 = 定时器2的溢出率 / 4 */
#define		S2_RX_Enable()		S2CON |=  (1<<4)	/* 允许串2接收										 */
#define		S2_RX_Disable()		S2CON &= ~(1<<4)	/* 禁止串2接收										 */
#define		TI2					(S2CON & 2) 		/* 判断TI2是否发送完成								 */
#define		RI2					(S2CON & 1) 		/* 判断RI2是否接收完成								 */
#define		SET_TI2()			S2CON |=  (1<<1)	/* 设置TI2(引起中断)								 */
#define		CLR_TI2()			S2CON &= ~(1<<1)	/* 清除TI2											 */
#define		CLR_RI2()			S2CON &= ~1			/* 清除RI2											 */
#define		S2TB8_SET()			S2CON |=  (1<<3)	/* 设置TB8											 */
#define		S2TB8_CLR()			S2CON &= ~(1<<3)	/* 清除TB8											 */
#define		S2_Int_Enable()		IE2   |=  1			/* 串口2允许中断									 */
#define		S2_Int_Disable()	IE2   &= ~1			/* 串口2禁止中断									 */
#define		S2_USE_P10P11()		P_SW2 &= ~1			/* UART2 使用P1.0 P1.1口	默认					 */
#define		S2_USE_P46P47()		P_SW2 |=  1			/* UART2 使用P4.6 P4.7口							 */

//						  7      6      5      4      3      2     1     0        Reset Value
//sfr S3CON = 0xAC;		S3SM0  S3ST3  S3SM2  S3REN  S3TB8  S3RB8  S3TI  S3RI      00000000B		 //S3 Control

#define		S3_MODE0()			S3CON &= ~(1<<7)	/* 串口3模式0，8位UART，波特率 = 定时器的溢出率 / 4  */
#define		S3_MODE1()			S3CON |=  (1<<7)	/* 串口3模式1，9位UART，波特率 = 定时器的溢出率 / 4  */
#define		S3_8bit()			S3CON &= ~(1<<7)	/* 串口3模式0，8位UART，波特率 = 定时器的溢出率 / 4  */
#define		S3_9bit()			S3CON |=  (1<<7)	/* 串口3模式1，9位UART，波特率 = 定时器的溢出率 / 4  */
#define		S3_RX_Enable()		S3CON |=  (1<<4)	/* 允许串3接收									     */
#define		S3_RX_Disable()		S3CON &= ~(1<<4)	/* 禁止串3接收									     */
#define		TI3					(S3CON & 2) != 0	/* 判断TI3是否发送完成								 */
#define		RI3					(S3CON & 1) != 0	/* 判断RI3是否接收完成								 */
#define		SET_TI3()			S3CON |=  (1<<1)	/* 设置TI3(引起中断)								 */
#define		CLR_TI3()			S3CON &= ~(1<<1)	/* 清除TI3											 */
#define		CLR_RI3()			S3CON &= ~1			/* 清除RI3											 */
#define		S3TB8_SET()			S3CON |=  (1<<3)	/* 设置TB8											 */
#define		S3TB8_CLR()			S3CON &= ~(1<<3)	/* 清除TB8											 */
#define		S3_Int_Enable()		IE2   |=  (1<<3)	/* 串口3允许中断								     */
#define		S3_Int_Disable()	IE2   &= ~(1<<3)	/* 串口3禁止中断								     */
#define 	S3_BRT_UseTimer3()	S3CON |=  (1<<6)	/* BRT select Timer3								 */
#define 	S3_BRT_UseTimer2()	S3CON &= ~(1<<6)	/* BRT select Timer2								 */
#define		S3_USE_P00P01()		P_SW2 &= ~2			/* UART3 使用P0.0 P0.1口	默认				     */
#define		S3_USE_P50P51()		P_SW2 |=  2			/* UART3 使用P5.0 P5.1口						     */

//						  7      6      5      4      3      2     1     0        Reset Value
//sfr S4CON = 0x84;		S4SM0  S4ST4  S4SM2  S4REN  S4TB8  S4RB8  S4TI  S4RI      00000000B		 //S4 Control

#define		S4_MODE0()			S4CON &= ~(1<<7)	/* 串口4模式0，8位UART，波特率 = 定时器的溢出率 / 4  */
#define		S4_MODE1()			S4CON |=  (1<<7)	/* 串口4模式1，9位UART，波特率 = 定时器的溢出率 / 4  */
#define		S4_8bit()			S4CON &= ~(1<<7)	/* 串口4模式0，8位UART，波特率 = 定时器的溢出率 / 4  */
#define		S4_9bit()			S4CON |=  (1<<7)	/* 串口4模式1，9位UART，波特率 = 定时器的溢出率 / 4  */
#define		S4_RX_Enable()		S4CON |=  (1<<4)	/* 允许串4接收									     */
#define		S4_RX_Disable()		S4CON &= ~(1<<4)	/* 禁止串4接收									     */
#define		TI4					(S4CON & 2) != 0	/* 判断TI3是否发送完成							     */
#define		RI4					(S4CON & 1) != 0	/* 判断RI3是否接收完成							     */
#define		SET_TI4()			S4CON |=  2			/* 设置TI3(引起中断)							     */
#define		CLR_TI4()			S4CON &= ~2			/* 清除TI3										     */
#define		CLR_RI4()			S4CON &= ~1			/* 清除RI3										     */
#define		S4TB8_SET()			S4CON |=  8			/* 设置TB8										     */
#define		S4TB8_CLR()			S4CON &= ~8			/* 清除TB8										     */
#define		S4_Int_Enable()		IE2   |=  (1<<4)	/* 串口4允许中断								     */
#define		S4_Int_Disable()	IE2   &= ~(1<<4)	/* 串口4禁止中断								     */
#define 	S4_BRT_UseTimer4()	S4CON |=  (1<<6)	/* BRT select Timer4								 */
#define 	S4_BRT_UseTimer2()	S4CON &= ~(1<<6)	/* BRT select Timer2								 */
#define		S4_USE_P02P03()		P_SW2 &= ~4			/* UART4 使用P0.2 P0.3口	默认				     */
#define		S4_USE_P52P53()		P_SW2 |=  4			/* UART4 使用P5.2 P5.3口						     */


/**********************************************************/
//						   7     6       5      4     3      2      1      0    Reset Value
//sfr AUXR  = 0x8E;		T0x12 T1x12 UART_M0x6  T2R  T2_C/T T2x12 EXTRAM  S1ST2  0000,0000	//Auxiliary Register 

#define 	InternalXdata_Disable()		AUXR |=  2		/* 禁止使用内部xdata, 所有访问xdata都是访问外部xdata  */
#define 	InternalXdata_Enable()		AUXR &= ~2		/* 允许使用内部xdata, 当访问的地址在内部xdata范围时, 访问内部的xadta, 当地址超过内部xdata时, 访问外部xdata  */
#define		S1_M0x6()					AUXR |=  (1<<5)	/* UART Mode0 Speed is 6x Standard       */
#define		S1_M0x1()					AUXR &= ~(1<<5)	/* default,	UART Mode0 Speed is Standard */

//====================================
#define		Timer0_16bitAutoReload()	TMOD &= ~0x03					/* 16位自动重装	*/
#define		Timer0_16bit()				TMOD  = (TMOD & ~0x03) | 0x01	/* 16位         */
#define		Timer0_8bitAutoReload()		TMOD  = (TMOD & ~0x03) | 0x02	/* 8位自动重装	*/
#define		Timer0_16bitAutoRL_NoMask()	TMOD |=  0x03		/* 16位自动重装不可屏蔽中断	*/
#define 	Timer0_Run()	 			TR0 = 1				/* 允许定时器0计数			*/
#define 	Timer0_Stop()	 			TR0 = 0				/* 禁止定时器0计数			*/
#define		Timer0_Gate_INT0_P32()		TMOD |=  (1<<3)		/* 时器0由外部INT0高电平允许定时计数 */
#define		Timer0_AsTimer()			TMOD &= ~(1<<2)		/* 时器0用做定时器	*/
#define		Timer0_AsCounter()			TMOD |=  (1<<2)		/* 时器0用做计数器	*/
#define		Timer0_AsCounterP34()		TMOD |=  (1<<2)		/* 时器0用做计数器	*/
#define 	Timer0_1T()					AUXR |=  (1<<7)		/* Timer0 clodk = fo	*/
#define 	Timer0_12T()				AUXR &= ~(1<<7)		/* Timer0 clodk = fo/12	12分频,	default	*/
#define		Timer0_CLKO_Enable()		INT_CLKO |=  1			/* 允许 T0 溢出脉冲在T0(P3.5)脚输出，Fck0 = 1/2 T0 溢出率，T0可以1T或12T。	*/
#define		Timer0_CLKO_Disable()		INT_CLKO &= ~1
#define		Timer0_CLKO_Enable_P35()	INT_CLKO |=  1			/* 允许 T0 溢出脉冲在T0(P3.5)脚输出，Fck0 = 1/2 T0 溢出率，T0可以1T或12T。	*/
#define		Timer0_CLKO_Disable_P35()	INT_CLKO &= ~1
#define 	Timer0_InterruptEnable()	ET0 = 1				/* 允许Timer1中断.*/
#define 	Timer0_InterruptDisable()	ET0 = 0				/* 禁止Timer1中断.*/

#define		T0_Load(n)					TH0 = (n) / 256,	TL0 = (n) % 256
#define		T0_Load_us_1T(n)			Timer0_AsTimer(),Timer0_1T(), Timer0_16bitAutoReload(),TH0=(65536-((MAIN_Fosc/1000)*(n)+500)/1000)/256, TL0=(65536-((MAIN_Fosc/1000)*(n)+500)/1000)%256
#define		T0_Load_us_12T(n)			Timer0_AsTimer(),Timer0_12T(),Timer0_16bitAutoReload(),TH0=(65536-((MAIN_Fosc/12000)*(n)+500)/1000)/256,TL0=(65536-((MAIN_Fosc/12000)*(n)+500)/1000)%256
#define		T0_Frequency_1T_P35(n)		ET0=0,Timer0_AsTimer(),Timer0_1T(),Timer0_16bitAutoReload(),TH0=(65536-(n/2+MAIN_Fosc/2)/(n))/256,TL0=(65536-(n/2+MAIN_Fosc/2)/(n))%256,INT_CLKO |= 1,TR0=1		/* fx=fosc/(2*M)/n,  M=1 or M=12 */
#define		T0_Frequency_12T_P35(n)		ET0=0,Timer0_AsTimer(),Timer0_12T(),Timer0_16bitAutoReload(),TH0=(65536-(n/2+MAIN_Fosc/24)/(n))/256,TL0=(65536-(n/2+MAIN_Fosc/24)/(n))%256,INT_CLKO |= 1,TR0=1	/* fx=fosc/(2*M)/n,  M=1 or M=12 */

//====================================
#define		Timer1_16bitAutoReload()	TMOD &= ~0x30					/* 16位自动重装	*/
#define		Timer1_16bit()				TMOD  = (TMOD & ~0x30) | 0x10	/* 16位			*/
#define		Timer1_8bitAutoReload()		TMOD  = (TMOD & ~0x30) | 0x20	/* 8位自动重装	*/
#define 	Timer1_Run()	 			TR1 = 1				/* 允许定时器1计数			*/
#define 	Timer1_Stop()	 			TR1 = 0				/* 禁止定时器1计数			*/
#define		Timer1_Gate_INT1_P33()		TMOD |=  (1<<7)		/* 时器1由外部INT1高电平允许定时计数	*/
#define		Timer1_AsTimer()			TMOD &= ~(1<<6)		/* 时器1用做定时器			*/
#define		Timer1_AsCounter()			TMOD |=  (1<<6)		/* 时器1用做计数器			*/
#define		Timer1_AsCounterP35()		TMOD |=  (1<<6)		/* 时器1用做计数器			*/
#define 	Timer1_1T()					AUXR |=  (1<<6)		/* Timer1 clodk = fo		*/
#define 	Timer1_12T()				AUXR &= ~(1<<6)		/* Timer1 clodk = fo/12	12分频,	default	*/
#define		Timer1_CLKO_Enable()		INT_CLKO |=  2			/* 允许 T1 溢出脉冲在T1(P3.4)脚输出，Fck1 = 1/2 T1 溢出率，T1可以1T或12T。	*/
#define		Timer1_CLKO_Disable()		INT_CLKO &= ~2
#define		Timer1_CLKO_Enable_P34()	INT_CLKO |=  2			/* 允许 T1 溢出脉冲在T1(P3.4)脚输出，Fck1 = 1/2 T1 溢出率，T1可以1T或12T。	*/
#define		Timer1_CLKO_Disable_P34()	INT_CLKO &= ~2
#define 	Timer1_InterruptEnable()	ET1 = 1				/* 允许Timer1中断.	*/
#define 	Timer1_InterruptDisable()	ET1 = 0				/* 禁止Timer1中断.	*/

#define		T1_Load(n)					TH1 = (n) / 256,	TL1 = (n) % 256
#define		T1_Load_us_1T(n)			Timer1_AsTimer(),Timer1_1T(), Timer1_16bitAutoReload(),TH1=(65536-((MAIN_Fosc/1000)*(n)+500)/1000)/256, TL1=(65536-((MAIN_Fosc/1000)*(n)+500)/1000)%256
#define		T1_Load_us_12T(n)			Timer1_AsTimer(),Timer1_12T(),Timer1_16bitAutoReload(),TH1=(65536-((MAIN_Fosc/12000)*(n)+500)/1000)/256,TL1=(65536-((MAIN_Fosc/12000)*(n)+500)/1000)%256
#define		T1_Frequency_1T_P34(n)		ET1=0,Timer1_AsTimer(),Timer1_1T(),Timer1_16bitAutoReload(),TH1=(65536-(n/2+MAIN_Fosc/2)/(n))/256,TL1=(65536-(n/2+MAIN_Fosc/2)/(n))%256,INT_CLKO |= 2,TR1=1		/* fx=fosc/(2*M)/n,  M=1 or M=12 */
#define		T1_Frequency_12T_P34(n)		ET1=0,Timer1_AsTimer(),Timer1_12T(),Timer1_16bitAutoReload(),TH1=(65536-(n/2+MAIN_Fosc/24)/(n))/256,TL1=(65536-(n/2+MAIN_Fosc/24)/(n))%256,INT_CLKO |= 2,TR1=1	/* fx=fosc/(2*M)/n,  M=1 or M=12 */

//====================================
#define 	Timer2_Run()	 			AUXR |=  (1<<4)	/* 允许定时器2计数	*/
#define 	Timer2_Stop()	 			AUXR &= ~(1<<4)	/* 禁止定时器2计数	*/
#define		Timer2_AsTimer()			AUXR &= ~(1<<3)	/* 时器2用做定时器	*/
#define		Timer2_AsCounter()			AUXR |=  (1<<3)	/* 时器2用做计数器	*/
#define		Timer2_AsCounterP31()		AUXR |=  (1<<3)	/* 时器2用做计数器	*/
#define 	Timer2_1T()					AUXR |=  (1<<2)	/* Timer0 clock = fo	*/
#define 	Timer2_12T()				AUXR &= ~(1<<2)	/* Timer0 clock = fo/12	12分频,	default	*/
#define		Timer2_CLKO_Enable()		INT_CLKO |=  4		/* 允许 T2 溢出脉冲在P1.3脚输出，Fck2 = 1/2 T2 溢出率，T2可以1T或12T。	*/
#define		Timer2_CLKO_Disable()		INT_CLKO &= ~4
#define		Timer2_CLKO_Enable_P13()	INT_CLKO |=  4		/* 允许 T2 溢出脉冲在P1.3脚输出，Fck2 = 1/2 T2 溢出率，T2可以1T或12T。	*/
#define		Timer2_CLKO_Disable_P13()	INT_CLKO &= ~4
#define 	Timer2_InterruptEnable()	IE2  |=  (1<<2)	/* 允许Timer2中断.	*/
#define 	Timer2_InterruptDisable()	IE2  &= ~(1<<2)	/* 禁止Timer2中断.	*/

#define		T2_Load(n)					TH2 = (n) / 256,	TL2 = (n) % 256
#define		T2_Load_us_1T(n)			Timer2_AsTimer(),Timer2_1T(), TH2=(65536-((MAIN_Fosc/1000)*(n)+500)/1000)/256, TL2=(65536-((MAIN_Fosc/1000)*(n)+500)/1000)%256
#define		T2_Load_us_12T(n)			Timer2_AsTimer(),Timer2_12T(),TH2=(65536-((MAIN_Fosc/12000)*(n)+500)/1000)/256,TL2=(65536-((MAIN_Fosc/12000)*(n)+500)/1000)%256
#define		T2_Frequency_1T_P13(n)		Timer2_InterruptDisable(),Timer2_AsTimer(),Timer2_1T(), TH2=(65536-(n/2+MAIN_Fosc/2)/(n))/256, TL2=(65536-(n/2+MAIN_Fosc/2)/(n))%256, Timer2_CLKO_Enable_P13(),Timer2_Run()	/* fx=fosc/(2*M)/n,  M=1 or M=12 */
#define		T2_Frequency_12T_P13(n)		Timer2_InterruptDisable(),Timer2_AsTimer(),Timer2_12T(),TH2=(65536-(n/2+MAIN_Fosc/24)/(n))/256,TL2=(65536-(n/2+MAIN_Fosc/24)/(n))%256,Timer2_CLKO_Enable_P13(),Timer2_Run()	/* fx=fosc/(2*M)/n,  M=1 or M=12 */

//====================================================================================================================

//sfr WDT_CONTR = 0xC1; //Watch-Dog-Timer Control register
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
//sfr PCON   = 0x87;	SMOD  SMOD0  LVDF  POF   GF1    GF0   PD   IDL    0001,0000	 //Power Control 
//SMOD		//串口双倍速
//SMOD0
#define		LVDF		(1<<5)	/* P4.6低压检测标志 */
//POF
//GF1
//GF0
//#define 	D_PD		2		/* set 1, power down mode */
//#define 	D_IDLE		1		/* set 1, idle mode */
#define		MCU_IDLE()			PCON |= 1	/* MCU 进入 IDLE 模式 */
#define		MCU_POWER_DOWN()	PCON |= 2	/* MCU 进入 睡眠 模式 */


//sfr ISP_CMD   = 0xC5;
#define		ISP_STANDBY()	ISP_CMD = 0		/* ISP空闲命令（禁止）*/
#define		ISP_READ()		ISP_CMD = 1		/* ISP读出命令		*/
#define		ISP_WRITE()		ISP_CMD = 2		/* ISP写入命令		*/
#define		ISP_ERASE()		ISP_CMD = 3		/* ISP擦除命令		*/

//sfr ISP_TRIG  = 0xC6;
#define 	ISP_TRIG()	ISP_TRIG = 0x5A,	ISP_TRIG = 0xA5		/* ISP触发命令 */

//							  7    6    5      4    3    2    1     0    Reset Value
//sfr IAP_CONTR = 0xC7;		IAPEN SWBS SWRST CFAIL  -    -    -     -    0000,x000	//IAP Control Register
#define ISP_EN			(1<<7)
#define ISP_SWBS		(1<<6)
#define ISP_SWRST		(1<<5)
#define ISP_CMD_FAIL	(1<<4)


/* ADC Register */
//								7       6      5       4         3      2    1    0   Reset Value
//sfr ADC_CONTR = 0xBC;		ADC_POWER SPEED1 SPEED0 ADC_FLAG ADC_START CHS2 CHS1 CHS0 0000,0000	/* AD 转换控制寄存器 */ 
//sfr ADC_RES  = 0xBD;		ADCV.9 ADCV.8 ADCV.7 ADCV.6 ADCV.5 ADCV.4 ADCV.3 ADCV.2	  0000,0000	/* A/D 转换结果高8位 */ 
//sfr ADC_RESL = 0xBE;												  ADCV.1 ADCV.0	  0000,0000	/* A/D 转换结果低2位 */
//sfr ADC_CONTR  = 0xBC;	//直接用MOV操作，不要用与或


//sfr SPCTL  = 0xCE;	SPI控制寄存器
//   7       6       5       4       3       2       1       0    	Reset Value
//	SSIG	SPEN	DORD	MSTR	CPOL	CPHA	SPR1	SPR0		0x00

#define	SPI_SSIG_None()		SPCTL |=  (1<<7)		/* 1: 忽略SS脚	*/
#define	SPI_SSIG_Enable()	SPCTL &= ~(1<<7)		/* 0: SS脚用于决定主从机	*/
#define	SPI_Enable()		SPCTL |=  (1<<6)		/* 1: 允许SPI	*/
#define	SPI_Disable()		SPCTL &= ~(1<<6)		/* 0: 禁止SPI	*/
#define	SPI_LSB_First()		SPCTL |=  (1<<5)		/* 1: LSB先发	*/
#define	SPI_MSB_First()		SPCTL &= ~(1<<5)		/* 0: MSB先发	*/
#define	SPI_Master()		SPCTL |=  (1<<4)		/* 1: 设为主机	*/
#define	SPI_Slave()			SPCTL &= ~(1<<4)		/* 0: 设为从机	*/
#define	SPI_SCLK_NormalH()	SPCTL |=  (1<<3)		/* 1: 空闲时SCLK为高电平	*/
#define	SPI_SCLK_NormalL()	SPCTL &= ~(1<<3)		/* 0: 空闲时SCLK为低电平	*/
#define	SPI_PhaseH()		SPCTL |=  (1<<2)		/* 1: 	*/
#define	SPI_PhaseL()		SPCTL &= ~(1<<2)		/* 0: 	*/
#define	SPI_Speed(n)		SPCTL = (SPCTL & ~3) | (n)	/*设置速度, 0 -- fosc/4, 1 -- fosc/8, 2 -- fosc/16, 3 -- fosc/32	*/

//sfr SPDAT  = 0xCF; //SPI Data Register                                                     0000,0000
//sfr SPSTAT  = 0xCD;	//SPI状态寄存器
//   7       6      5   4   3   2   1   0    	Reset Value
//	SPIF	WCOL	-	-	-	-	-	-
#define	SPIF	0x80		/* SPI传输完成标志。写入1清0。*/
#define	WCOL	0x40		/* SPI写冲突标志。写入1清0。  */

#define		SPI_USE_P12P13P14P15()	P_SW1 &= ~0x0c					/* 将SPI切换到P12(SS) P13(MOSI) P14(MISO) P15(SCLK)(上电默认)。*/
#define		SPI_USE_P22P23P24P25()	P_SW1 = (P_SW1 & ~0x0c) | 0x04	/* 将SPI切换到P22(SS) P23(MOSI) P24(MISO) P25(SCLK)。*/
#define		SPI_USE_P35P34P33P32()	P_SW1 =  P_SW1 | 0x0C			/* 将SPI切换到P35(SS) P34(MOSI) P33(MISO) P32(SCLK)。*/


/*
;PCA_PWMn:    7       6     5   4   3   2     1       0
;			EBSn_1	EBSn_0	-	-	-	-	EPCnH	EPCnL
;B5-B2:		保留
;B1(EPCnH):	在PWM模式下，与CCAPnH组成9位数。
;B0(EPCnL):	在PWM模式下，与CCAPnL组成9位数。
*/
#define		PWM0_NORMAL()	PCA_PWM0 &= ~2									/* PWM0正常输出(默认)	*/
#define		PWM0_OUT_0()	PCA_PWM0 |= 0x3f, CCAP0H = 0xff, CCAP0L = 0xff	/* PWM0一直输出0		*/
#define		PWM0_OUT_1()	PCA_PWM0 &= 0xc0, CCAP0H = 0,    CCAP0L = 0		/* PWM0一直输出1		*/

#define		PWM1_NORMAL()	PCA_PWM1 &= ~2									/* PWM1正常输出(默认)	*/
#define		PWM1_OUT_0()	PCA_PWM1 |= 0x3f, CCAP1H = 0xff, CCAP1L = 0xff	/* PWM1一直输出0		*/
#define		PWM1_OUT_1()	PCA_PWM1 &= 0xc0, CCAP1H = 0,    CCAP1L = 0		/* PWM1一直输出1		*/

#define		PWM2_NORMAL()	PCA_PWM2 &= ~2									/* PWM2正常输出(默认)	*/
#define		PWM2_OUT_0()	PCA_PWM2 |= 0x3f, CCAP2H = 0xff, CCAP2L = 0xff	/* PWM2一直输出0		*/
#define		PWM2_OUT_1()	PCA_PWM2 &= 0xc0, CCAP2H = 0,    CCAP2L = 0		/* PWM2一直输出1		*/

//						7     6     5     4     3     2     1     0     Reset Value
//sfr CCON   = 0xD8;	CF    CR    -     -    CCF3  CCF2  CCF1  CCF0   00xx,xx00	//PCA 控制寄存器。
sbit CCF0  = CCON^0;	/* PCA 模块0中断标志，由硬件置位，必须由软件清0。	*/
sbit CCF1  = CCON^1;	/* PCA 模块1中断标志，由硬件置位，必须由软件清0。	*/
sbit CCF2  = CCON^2;	/* PCA 模块2中断标志，由硬件置位，必须由软件清0。	*/
sbit CR    = CCON^6;	/* 1: 允许PCA计数器计数，必须由软件清0。*/
sbit CF    = CCON^7;	/* PCA计数器溢出（CH，CL由FFFFH变为0000H）标志。PCA计数器溢出后由硬件置位，必须由软件清0。*/

//					 7     6     5     4     3     2     1     0    Reset Value
//sfr CMOD  = 0xD9;	CIDL   -     -     -   CPS2   CPS1  CPS0  ECF   0xxx,0000	//PCA 工作模式寄存器。
#define PCA_IDLE_OFF()		CMOD |=  (1<<7)				/* IDLE状态PCA停止计数。	*/
#define PCA_IDLE_ON()		CMOD &= ~(1<<7)				/* IDLE状态PCA继续计数。	*/
#define PCA_CLK_12T()		CMOD &= ~0x0E				/* PCA计数脉冲选择 fosc/12	*/
#define PCA_CLK_2T()		CMOD = (CMOD & ~0x0E) + 2	/* PCA计数脉冲选择 fosc/2	*/
#define PCA_CLK_T0()		CMOD = (CMOD & ~0x0E) + 4	/* PCA计数脉冲选择Timer0中断，Timer0可通过AUXR寄存器设置成工作在12T或1T模式。	*/
#define PCA_CLK_ECI()		CMOD = (CMOD & ~0x0E) + 6	/* PCA计数脉冲选择从ECI/P3.4脚输入的外部时钟，最大 fosc/2。	*/
#define PCA_CLK_1T()		CMOD = (CMOD & ~0x0E) + 8	/* PCA计数脉冲选择 Fosc	*/
#define PCA_CLK_4T()		CMOD = (CMOD & ~0x0E) + 10	/* PCA计数脉冲选择 Fosc/4	*/
#define PCA_CLK_6T()		CMOD = (CMOD & ~0x0E) + 12	/* PCA计数脉冲选择 Fosc/6	*/
#define PCA_CLK_8T()		CMOD = (CMOD & ~0x0E) + 14	/* PCA计数脉冲选择 Fosc/8	*/
#define PCA_INT_ENABLE()	CMOD |=  1					/* PCA计数器溢出中断允许位，1---允许CF（CCON.7）产生中断。	*/
#define PCA_INT_DISABLE()	CMOD &= ~1					/* PCA计数器溢出中断禁止。	*/

//					    7      6       5        4       3       2       1      0    Reset Value
//sfr P_SW1 = 0xA2;	  S1_S1  S1_S0  CCP_S1   CCP_S0  SPI_S1   SPI_S0    -     DPS   0100,0000	//Auxiliary Register 1

#define		PCA_USE_P12P11P10P37()	P_SW1 &= ~0x30					/* 将PCA/PWM切换到P12(ECI) P11(CCP0) P10(CCP1) P37(CCP2)(上电默认) */
#define		PCA_USE_P34P35P36P37()	P_SW1 = (P_SW1 & ~0x30) | 0x10	/* 将PCA/PWM切换到P34(ECI) P35(CCP0) P36(CCP1) P37(CCP2) */
#define		PCA_USE_P24P25P26P27()	P_SW1 = (P_SW1 & ~0x30) | 0x20	/* 将PCA/PWM切换到P24(ECI) P25(CCP0) P26(CCP1) P27(CCP2) */

/*									7     6       5       4     3     2     1     0     Reset Value
//sfr CCAPM0 = 0xDA;	PWM 寄存器  -   ECOM0  CCAPP0  CCAPN0  MAT0  TOG0  PWM0  ECCF0   x000,0000	//PCA 模块0
//sfr CCAPM1 = 0xDB;	PWM 寄存器  -   ECOM1  CCAPP1  CCAPN1  MAT1  TOG1  PWM1  ECCF1   x000,0000	//PCA 模块1
//sfr CCAPM2 = 0xDC;	PWM 寄存器  -   ECOM2  CCAPP2  CCAPN2  MAT2  TOG2  PWM2  ECCF2   x000,0000	//PCA 模块2
//sfr CCAPM3 = 0xDD;	PWM 寄存器  -   ECOM3  CCAPP3  CCAPN3  MAT3  TOG3  PWM3  ECCF3   x000,0000	//PCA 模块3
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
#define		PCA0_PWM(nbit)			CCAPM0 = 0x42,PCA_PWM0 = (PCA_PWM0 & 0x3f) | (nbit<<6)	/* 无中断PWM模式(PWM长度) */
#define		PCA0_PWM_rise_int(nbit) CCAPM0 = 0x63,PCA_PWM0 = (PCA_PWM0 & 0x3f) | (nbit<<6)	/* 上升沿中断PWM模式(PWM长度) */
#define		PCA0_PWM_fall_int(nbit) CCAPM0 = 0x53,PCA_PWM0 = (PCA_PWM0 & 0x3f) | (nbit<<6)	/* 下降沿中断PWM模式(PWM长度) */
#define		PCA0_PWM_edge_int(nbit) CCAPM0 = 0x73,PCA_PWM0 = (PCA_PWM0 & 0x3f) | (nbit<<6)	/* 上升下降沿中断PWM模式(PWM长度) */
#define		PCA0_capture_rise()		CCAPM0 = (0x20 + 1)		/* 上升沿捕获模式 */
#define		PCA0_capture_fall()		CCAPM0 = (0x10 + 1)		/* 下降沿捕获模式 */
#define		PCA0_capture_edge()		CCAPM0 = (0x30 + 1)		/* 上升下降沿捕获模式 */
#define		PCA0_16bit_Timer()		CCAPM0 = (0x48 + 1)		/* 16位软件定时器模式 */
#define		PCA0_High_PulseEnable()	CCAPM0 |= 0x04			/* 16位软件定时器 高速输出脉冲模式 */

#define		PCA1_none()				CCAPM1 = 0		/* PCA无功能 */
#define		PCA1_PWM(nbit)			CCAPM1 = 0x42,PCA_PWM1 = (PCA_PWM1 & 0x3f) | (nbit<<6)	/* 无中断PWM模式(PWM长度) */
#define		PCA1_PWM_rise_int(nbit) CCAPM1 = 0x63,PCA_PWM1 = (PCA_PWM1 & 0x3f) | (nbit<<6)	/* 上升沿中断PWM模式(PWM长度) */
#define		PCA1_PWM_fall_int(nbit) CCAPM1 = 0x53,PCA_PWM1 = (PCA_PWM1 & 0x3f) | (nbit<<6)	/* 下降沿中断PWM模式(PWM长度) */
#define		PCA1_PWM_edge_int(nbit) CCAPM1 = 0x73,PCA_PWM1 = (PCA_PWM1 & 0x3f) | (nbit<<6)	/* 上升下降沿中断PWM模式(PWM长度) */
#define		PCA1_capture_rise()		CCAPM1 = (0x20 + 1)		/* 上升沿捕获模式 */
#define		PCA1_capture_fall()		CCAPM1 = (0x10 + 1)		/* 下降沿捕获模式 */
#define		PCA1_capture_edge()		CCAPM1 = (0x30 + 1)		/* 上升下降沿捕获模式 */
#define		PCA1_16bit_Timer()		CCAPM1 = (0x48 + 1)		/* 16位软件定时器模式 */
#define		PCA1_High_PulseEnable()	CCAPM1 |= 0x04			/* 16位软件定时器 高速输出脉冲模式 */

#define		PCA2_none()				CCAPM2 = 0		/* PCA无功能 */
#define		PCA2_PWM(nbit)			CCAPM2 = 0x42,PCA_PWM2 = (PCA_PWM2 & 0x3f) | (nbit<<6)	/* 无中断PWM模式(PWM长度) */
#define		PCA2_PWM_rise_int(nbit) CCAPM2 = 0x63,PCA_PWM2 = (PCA_PWM2 & 0x3f) | (nbit<<6)	/* 上升沿中断PWM模式(PWM长度) */
#define		PCA2_PWM_fall_int(nbit) CCAPM2 = 0x53,PCA_PWM2 = (PCA_PWM2 & 0x3f) | (nbit<<6)	/* 下降沿中断PWM模式(PWM长度) */
#define		PCA2_PWM_edge_int(nbit) CCAPM2 = 0x73,PCA_PWM2 = (PCA_PWM2 & 0x3f) | (nbit<<6)	/* 上升下降沿中断PWM模式(PWM长度) */
#define		PCA2_capture_rise()		CCAPM2 = (0x20 + 1)		/* 上升沿捕获模式 */
#define		PCA2_capture_fall()		CCAPM2 = (0x10 + 1)		/* 下降沿捕获模式 */
#define		PCA2_capture_edge()		CCAPM2 = (0x30 + 1)		/* 上升下降沿捕获模式 */
#define		PCA2_16bit_Timer()		CCAPM2 = (0x48 + 1)		/* 16位软件定时器模式 */
#define		PCA2_High_PulseEnable()	CCAPM2 |= 0x04			/* 16位软件定时器 高速输出脉冲模式 */

#define	PCA0			0
#define	PCA1			1
#define	PCA2			2
#define	PCA_Counter		4

/**********************************************************/
typedef 	unsigned char	u8;
typedef 	unsigned int	u16;
typedef 	unsigned long	u32;

/**********************************************************/
#define NOP1()  _nop_()
#define NOP2()  NOP1(),NOP1()
#define NOP3()  NOP2(),NOP1()
#define NOP4()  NOP3(),NOP1()
#define NOP5()  NOP4(),NOP1()
#define NOP6()  NOP5(),NOP1()
#define NOP7()  NOP6(),NOP1()
#define NOP8()  NOP7(),NOP1()
#define NOP9()  NOP8(),NOP1()
#define NOP10() NOP9(),NOP1()
#define NOP11() NOP10(),NOP1()
#define NOP12() NOP11(),NOP1()
#define NOP13() NOP12(),NOP1()
#define NOP14() NOP13(),NOP1()
#define NOP15() NOP14(),NOP1()
#define NOP16() NOP15(),NOP1()
#define NOP17() NOP16(),NOP1()
#define NOP18() NOP17(),NOP1()
#define NOP19() NOP18(),NOP1()
#define NOP20() NOP19(),NOP1()
#define NOP21() NOP20(),NOP1()
#define NOP22() NOP21(),NOP1()
#define NOP23() NOP22(),NOP1()
#define NOP24() NOP23(),NOP1()
#define NOP25() NOP24(),NOP1()
#define NOP26() NOP25(),NOP1()
#define NOP27() NOP26(),NOP1()
#define NOP28() NOP27(),NOP1()
#define NOP29() NOP28(),NOP1()
#define NOP30() NOP29(),NOP1()
#define NOP31() NOP30(),NOP1()
#define NOP32() NOP31(),NOP1()
#define NOP33() NOP32(),NOP1()
#define NOP34() NOP33(),NOP1()
#define NOP35() NOP34(),NOP1()
#define NOP36() NOP35(),NOP1()
#define NOP37() NOP36(),NOP1()
#define NOP38() NOP37(),NOP1()
#define NOP39() NOP38(),NOP1()
#define NOP40() NOP39(),NOP1()
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


//sfr INT_CLKO = 0x8F;
/*
    7   6    5    4   3     2        1       0         Reset Value
    -  EX4  EX3  EX2  -   T2CLKO   T1CLKO  T0CLKO      0000,0000B
b6 -  EX4      : 外中断INT4允许
b5 -  EX3      : 外中断INT3允许
b4 -  EX2      : 外中断INT2允许
b2 - T1CLKO    : 允许 T2 溢出脉冲在P3.0脚输出，Fck1 = 1/2 T1 溢出率
b1 - T1CLKO    : 允许 T1 溢出脉冲在P3.4脚输出，Fck1 = 1/2 T1 溢出率
b0 - T0CLKO    : 允许 T0 溢出脉冲在P3.5脚输出，Fck0 = 1/2 T0 溢出率
*/

#define		LVD_InterruptEnable()		ELVD = 1
#define		LVD_InterruptDisable()		ELVD = 0


//sfr WKTCL = 0xAA;	//STC11F\10和STC15系列 唤醒定时器低字节
//sfr WKTCH = 0xAB;	//STC11F\10和STC15系列 唤醒定时器高字节
//	B7		B6	B5	B4	B3	B2	B1	B0		B7	B6	B5	B4	B3	B2	B1	B0
//	WKTEN				S11	S10	S9	S8		S7	S6	S5	S4	S3	S2	S1	S0	n * 560us
#define		WakeTimerDisable()		WKTCH &= 0x7f	/* WKTEN = 0		禁止睡眠唤醒定时器 */
#define		WakeTimerSet(scale)		WKTCL = (scale) % 256,WKTCH = (scale) / 256 | 0x80	/* WKTEN = 1	允许睡眠唤醒定时器 */


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
#define		PWM0_VECTOR		22	/* PWM0 P0.0~P0.7中断 */
#define		PWMFD_VECTOR	23
#define		I2C_VECTOR		24
#define		USB_VECTOR		25
#define		HPWM1_VECTOR	26	/* 高级PWM1 */
#define		HPWM2_VECTOR	27	/* 高级PWM2 */
#define		PWM1_VECTOR		28	/* PWM1 P1.0~P1.7中断 */
#define		PWM2_VECTOR		29	/* PWM2 P2.0~P2.7中断 */
#define		PWM3_VECTOR		30	/* PWM3 P3.0~P3.7中断 */
#define		PWM4_VECTOR		31	/* PWM4 P4.0~P4.7中断 */
#define		PWM5_VECTOR		32	/* PWM5 P5.0~P5.4中断 */
#define		PWM2FD_VECTOR	33	/* PWM2异常中断 */
#define		PWM4FD_VECTOR	34	/* PWM4异常中断 */
#define		TKSU_VECTOR		35	/* 触摸按键中断 */
#define		RTC_VECTOR		36	/* RTC中断 */
#define		P0INT_VECTOR	37	/* P0.0~P0.7中断 */
#define		P1INT_VECTOR	38	/* P1.0~P1.7中断 */
#define		P2INT_VECTOR	39	/* P2.0~P2.7中断 */
#define		P3INT_VECTOR	40	/* P3.0~P3.7中断 */
#define		P4INT_VECTOR	41	/* P4.0~P4.7中断 */
#define		P5INT_VECTOR	42	/* P5.0~P5.4中断 */
#define		P6INT_VECTOR	43	/* P6.0~P6.7中断 */
#define		P7INT_VECTOR	44	/* P7.0~P7.7中断 */
#define		P8INT_VECTOR	45	/* P8.0~P8.7中断 */
#define		P9INT_VECTOR	46	/* P9.0~P9.7中断 */

//=============================================================

#define	TRUE	1
#define	FALSE	0

#define	PolityLow			0	//低优先级中断
#define	PolityHigh			1	//高优先级中断

#define		ENABLE		1
#define		DISABLE		0

#endif
