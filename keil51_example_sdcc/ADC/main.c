
/*------------------------------------------------------------------*/
/* --- STC MCU International Limited -------------------------------*/
/* --- STC 1T Series MCU RC Demo -----------------------------------*/
/* --- Mobile: (86)13922805190 -------------------------------------*/
/* --- Fax: 86-0513-55012956,55012947,55012969 ---------------------*/
/* --- Tel: 86-0513-55012928,55012929,55012966 ---------------------*/
/* --- Web: www.GXWMCU.com -----------------------------------------*/
/* --- QQ:  800003751 ----------------------------------------------*/
/* If you want to use the program or the program referenced in the  */
/* article, please specify in which data and procedures from STC    */
/*------------------------------------------------------------------*/

#define MAIN_Fosc		11059200L	//定义主时钟 // Clock

#define	UART_BaudRate1	115200UL	 /* 波特率 */


#include	"../STC8Gxxx.h"


/*************	功能说明	**************

用户请先别修改程序, 直接下载"01-15路ADC转换-BandGap-串口1(P3.1)返回结果-C语言"里的"ADC.hex"测试. 下载时选择主频11.0592MHZ。

测试时, 电脑的串口助手设置115200,8,n,1.

本程序演示16路ADC(P1.0~P1.7, P0.0~P0.6)和bandgap查询采样，通过串口1(P3.1)发送给上位机，波特率115200,8,n,1.

0~7通道对应P1.0~P1.7, 8~14通道对应P0.0~P0.6, 15通道为内部1.19V基准电压做输入的ADC值.

初始化时先把要ADC转换的引脚设置为高阻输入.

ADC模块是一个硬件模块, 由ADC时钟驱动, 一旦触发ADC转换, 硬件会在ADC时钟驱动下自动完成.
CLK为ADC时钟, 是系统时钟的SysClk/2/(n+1)分频, ADC转换由下列操作完成:
通道选择时间     1或2个CLK (默认1)
通道选择保持时间 1~4个CLK (默认2)
模拟信号采样时间 1~32个CLK (默认11)
ADC转换时间      10个CLK(固定).


******************************************/



/*************	本地常量声明	**************/

#define	ADC_CHN		3	/* 定义ADC通道, 0~14  - Analog to Digital Converter*/


/*************	本地变量声明	**************/

__bit B_TX1_Busy;	// 发送忙标志 // Flag

/*************	本地函数声明	**************/
u16		Get_ADC10bitResult(u8 channel);
void	delay_ms(u8 ms);
void	UART1_config(void);
void 	Uart1_TxByte(u8 dat);
void 	PrintString1(u8 *puts);
void	ADC_config(void);
void	ADC_convert(u8 chn);	//chn=0~7对应P1.0~P1.7, chn=8~14对应P3.0~P3.6, chn=15对应BandGap电压


/**********************************************/
void main(void)
{

	UART1_config();	//初始化串口 // UART/Serial
	ADC_config();	//初始化ADC // Analog to Digital Converter
	delay_ms(10);
	EA = 1;
	B_TX1_Busy  = 0;

	while (1)
	{

		delay_ms(200);
		ADC_convert(3);
		Uart1_TxByte(0x0d);
		Uart1_TxByte(0x0a);
	}
}


//========================================================================
// 函数: void	ADC_config(void) // Analog to Digital Converter
// 描述: ADC配置函数. // Configuration // Analog to Digital Converter
// 参数: None
// 返回: none.
// 版本: V1.0, 2021-12-23
//========================================================================
#define ADC_START	(1<<6)	/* 自动清0 */
#define ADC_FLAG	(1<<5)	/* 软件清0 */

#define	ADC_SPEED	1		/* 0~15, ADC时钟 = SYSclk/2/(n+1)  - Clock - Analog to Digital Converter*/
#define	RES_FMT		(1<<5)	/* ADC结果格式 0: 左对齐, ADC_RES: D9 D8 D7 D6 D5 D4 D3 D2, ADC_RESL: D1 D0 0  0  0  0  0  0  - Analog to Digital Converter*/
							/*             1: 右对齐, ADC_RES: 0  0  0  0  0  0  D9 D8, ADC_RESL: D7 D6 D5 D4 D3 D2 D1 D0  - Analog to Digital Converter*/

#define CSSETUP		(0<<7)	/* 0~1,  ADC通道选择时间      0: 1个ADC时钟, 1: 2个ADC时钟,  默认0(默认1个ADC时钟)  - Clock - Analog to Digital Converter*/
#define CSHOLD		(1<<5)	/* 0~3,  ADC通道选择保持时间  (n+1)个ADC时钟, 默认1(默认2个ADC时钟)                 - Clock - Analog to Digital Converter*/
#define SMPDUTY		20		/* 10~31, ADC模拟信号采样时间  (n+1)个ADC时钟, 默认10(默认11个ADC时钟)				 - Clock - Analog to Digital Converter*/
							/* ADC转换时间: 10位ADC固定为10个ADC时钟, 12位ADC固定为12个ADC时钟. 				 - Clock - Analog to Digital Converter*/

void	ADC_config(void)
{
	#if (ADC_CHN <= 7)
		P1n_pure_input((1<<ADC_CHN));	//设置要做ADC的IO做高阻输入 // Analog to Digital Converter // Analog to Digital Converter
	#elif (ADC_CHN <= 14)
		P0n_pure_input((1<<(ADC_CHN-8)));	//设置要做ADC的IO做高阻输入 // Analog to Digital Converter // Analog to Digital Converter
	#endif
	P_SW2 |=  0x80;	//访问XSFR
	ADC_CONTR = 0x80 + ADC_CHN;	//ADC on + channel // Analog to Digital Converter
	ADCCFG = RES_FMT + ADC_SPEED;
	ADCTIM = CSSETUP + CSHOLD + SMPDUTY;
}

