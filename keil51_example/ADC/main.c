
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

#define MAIN_Fosc		11059200L	//������ʱ��

#define	UART_BaudRate1	115200UL	 /* ������ */


#include	"..\STC8Gxxx.h"


/*************	����˵��	**************

�û����ȱ��޸ĳ���, ֱ������"01-15·ADCת��-BandGap-����1(P3.1)���ؽ��-C����"���"ADC.hex"����. ����ʱѡ����Ƶ11.0592MHZ��

����ʱ, ���ԵĴ�����������115200,8,n,1.

��������ʾ16·ADC(P1.0~P1.7, P0.0~P0.6)��bandgap��ѯ������ͨ������1(P3.1)���͸���λ����������115200,8,n,1.

0~7ͨ����ӦP1.0~P1.7, 8~14ͨ����ӦP0.0~P0.6, 15ͨ��Ϊ�ڲ�1.19V��׼��ѹ�������ADCֵ.

��ʼ��ʱ�Ȱ�ҪADCת������������Ϊ��������.

ADCģ����һ��Ӳ��ģ��, ��ADCʱ������, һ������ADCת��, Ӳ������ADCʱ���������Զ����.
CLKΪADCʱ��, ��ϵͳʱ�ӵ�SysClk/2/(n+1)��Ƶ, ADCת�������в������:
ͨ��ѡ��ʱ��     1��2��CLK (Ĭ��1)
ͨ��ѡ�񱣳�ʱ�� 1~4��CLK (Ĭ��2)
ģ���źŲ���ʱ�� 1~32��CLK (Ĭ��11)
ADCת��ʱ��      10��CLK(�̶�).


******************************************/



/*************	���س�������	**************/

#define	ADC_CHN		3	/* ����ADCͨ��, 0~14 */


/*************	���ر�������	**************/

bit	B_TX1_Busy;	// ����æ��־

/*************	���غ�������	**************/
u16		Get_ADC10bitResult(u8 channel);
void	delay_ms(u8 ms);
void	UART1_config(void);
void 	Uart1_TxByte(u8 dat);
void 	PrintString1(u8 *puts);
void	ADC_config(void);
void	ADC_convert(u8 chn);	//chn=0~7��ӦP1.0~P1.7, chn=8~14��ӦP3.0~P3.6, chn=15��ӦBandGap��ѹ