//========================================================================
// 函数: u16	Get_ADC10bitResult(u8 channel))	//channel = 0~15 // Analog to Digital Converter
// 描述: 查询法读一次ADC结果. // Analog to Digital Converter
// 参数: channel: 选择要转换的ADC, 0~15. // Analog to Digital Converter
// 返回: 10位ADC结果. // Analog to Digital Converter
// 版本: V1.0, 2018-11-28
//========================================================================
u16	Get_ADC10bitResult(u8 channel)	//channel = 0~15
{
	ADC_RES = 0;
	ADC_RESL = 0;
	ADC_CONTR = 0x80 | ADC_START | channel;
	NOP(5);			//
	while((ADC_CONTR & ADC_FLAG) == 0)	;	//等待ADC结束 // Analog to Digital Converter
	ADC_CONTR &= ~ADC_FLAG;
	return	((u16)ADC_RES * 256 + (u16)ADC_RESL);
}

#define		SUM_LENGTH	16	/* 平均值采样次数 最大值64 */

/***********************************
查询方式做一次ADC, chn为通道号, chn=0~7对应P1.0~P1.7, chn=8~14对应P3.0~P3.6, chn=15对应BandGap电压.
***********************************/
void	ADC_convert(u8 chn)
{
	u16	j;
	u8	k;		//平均值滤波时使用

	for(k=0, j=0; k<SUM_LENGTH; k++)	j += Get_ADC10bitResult(chn);	// 采样累加和   参数0~15,查询方式做一次ADC, 返回值就是结果 // Analog to Digital Converter
	j = j / SUM_LENGTH;		// 求平均

	Uart1_TxByte('A');
	Uart1_TxByte('D');
	Uart1_TxByte('C');
	Uart1_TxByte(chn/10+'0');
	Uart1_TxByte(chn%10+'0');

	Uart1_TxByte('=');				//发送ADC读数 // Analog to Digital Converter
	Uart1_TxByte(j/1000 + '0');
	Uart1_TxByte(j%1000/100 + '0');
	Uart1_TxByte(j%100/10 + '0');
	Uart1_TxByte(j%10 + '0');
	Uart1_TxByte(' ');
	Uart1_TxByte(' ');
}



//========================================================================
// 函数: void  delay_ms(u8 ms)
// 描述: 延时函数。
// 参数: ms,要延时的ms数, 这里只支持1~255ms. 自动适应主时钟. // Clock
// 返回: none.
// 版本: VER1.0
// 日期: 2013-4-1
// 备注:
//========================================================================
void  delay_ms(u8 ms)
{
     u16 i;
	 do
	 {
	 	i = MAIN_Fosc / 10000;
		while(--i)	;
     }while(--ms);
}


//========================================================================
// 函数: void	UART1_config(u8 brt)
// 描述: UART1初始化函数。
// 参数: brt: 选择波特率, 2: 使用Timer2做波特率, 其它值: 使用Timer1做波特率.
// 返回: none.
// 版本: VER1.0
// 日期: 2016-4-28
// 备注:
//========================================================================
void	UART1_config(void)	//
{
	TR1 = 0;
	AUXR &= ~0x01;		//S1 BRT Use Timer1;
	AUXR |=  (1<<6);	//Timer1 set as 1T mode
	TMOD &= ~(1<<6);	//Timer1 set As Timer
	TMOD &= ~0x30;		//Timer1_16bitAutoReload;
	TH1 = (65536UL - (MAIN_Fosc / 4) / UART_BaudRate1) / 256;
	TL1 = (65536UL - (MAIN_Fosc / 4) / UART_BaudRate1) % 256;
	ET1 = 0;	//禁止中断 // Interrupt // Disable
	TR1  = 1;

	SCON = (SCON & 0x3f) | (1<<6);	// 8位数据, 1位起始位, 1位停止位, 无校验 // Data
	REN = 1;	//允许接收
//	PS  = 1;	//高优先级中断 // Interrupt
	ES  = 1;	//允许中断 // Interrupt
	P_SW1 = P_SW1 & 0x3f;				P3n_standard(0x03);	//头文件定义的宏, 切换到 P3.0 P3.1
//	P_SW1 = (P_SW1 & 0x3f) | (1<<6);	P3n_standard(0xc0);	//头文件定义的宏, 切换到 P3.6 P3.7
//	P_SW1 = (P_SW1 & 0x3f) | (2<<6);	P1n_standard(0xc0);	//头文件定义的宏, 切换到 P1.6 P1.7 (必须使用内部时钟) // Clock

	B_TX1_Busy  = 0;
}


//========================================================================
// 函数: void Uart1_TxByte(u8 dat)
// 描述: 串口1发送一个字节函数. // UART/Serial
// 参数: none.
// 返回: none.
// 版本: VER1.0
// 日期: 2016-4-28
// 备注:
//========================================================================
void Uart1_TxByte(u8 dat)
{
	B_TX1_Busy = 1;		//标志发送忙 // Flag
	SBUF = dat;			//发一个字节
	while(B_TX1_Busy);	//等待发送完成
}


//========================================================================
// 函数: void UART1_int (void) __interrupt(UART1_VECTOR)
// 描述: 串口1中断函数 // UART/Serial // Interrupt
// 参数: none.
// 返回: none.
// 版本: VER1.0
// 日期: 2016-4-28
// 备注:
//========================================================================
void UART1_int (void) __interrupt(UART1_VECTOR)
{
	if(RI)
	{
		RI = 0;
	}

	if(TI)
	{
		TI = 0;
		B_TX1_Busy = 0;
	}
}