/**********************************************/
void main(void)
{

	UART1_config();	//��ʼ������
	ADC_config();	//��ʼ��ADC
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
// ����: void	ADC_config(void)
// ����: ADC���ú���.
// ����: None
// ����: none.
// �汾: V1.0, 2021-12-23
//========================================================================
#define ADC_START	(1<<6)	/* �Զ���0 */
#define ADC_FLAG	(1<<5)	/* �����0 */

#define	ADC_SPEED	1		/* 0~15, ADCʱ�� = SYSclk/2/(n+1) */
#define	RES_FMT		(1<<5)	/* ADC�����ʽ 0: �����, ADC_RES: D9 D8 D7 D6 D5 D4 D3 D2, ADC_RESL: D1 D0 0  0  0  0  0  0 */
							/*             1: �Ҷ���, ADC_RES: 0  0  0  0  0  0  D9 D8, ADC_RESL: D7 D6 D5 D4 D3 D2 D1 D0 */

#define CSSETUP		(0<<7)	/* 0~1,  ADCͨ��ѡ��ʱ��      0: 1��ADCʱ��, 1: 2��ADCʱ��,  Ĭ��0(Ĭ��1��ADCʱ��) */
#define CSHOLD		(1<<5)	/* 0~3,  ADCͨ��ѡ�񱣳�ʱ��  (n+1)��ADCʱ��, Ĭ��1(Ĭ��2��ADCʱ��)                */
#define SMPDUTY		20		/* 10~31, ADCģ���źŲ���ʱ��  (n+1)��ADCʱ��, Ĭ��10(Ĭ��11��ADCʱ��)				*/
							/* ADCת��ʱ��: 10λADC�̶�Ϊ10��ADCʱ��, 12λADC�̶�Ϊ12��ADCʱ��. 				*/

void	ADC_config(void)
{
	#if (ADC_CHN <= 7)
		P1n_pure_input((1<<ADC_CHN));	//����Ҫ��ADC��IO����������
	#elif (ADC_CHN <= 14)
		P0n_pure_input((1<<(ADC_CHN-8)));	//����Ҫ��ADC��IO����������
	#endif
	P_SW2 |=  0x80;	//����XSFR
	ADC_CONTR = 0x80 + ADC_CHN;	//ADC on + channel
	ADCCFG = RES_FMT + ADC_SPEED;
	ADCTIM = CSSETUP + CSHOLD + SMPDUTY;
}

//========================================================================
// ����: u16	Get_ADC10bitResult(u8 channel))	//channel = 0~15
// ����: ��ѯ����һ��ADC���.
// ����: channel: ѡ��Ҫת����ADC, 0~15.
// ����: 10λADC���.
// �汾: V1.0, 2018-11-28
//========================================================================
u16	Get_ADC10bitResult(u8 channel)	//channel = 0~15
{
	ADC_RES = 0;
	ADC_RESL = 0;
	ADC_CONTR = 0x80 | ADC_START | channel;
	NOP(5);			//
	while((ADC_CONTR & ADC_FLAG) == 0)	;	//�ȴ�ADC����
	ADC_CONTR &= ~ADC_FLAG;
	return	((u16)ADC_RES * 256 + (u16)ADC_RESL);
}

#define		SUM_LENGTH	16	/* ƽ��ֵ�������� ���ֵ64 */

/***********************************
��ѯ��ʽ��һ��ADC, chnΪͨ����, chn=0~7��ӦP1.0~P1.7, chn=8~14��ӦP3.0~P3.6, chn=15��ӦBandGap��ѹ.
***********************************/
void	ADC_convert(u8 chn)
{
	u16	j;
	u8	k;		//ƽ��ֵ�˲�ʱʹ��

	for(k=0, j=0; k<SUM_LENGTH; k++)	j += Get_ADC10bitResult(chn);	// �����ۼӺ�   ����0~15,��ѯ��ʽ��һ��ADC, ����ֵ���ǽ��
	j = j / SUM_LENGTH;		// ��ƽ��

	Uart1_TxByte('A');
	Uart1_TxByte('D');
	Uart1_TxByte('C');
	Uart1_TxByte(chn/10+'0');
	Uart1_TxByte(chn%10+'0');

	Uart1_TxByte('=');				//����ADC����
	Uart1_TxByte(j/1000 + '0');
	Uart1_TxByte(j%1000/100 + '0');
	Uart1_TxByte(j%100/10 + '0');
	Uart1_TxByte(j%10 + '0');
	Uart1_TxByte(' ');
	Uart1_TxByte(' ');
}



//========================================================================
// ����: void  delay_ms(u8 ms)
// ����: ��ʱ������
// ����: ms,Ҫ��ʱ��ms��, ����ֻ֧��1~255ms. �Զ���Ӧ��ʱ��.
// ����: none.
// �汾: VER1.0
// ����: 2013-4-1
// ��ע:
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
// ����: void	UART1_config(u8 brt)
// ����: UART1��ʼ��������
// ����: brt: ѡ������, 2: ʹ��Timer2��������, ����ֵ: ʹ��Timer1��������.
// ����: none.
// �汾: VER1.0
// ����: 2016-4-28
// ��ע:
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
	ET1 = 0;	//��ֹ�ж�
	TR1  = 1;

	SCON = (SCON & 0x3f) | (1<<6);	// 8λ����, 1λ��ʼλ, 1λֹͣλ, ��У��
	REN = 1;	//�������
//	PS  = 1;	//�����ȼ��ж�
	ES  = 1;	//�����ж�
	P_SW1 = P_SW1 & 0x3f;				P3n_standard(0x03);	//ͷ�ļ�����ĺ�, �л��� P3.0 P3.1
//	P_SW1 = (P_SW1 & 0x3f) | (1<<6);	P3n_standard(0xc0);	//ͷ�ļ�����ĺ�, �л��� P3.6 P3.7
//	P_SW1 = (P_SW1 & 0x3f) | (2<<6);	P1n_standard(0xc0);	//ͷ�ļ�����ĺ�, �л��� P1.6 P1.7 (����ʹ���ڲ�ʱ��)

	B_TX1_Busy  = 0;
}


//========================================================================
// ����: void Uart1_TxByte(u8 dat)
// ����: ����1����һ���ֽں���.
// ����: none.
// ����: none.
// �汾: VER1.0
// ����: 2016-4-28
// ��ע:
//========================================================================
void Uart1_TxByte(u8 dat)
{
	B_TX1_Busy = 1;		//��־����æ
	SBUF = dat;			//��һ���ֽ�
	while(B_TX1_Busy);	//�ȴ��������
}


//========================================================================
// ����: void UART1_int (void) interrupt UART1_VECTOR
// ����: ����1�жϺ���
// ����: none.
// ����: none.
// �汾: VER1.0
// ����: 2016-4-28
// ��ע:
//========================================================================
void UART1_int (void) interrupt UART1_VECTOR
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
