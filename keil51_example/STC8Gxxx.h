
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
sfr P1M1  = 0x91;	//P1M1.n,P1M0.n 	=00--->Standard,	01--->push-pull		ʵ����1T�Ķ�һ��
sfr P1M0  = 0x92;	//					=10--->pure input,	11--->open drain
sfr P0M1  = 0x93;	//P0M1.n,P0M0.n 	=00--->Standard,	01--->push-pull
sfr P0M0  = 0x94;	//					=10--->pure input,	11--->open drain
sfr P2M1  = 0x95;	//P2M1.n,P2M0.n 	=00--->Standard,	01--->push-pull
sfr P2M0  = 0x96;	//					=10--->pure input,	11--->open drain

sfr SCON    = 0x98;
sfr SBUF    = 0x99;
sfr S2CON   = 0x9A;	//
sfr S2BUF   = 0x9B;	//
sfr IRCBAND = 0x9D;	//IRCƵ��ѡ����
sfr LIRTRIM = 0x9E;	//IRCƵ��΢���Ĵ���
sfr IRTRIM  = 0x9F;	//IRCƵ�ʵ����Ĵ���

sfr P2        = 0xA0;
sfr BUS_SPEED = 0xA1;
sfr P_SW1     = 0xA2;

sfr IE    = 0xA8;
sfr SADDR = 0xA9;	//����1�ӻ���ַ�Ĵ���
sfr WKTCL = 0xAA;	//���Ѷ�ʱ�����ֽ�
sfr WKTCH = 0xAB;	//���Ѷ�ʱ�����ֽ�
sfr	S3CON = 0xAC;
sfr S3BUF = 0xAD;
sfr TA    = 0xAE;	//DPTRʱ����ƼĴ���
sfr IE2   = 0xAF;	//�ж�����Ĵ���2

sfr P3    = 0xB0;
sfr P3M1  = 0xB1;	//P3M1.n,P3M0.n 	=00--->Standard,	01--->push-pull
sfr P3M0  = 0xB2;	//					=10--->pure input,	11--->open drain
sfr P4M1  = 0xB3;	//P4M1.n,P4M0.n 	=00--->Standard,	01--->push-pull
sfr P4M0  = 0xB4;	//					=10--->pure input,	11--->open drain
sfr IP2   = 0xB5;	//�ж����ȼ����ƼĴ���2
sfr IP2H  = 0xB6;	//���ж����ȼ����ƼĴ���2
sfr IPH   = 0xB7;	//���ж����ȼ����ƼĴ���

sfr IP        = 0xB8;	//�ж����ȼ����ƼĴ���
sfr SADEN     = 0xB9;	//����1�ӻ���ַ���μĴ���
sfr	P_SW2     = 0xBA;	//����˿��л��Ĵ���2
sfr ADC_CONTR = 0xBC;	//ADC���ƼĴ���
sfr ADC_RES   = 0xBD;	//ADC������ֽ�
sfr ADC_RESL  = 0xBE;	//ADC������ֽ�

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
sfr CCAPM0 = 0xDA;	//PCAģ��0�Ĺ���ģʽ�Ĵ���
sfr CCAPM1 = 0xDB;	//PCAģ��1�Ĺ���ģʽ�Ĵ���
sfr CCAPM2 = 0xDC;	//PCAģ��2�Ĺ���ģʽ�Ĵ���
sfr	ADCCFG = 0xDE;	//
sfr	IP3    = 0xDF;	//�ж����ȼ����ƼĴ���3

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
sfr CCAP0L = 0xEA;	//PCAģ��0�Ĳ���/�ȽϼĴ�����8λ��
sfr CCAP1L = 0xEB;	//PCAģ��1�Ĳ���/�ȽϼĴ�����8λ��
sfr CCAP2L = 0xEC;	//PCAģ��2�Ĳ���/�ȽϼĴ�����8λ��
sfr	IP3H   = 0xEE;	//���ж����ȼ����ƼĴ���3
sfr	AUXINTIF = 0xEF;	//�����жϱ�־ B6-INT4IF, B5-INT3IF, B4-INT2IF, B2-T4IF, B1-T3IF, B0-T2IF

sfr B        = 0xF0;
sfr	PWMSET   = 0xF1;	//��ǿ��PWMȫ�����üĴ���
sfr PCA_PWM0 = 0xF2;	//PCAģ��0 PWM�Ĵ�����
sfr PCA_PWM1 = 0xF3;	//PCAģ��1 PWM�Ĵ�����
sfr PCA_PWM2 = 0xF4;	//PCAģ��2 PWM�Ĵ�����
sfr	IAP_TPS  = 0xF5;	//IAP�ȴ�ʱ����ƼĴ���
sfr	PWMCFG01 = 0xF6;	//��ǿ��PWM���üĴ���
sfr	PWMCFG23 = 0xF7;	//��ǿ��PWM���üĴ���

sfr	P7       = 0xF8;
sfr CH       = 0xF9;
sfr CCAP0H   = 0xFA;	//PCAģ��0�Ĳ���/�ȽϼĴ�����8λ��
sfr CCAP1H   = 0xFB;	//PCAģ��1�Ĳ���/�ȽϼĴ�����8λ��
sfr CCAP2H   = 0xFC;	//PCAģ��2�Ĳ���/�ȽϼĴ�����8λ��
sfr	PWMCFG45 = 0xFE;	//��ǿ��PWM���üĴ���
sfr	RSTCFG   = 0xFF;	//��λ���üĴ���

//=============================================================================================================
#define P0INTE      (*(unsigned char volatile xdata *)0xfd00)	/* P0���ж�ʹ�ܼĴ��� */
#define P1INTE      (*(unsigned char volatile xdata *)0xfd01)	/* P1���ж�ʹ�ܼĴ��� */
#define P2INTE      (*(unsigned char volatile xdata *)0xfd02)	/* P2���ж�ʹ�ܼĴ��� */
#define P3INTE      (*(unsigned char volatile xdata *)0xfd03)	/* P3���ж�ʹ�ܼĴ��� */
#define P4INTE      (*(unsigned char volatile xdata *)0xfd04)	/* P4���ж�ʹ�ܼĴ��� */
#define P5INTE      (*(unsigned char volatile xdata *)0xfd05)	/* P5���ж�ʹ�ܼĴ��� */
#define P6INTE      (*(unsigned char volatile xdata *)0xfd06)	/* P6���ж�ʹ�ܼĴ��� */
#define P7INTE      (*(unsigned char volatile xdata *)0xfd07)	/* P7���ж�ʹ�ܼĴ��� */
#define P0INTF      (*(unsigned char volatile xdata *)0xfd10)	/* P0���жϱ�־�Ĵ��� */
#define P1INTF      (*(unsigned char volatile xdata *)0xfd11)	/* P1���жϱ�־�Ĵ��� */
#define P2INTF      (*(unsigned char volatile xdata *)0xfd12)	/* P2���жϱ�־�Ĵ��� */
#define P3INTF      (*(unsigned char volatile xdata *)0xfd13)	/* P3���жϱ�־�Ĵ��� */
#define P4INTF      (*(unsigned char volatile xdata *)0xfd14)	/* P4���жϱ�־�Ĵ��� */
#define P5INTF      (*(unsigned char volatile xdata *)0xfd15)	/* P5���жϱ�־�Ĵ��� */
#define P6INTF      (*(unsigned char volatile xdata *)0xfd16)	/* P6���жϱ�־�Ĵ��� */
#define P7INTF      (*(unsigned char volatile xdata *)0xfd17)	/* P7���жϱ�־�Ĵ��� */
#define P0IM0       (*(unsigned char volatile xdata *)0xfd20)	/* P0���ж�ģʽ�Ĵ���0 */
#define P1IM0       (*(unsigned char volatile xdata *)0xfd21)	/* P1���ж�ģʽ�Ĵ���0 */
#define P2IM0       (*(unsigned char volatile xdata *)0xfd22)	/* P2���ж�ģʽ�Ĵ���0 */
#define P3IM0       (*(unsigned char volatile xdata *)0xfd23)	/* P3���ж�ģʽ�Ĵ���0 */
#define P4IM0       (*(unsigned char volatile xdata *)0xfd24)	/* P4���ж�ģʽ�Ĵ���0 */
#define P5IM0       (*(unsigned char volatile xdata *)0xfd25)	/* P5���ж�ģʽ�Ĵ���0 */
#define P6IM0       (*(unsigned char volatile xdata *)0xfd26)	/* P6���ж�ģʽ�Ĵ���0 */
#define P7IM0       (*(unsigned char volatile xdata *)0xfd27)	/* P7���ж�ģʽ�Ĵ���0 */
#define P0IM1       (*(unsigned char volatile xdata *)0xfd30)	/* P0���ж�ģʽ�Ĵ���1 */
#define P1IM1       (*(unsigned char volatile xdata *)0xfd31)	/* P1���ж�ģʽ�Ĵ���1 */
#define P2IM1       (*(unsigned char volatile xdata *)0xfd32)	/* P2���ж�ģʽ�Ĵ���1 */
#define P3IM1       (*(unsigned char volatile xdata *)0xfd33)	/* P3���ж�ģʽ�Ĵ���1 */
#define P4IM1       (*(unsigned char volatile xdata *)0xfd34)	/* P4���ж�ģʽ�Ĵ���1 */
#define P5IM1       (*(unsigned char volatile xdata *)0xfd35)	/* P5���ж�ģʽ�Ĵ���1 */
#define P6IM1       (*(unsigned char volatile xdata *)0xfd36)	/* P6���ж�ģʽ�Ĵ���1 */
#define P7IM1       (*(unsigned char volatile xdata *)0xfd37)	/* P7���ж�ģʽ�Ĵ���1 */

#define INTE_0       0x01	/* ʹ��Px.0���жϹ��� */
#define INTE_1       0x02	/* ʹ��Px.1���жϹ��� */
#define INTE_2       0x04	/* ʹ��Px.2���жϹ��� */
#define INTE_3       0x08	/* ʹ��Px.3���жϹ��� */
#define INTE_4       0x10	/* ʹ��Px.4���жϹ��� */
#define INTE_5       0x20	/* ʹ��Px.5���жϹ��� */
#define INTE_6       0x40	/* ʹ��Px.6���жϹ��� */
#define INTE_7       0x80	/* ʹ��Px.7���жϹ��� */

#define INTF_0       0x01	/* Px.0���жϱ�־ */
#define INTF_1       0x02	/* Px.1���жϱ�־ */
#define INTF_2       0x04	/* Px.2���жϱ�־ */
#define INTF_3       0x08	/* Px.3���жϱ�־ */
#define INTF_4       0x10	/* Px.4���жϱ�־ */
#define INTF_5       0x20	/* Px.5���жϱ�־ */
#define INTF_6       0x40	/* Px.6���жϱ�־ */
#define INTF_7       0x80	/* Px.7���жϱ�־ */

#define	INT_FALL	0		/* �½����ж�   */
#define	INT_RISE	1		/* �������ж�   */
#define	INT_LOW		2		/* �͵�ƽ�ж�   */
#define	INT_HIGH	3		/* �ߵ�ƽ�ж�   */


#define CLKSEL      (*(unsigned char volatile xdata *)0xfe00)	/* ��ʱ��Դѡ��    */
#define	CKSEL		(*(unsigned char volatile xdata *)0xfe00)	/* ��ʱ��Դѡ��    */
#define	CLKDIV		(*(unsigned char volatile xdata *)0xfe01)	/* ��ʱ�ӷ�Ƶ      */
#define	CKDIV		(*(unsigned char volatile xdata *)0xfe01)	/* ��ʱ�ӷ�Ƶ      */
#define	IRC24MCR	(*(unsigned char volatile xdata *)0xfe02)	/* IRC 24MHZ����   */
#define	XOSCCR		(*(unsigned char volatile xdata *)0xfe03)	/* XOSC����        */
#define	IRC32KCR	(*(unsigned char volatile xdata *)0xfe04)	/* IRC 32KHZ����   */
#define	MCLKOCR		(*(unsigned char volatile xdata *)0xfe05)	/* ��ʱ��������ƼĴ���  */
#define	IRCDB		(*(unsigned char volatile xdata *)0xfe06)	/* �ڲ���������ȥ�����ƼĴ���  */

#define	P0PU		(*(unsigned char volatile xdata *)0xfe10)	/* P0 3.7K Pull Up Enable  */
#define	P1PU		(*(unsigned char volatile xdata *)0xfe11)	/* P1 3.7K Pull Up Enable  */
#define	P2PU		(*(unsigned char volatile xdata *)0xfe12)	/* P2 3.7K Pull Up Enable  */
#define	P3PU		(*(unsigned char volatile xdata *)0xfe13)	/* P3 3.7K Pull Up Enable  */
#define	P4PU		(*(unsigned char volatile xdata *)0xfe14)	/* P4 3.7K Pull Up Enable  */
#define	P5PU		(*(unsigned char volatile xdata *)0xfe15)	/* P5 3.7K Pull Up Enable  */
#define	P6PU		(*(unsigned char volatile xdata *)0xfe16)	/* P6 3.7K Pull Up Enable  */
#define	P7PU		(*(unsigned char volatile xdata *)0xfe17)	/* P7 3.7K Pull Up Enable  */

#define	P0NCS		(*(unsigned char volatile xdata *)0xfe18)	/* P0 Non Schmit Trigger  0: ʹ�ܶ˿�ʩ���ش�������(Ĭ��), 1: ��ֹ  */
#define	P1NCS		(*(unsigned char volatile xdata *)0xfe19)	/* P1 Non Schmit Trigger  */
#define	P2NCS		(*(unsigned char volatile xdata *)0xfe1a)	/* P2 Non Schmit Trigger  */
#define	P3NCS		(*(unsigned char volatile xdata *)0xfe1b)	/* P3 Non Schmit Trigger  */
#define	P4NCS		(*(unsigned char volatile xdata *)0xfe1c)	/* P4 Non Schmit Trigger  */
#define	P5NCS		(*(unsigned char volatile xdata *)0xfe1d)	/* P5 Non Schmit Trigger  */
#define	P6NCS		(*(unsigned char volatile xdata *)0xfe1e)	/* P6 Non Schmit Trigger  */
#define	P7NCS		(*(unsigned char volatile xdata *)0xfe1f)	/* P7 Non Schmit Trigger  */

#define	P0SR		(*(unsigned char volatile xdata *)0xfe20)	/* P0�ڵ�ƽת�����ʼĴ��� Ĭ��1: ��ͨģʽ, 0:����ģʽ */
#define	P1SR		(*(unsigned char volatile xdata *)0xfe21)	/* P1�ڵ�ƽת�����ʼĴ���  */
#define	P2SR		(*(unsigned char volatile xdata *)0xfe22)	/* P2�ڵ�ƽת�����ʼĴ���  */
#define	P3SR		(*(unsigned char volatile xdata *)0xfe23)	/* P3�ڵ�ƽת�����ʼĴ���  */
#define	P4SR		(*(unsigned char volatile xdata *)0xfe24)	/* P4�ڵ�ƽת�����ʼĴ���  */
#define	P5SR		(*(unsigned char volatile xdata *)0xfe25)	/* P5�ڵ�ƽת�����ʼĴ���  */
#define	P6SR		(*(unsigned char volatile xdata *)0xfe26)	/* P6�ڵ�ƽת�����ʼĴ���  */
#define	P7SR		(*(unsigned char volatile xdata *)0xfe27)	/* P7�ڵ�ƽת�����ʼĴ���  */

#define	P0DR		(*(unsigned char volatile xdata *)0xfe28)	/* P0�������������ƼĴ��� Ĭ��1: ��ͨģʽ, 0:�����ģʽ*/
#define	P1DR		(*(unsigned char volatile xdata *)0xfe29)	/* P1�������������ƼĴ��� */
#define	P2DR		(*(unsigned char volatile xdata *)0xfe2a)	/* P2�������������ƼĴ��� */
#define	P3DR		(*(unsigned char volatile xdata *)0xfe2b)	/* P3�������������ƼĴ��� */
#define	P4DR		(*(unsigned char volatile xdata *)0xfe2c)	/* P4�������������ƼĴ��� */
#define	P5DR		(*(unsigned char volatile xdata *)0xfe2d)	/* P5�������������ƼĴ��� */
#define	P6DR		(*(unsigned char volatile xdata *)0xfe2e)	/* P6�������������ƼĴ��� */
#define	P7DR		(*(unsigned char volatile xdata *)0xfe2f)	/* P7�������������ƼĴ��� */

#define	P0IE		(*(unsigned char volatile xdata *)0xfe30)	/* P0������ʹ�ܿ��ƼĴ���, 1����(Ĭ��), 0��ֹ */
#define	P1IE		(*(unsigned char volatile xdata *)0xfe31)	/* P1������ʹ�ܿ��ƼĴ��� */
#define	P2IE		(*(unsigned char volatile xdata *)0xfe32)	/* P2������ʹ�ܿ��ƼĴ��� */
#define	P3IE		(*(unsigned char volatile xdata *)0xfe33)	/* P3������ʹ�ܿ��ƼĴ��� */
#define	P4IE		(*(unsigned char volatile xdata *)0xfe34)	/* P4������ʹ�ܿ��ƼĴ��� */
#define	P5IE		(*(unsigned char volatile xdata *)0xfe35)	/* P5������ʹ�ܿ��ƼĴ��� */
#define	P6IE		(*(unsigned char volatile xdata *)0xfe36)	/* P6������ʹ�ܿ��ƼĴ��� */
#define	P7IE		(*(unsigned char volatile xdata *)0xfe37)	/* P7������ʹ�ܿ��ƼĴ��� */

#define	I2CCFG		(*(unsigned char volatile xdata *)0xfe80)	/* I2C���üĴ���  */
#define	I2CMSCR		(*(unsigned char volatile xdata *)0xfe81)	/* I2C�������ƼĴ���  */
#define	I2CMSST		(*(unsigned char volatile xdata *)0xfe82)	/* I2C����״̬�Ĵ���  */
#define	I2CSLCR		(*(unsigned char volatile xdata *)0xfe83)	/* I2C�ӻ����ƼĴ���  */
#define	I2CSLST		(*(unsigned char volatile xdata *)0xfe84)	/* I2C�ӻ�״̬�Ĵ���  */
#define	I2CSLADR	(*(unsigned char volatile xdata *)0xfe85)	/* I2C�ӻ���ַ�Ĵ���  */
#define	I2CTXD		(*(unsigned char volatile xdata *)0xfe86)	/* I2C���ݷ��ͼĴ���  */
#define	I2CRXD		(*(unsigned char volatile xdata *)0xfe87)	/* I2C���ݽ��ռĴ���  */
#define	I2CMSAUX	(*(unsigned char volatile xdata *)0xfe88)	/* I2C�����������ƼĴ���  */

#define	TM2PS		(*(unsigned char volatile xdata *)0xfea2)	/* ��ʱ��2ʱ��Ԥ��Ƶ�Ĵ���  */
#define	TM3PS		(*(unsigned char volatile xdata *)0xfea3)	/* ��ʱ��3ʱ��Ԥ��Ƶ�Ĵ���  */
#define	TM4PS		(*(unsigned char volatile xdata *)0xfea4)	/* ��ʱ��4ʱ��Ԥ��Ƶ�Ĵ���  */
#define	ADCTIM		(*(unsigned char volatile xdata *)0xfea8)	/* ADCʱ����ƼĴ���  */

// PWMSET(0xF1)����λ���� 
#define	ENGLBSET	0x80	/* 1: 6��PWMͳһ����PWMCFG01�е�PWM0�����ý�������, 0: ����PWM�������� */
#define	PWMRST		0x40	/* 1: ��λ����XFR�Ĵ���(������λSFR�Ĵ���), ������� */
#define	ENPWM5		0x20	/* 1: ʹ��PWM5(PWM50~PWM54), 0: �ر�PWM5 */
#define	ENPWM4		0x10	/* 1: ʹ��PWM4(PWM40~PWM47), 0: �ر�PWM4 */
#define	ENPWM3		0x08	/* 1: ʹ��PWM3(PWM30~PWM37), 0: �ر�PWM3 */
#define	ENPWM2		0x04	/* 1: ʹ��PWM2(PWM20~PWM27), 0: �ر�PWM2 */
#define	ENPWM1		0x02	/* 1: ʹ��PWM1(PWM10~PWM17), 0: �ر�PWM1 */
#define	ENPWM0		0x01	/* 1: ʹ��PWM0(PWM00~PWM07), 0: �ر�PWM0 */

// PWMCFG01(0xF6)����λ����
#define	PWM1CBIF	0x80	/* 1: PWM1�����������жϱ�־λ, ����Ӳ������1, ������� */
#define	EPWM1CBI	0x40	/* 1: ʹ�ܼ����������жϣ� 0: �رռ����������ж� */
#define	FLTPS0		0x20	/*  */
#define	PWM1CEN		0x10	/* 1: PWM1��ʼ����, 0: ֹͣ���� */
#define	PWM0CBIF	0x08	/* 1: PWM0�����������жϱ�־λ, ����Ӳ������1, ������� */
#define	EPWM0CBI	0x04	/* 1: ʹ�ܼ����������жϣ� 0: �رռ����������ж� */
#define	ENPWM0TA	0x02	/* 1: ��PWM����ֵ����PWM0TADCʱ, ����ADCת�� */
#define	PWM0CEN		0x01	/* 1: PWM0��ʼ����, 0: ֹͣ���� */

// PWMCFG23(0xF7)����λ����
#define	PWM3CBIF	0x80	/* 1: PWM3�����������жϱ�־λ, ����Ӳ������1, ������� */
#define	EPWM3CBI	0x40	/* 1: ʹ�ܼ����������жϣ� 0: �رռ����������ж� */
#define	FLTPS1		0x20	/*  */
#define	PWM3CEN		0x10	/* 1: PWM3��ʼ����, 0: ֹͣ���� */
#define	PWM2CBIF	0x08	/* 1: PWM2�����������жϱ�־λ, ����Ӳ������1, ������� */
#define	EPWM2CBI	0x04	/* 1: ʹ�ܼ����������жϣ� 0: �رռ����������ж� */
#define	ENPWM2TA	0x02	/* 1: ��PWM����ֵ����PWM2TADCʱ, ����ADCת�� */
#define	PWM2CEN		0x01	/* 1: PWM2��ʼ����, 0: ֹͣ���� */

// PWMCFG45(0xFE)����λ����
#define	PWM5CBIF	0x80	/* 1: PWM5�����������жϱ�־λ, ����Ӳ������1, ������� */
#define	EPWM5CBI	0x40	/* 1: ʹ�ܼ����������жϣ� 0: �رռ����������ж� */
#define	FLTPS2		0x20	/*  */
#define	PWM5CEN		0x10	/* 1: PWM5��ʼ����, 0: ֹͣ���� */
#define	PWM4CBIF	0x08	/* 1: PWM4�����������жϱ�־λ, ����Ӳ������1, ������� */
#define	EPWM4CBI	0x04	/* 1: ʹ�ܼ����������жϣ� 0: �رռ����������ж� */
#define	ENPWM4TA	0x02	/* 1: ��PWM����ֵ����PWM4TADCʱ, ����ADCת�� */
#define	PWM4CEN		0x01	/* 1: PWM4��ʼ����, 0: ֹͣ���� */

//PWMxIF  PWM0�жϱ�־�Ĵ���λ����
#define	C7IF	0x80	/* 1: PWMx7ƥ���жϱ�־λ, ������� */
#define	C6IF	0x40	/* 1: PWMx6ƥ���жϱ�־λ, ������� */
#define	C5IF	0x20	/* 1: PWMx5ƥ���жϱ�־λ, ������� */
#define	C4IF	0x10	/* 1: PWMx4ƥ���жϱ�־λ, ������� */
#define	C3IF	0x08	/* 1: PWMx3ƥ���жϱ�־λ, ������� */
#define	C2IF	0x04	/* 1: PWMx2ƥ���жϱ�־λ, ������� */
#define	C1IF	0x02	/* 1: PWMx1ƥ���жϱ�־λ, ������� */
#define	C0IF	0x01	/* 1: PWMx0ƥ���жϱ�־λ, ������� */

//PWMxCKS PWMʱ��ѡ��Ĵ���λ����
#define	CKS_TIMER2	0x10	/* ʹ�ö�ʱ��2�����PWMʱ�� */
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

//PWMxxCR PWMͨ�����ƼĴ���λ����
#define	ENO		0x80	/* 1: �����Ӧ����ΪPWM, 0: ��Ӧ����ΪGPIO */
#define	INI		0x40	/* 1: ���ö�Ӧ���ų�ʼ��ƽΪ�ߵ�ƽ, 0: ��ʼ��ƽΪ�͵�ƽ. һ������PWM, �������������PWM���� */
#define	ENI		0x04	/* 1: �����ж�, 0: ��ֹ�ж� */
#define	ENT2I	0x02	/* 1: �����������ж�, 0: ��ֹ�������ж� (T2ƥ��)*/
#define	ENT1I	0x01	/* 1: �����½����ж�, 0: ��ֹ�½����ж� (T1ƥ��)*/
//PWMxxHLD PWMͨ����ƽ����(ǿ�����)���ƼĴ���λ����
#define	PWM_KeepHigh	0x02	/* PWMǿ������ߵ�ƽ */
#define	PWM_KeepLow		0x01	/* PWMǿ������͵�ƽ */
#define	PWM_Normal		0x00	/* PWM������� */

#define PWM0C       (*(unsigned int  volatile xdata *)0xff00)	/* PWM0���������ֽ� */
#define PWM0TADC    (*(unsigned int  volatile xdata *)0xff03)	/* PWM0����ADC���� */
#define PWM00T1     (*(unsigned int  volatile xdata *)0xff10)	/* PWM00T1����ֵ */
#define PWM00T2     (*(unsigned int  volatile xdata *)0xff12)	/* PWM00T2����ֵ */
#define PWM01T1     (*(unsigned int  volatile xdata *)0xff18)	/* PWM01T1����ֵ */
#define PWM01T2     (*(unsigned int  volatile xdata *)0xff1a)	/* PWM01T2����ֵ */
#define PWM02T1     (*(unsigned int  volatile xdata *)0xff20)	/* PWM02T1����ֵ */
#define PWM02T2     (*(unsigned int  volatile xdata *)0xff22)	/* PWM02T2����ֵ */
#define PWM03T1     (*(unsigned int  volatile xdata *)0xff28)	/* PWM03T1����ֵ */
#define PWM03T2     (*(unsigned int  volatile xdata *)0xff2a)	/* PWM03T2����ֵ */
#define PWM04T1     (*(unsigned int  volatile xdata *)0xff30)	/* PWM04T1����ֵ */
#define PWM04T2     (*(unsigned int  volatile xdata *)0xff32)	/* PWM04T2����ֵ */
#define PWM05T1     (*(unsigned int  volatile xdata *)0xff38)	/* PWM05T1����ֵ */
#define PWM05T2     (*(unsigned int  volatile xdata *)0xff3a)	/* PWM05T2����ֵ */
#define PWM06T1     (*(unsigned int  volatile xdata *)0xff40)	/* PWM06T1����ֵ */
#define PWM06T2     (*(unsigned int  volatile xdata *)0xff42)	/* PWM06T2����ֵ */
#define PWM07T1     (*(unsigned int  volatile xdata *)0xff48)	/* PWM07T1����ֵ */
#define PWM07T2     (*(unsigned int  volatile xdata *)0xff4a)	/* PWM07T2����ֵ */
#define PWM1C       (*(unsigned int  volatile xdata *)0xff50)	/* PWM1���������ֽ� */
#define PWM1TADC    (*(unsigned int  volatile xdata *)0xff53)	/* PWM1����ADC���� */
#define PWM10T1     (*(unsigned int  volatile xdata *)0xff60)	/* PWM10T1����ֵ */
#define PWM10T2     (*(unsigned int  volatile xdata *)0xff62)	/* PWM10T2����ֵ */
#define PWM11T1     (*(unsigned int  volatile xdata *)0xff68)	/* PWM11T1����ֵ */
#define PWM11T2     (*(unsigned int  volatile xdata *)0xff6a)	/* PWM11T2����ֵ */
#define PWM12T1     (*(unsigned int  volatile xdata *)0xff70)	/* PWM12T1����ֵ */
#define PWM12T2     (*(unsigned int  volatile xdata *)0xff72)	/* PWM12T2����ֵ */
#define PWM13T1     (*(unsigned int  volatile xdata *)0xff78)	/* PWM13T1����ֵ */
#define PWM13T2     (*(unsigned int  volatile xdata *)0xff7a)	/* PWM13T2����ֵ */
#define PWM14T1     (*(unsigned int  volatile xdata *)0xff80)	/* PWM14T1����ֵ */
#define PWM14T2     (*(unsigned int  volatile xdata *)0xff82)	/* PWM14T2����ֵ */
#define PWM15T1     (*(unsigned int  volatile xdata *)0xff88)	/* PWM15T1����ֵ */
#define PWM15T2     (*(unsigned int  volatile xdata *)0xff8a)	/* PWM15T2����ֵ */
#define PWM16T1     (*(unsigned int  volatile xdata *)0xff90)	/* PWM16T1����ֵ */
#define PWM16T2     (*(unsigned int  volatile xdata *)0xff92)	/* PWM16T2����ֵ */
#define PWM17T1     (*(unsigned int  volatile xdata *)0xff98)	/* PWM17T1����ֵ */
#define PWM17T2     (*(unsigned int  volatile xdata *)0xff9a)	/* PWM17T2����ֵ */
#define PWM2C       (*(unsigned int  volatile xdata *)0xffa0)	/* PWM2���������ֽ� */
#define PWM2TADC    (*(unsigned int  volatile xdata *)0xffa3)	/* PWM2����ADC���� */
#define PWM20T1     (*(unsigned int  volatile xdata *)0xffb0)	/* PWM20T1����ֵ */
#define PWM20T2     (*(unsigned int  volatile xdata *)0xffb2)	/* PWM20T2����ֵ */
#define PWM21T1     (*(unsigned int  volatile xdata *)0xffb8)	/* PWM21T1����ֵ */
#define PWM21T2     (*(unsigned int  volatile xdata *)0xffba)	/* PWM21T2����ֵ */
#define PWM22T1     (*(unsigned int  volatile xdata *)0xffc0)	/* PWM22T1����ֵ */
#define PWM22T2     (*(unsigned int  volatile xdata *)0xffc2)	/* PWM22T2����ֵ */
#define PWM23T1     (*(unsigned int  volatile xdata *)0xffc8)	/* PWM23T1����ֵ */
#define PWM23T2     (*(unsigned int  volatile xdata *)0xffca)	/* PWM23T2����ֵ */
#define PWM24T1     (*(unsigned int  volatile xdata *)0xffd0)	/* PWM24T1����ֵ */
#define PWM24T2     (*(unsigned int  volatile xdata *)0xffd2)	/* PWM24T2����ֵ */
#define PWM25T1     (*(unsigned int  volatile xdata *)0xffd8)	/* PWM25T1����ֵ */
#define PWM25T2     (*(unsigned int  volatile xdata *)0xffda)	/* PWM25T2����ֵ */
#define PWM26T1     (*(unsigned int  volatile xdata *)0xffe0)	/* PWM26T1����ֵ */
#define PWM26T2     (*(unsigned int  volatile xdata *)0xffe2)	/* PWM26T2����ֵ */
#define PWM27T1     (*(unsigned int  volatile xdata *)0xffe8)	/* PWM27T1����ֵ */
#define PWM27T2     (*(unsigned int  volatile xdata *)0xffea)	/* PWM27T2����ֵ */
#define PWM3C       (*(unsigned int  volatile xdata *)0xfc00)	/* PWM3������ */
#define PWM3TADC    (*(unsigned int  volatile xdata *)0xfc03)	/* PWM3����ADC���� */
#define PWM30T1     (*(unsigned int  volatile xdata *)0xfc10)	/* PWM30T1����ֵ */
#define PWM30T2     (*(unsigned int  volatile xdata *)0xfc12)	/* PWM30T2����ֵ */
#define PWM31T1     (*(unsigned int  volatile xdata *)0xfc18)	/* PWM31T1����ֵ */
#define PWM31T2     (*(unsigned int  volatile xdata *)0xfc1a)	/* PWM31T2����ֵ */
#define PWM32T1     (*(unsigned int  volatile xdata *)0xfc20)	/* PWM32T1����ֵ */
#define PWM32T2     (*(unsigned int  volatile xdata *)0xfc22)	/* PWM32T2����ֵ */
#define PWM33T1     (*(unsigned int  volatile xdata *)0xfc28)	/* PWM33T1����ֵ */
#define PWM33T2     (*(unsigned int  volatile xdata *)0xfc2a)	/* PWM33T2����ֵ */
#define PWM34T1     (*(unsigned int  volatile xdata *)0xfc30)	/* PWM34T1����ֵ */
#define PWM34T2     (*(unsigned int  volatile xdata *)0xfc32)	/* PWM34T2����ֵ */
#define PWM35T1     (*(unsigned int  volatile xdata *)0xfc38)	/* PWM35T1����ֵ */
#define PWM35T2     (*(unsigned int  volatile xdata *)0xfc3a)	/* PWM35T2����ֵ */
#define PWM36T1     (*(unsigned int  volatile xdata *)0xfc40)	/* PWM36T1����ֵ */
#define PWM36T2     (*(unsigned int  volatile xdata *)0xfc42)	/* PWM36T2����ֵ */
#define PWM37T1     (*(unsigned int  volatile xdata *)0xfc48)	/* PWM37T1����ֵ */
#define PWM37T2     (*(unsigned int  volatile xdata *)0xfc4a)	/* PWM37T2����ֵ */
#define PWM4C       (*(unsigned int  volatile xdata *)0xfc50)	/* PWM4������ */
#define PWM4TADC    (*(unsigned int  volatile xdata *)0xfc53)	/* PWM4����ADC���� */
#define PWM40T1     (*(unsigned int  volatile xdata *)0xfc60)	/* PWM40T1����ֵ */
#define PWM40T2     (*(unsigned int  volatile xdata *)0xfc62)	/* PWM40T2����ֵ */
#define PWM41T1     (*(unsigned int  volatile xdata *)0xfc68)	/* PWM41T1����ֵ */
#define PWM41T2     (*(unsigned int  volatile xdata *)0xfc6a)	/* PWM41T2����ֵ */
#define PWM42T1     (*(unsigned int  volatile xdata *)0xfc70)	/* PWM42T1����ֵ */
#define PWM42T2     (*(unsigned int  volatile xdata *)0xfc72)	/* PWM42T2����ֵ */
#define PWM43T1     (*(unsigned int  volatile xdata *)0xfc78)	/* PWM43T1����ֵ */
#define PWM43T2     (*(unsigned int  volatile xdata *)0xfc7a)	/* PWM43T2����ֵ */
#define PWM44T1     (*(unsigned int  volatile xdata *)0xfc80)	/* PWM44T1����ֵ */
#define PWM44T2     (*(unsigned int  volatile xdata *)0xfc82)	/* PWM44T2����ֵ */
#define PWM45T1     (*(unsigned int  volatile xdata *)0xfc88)	/* PWM45T1����ֵ */
#define PWM45T2     (*(unsigned int  volatile xdata *)0xfc8a)	/* PWM45T2����ֵ */
#define PWM46T1     (*(unsigned int  volatile xdata *)0xfc90)	/* PWM46T1����ֵ */
#define PWM46T2     (*(unsigned int  volatile xdata *)0xfc92)	/* PWM46T2����ֵ */
#define PWM47T1     (*(unsigned int  volatile xdata *)0xfc98)	/* PWM47T1����ֵ */
#define PWM47T2     (*(unsigned int  volatile xdata *)0xfc9a)	/* PWM47T2����ֵ */
#define PWM5C       (*(unsigned int  volatile xdata *)0xfca0)	/* PWM4������ */
#define PWM5TADC    (*(unsigned int  volatile xdata *)0xfca3)	/* PWM4����ADC���� */
#define PWM50T1     (*(unsigned int  volatile xdata *)0xfcb0)	/* PWM40T1����ֵ */
#define PWM50T2     (*(unsigned int  volatile xdata *)0xfcb2)	/* PWM40T2����ֵ */
#define PWM51T1     (*(unsigned int  volatile xdata *)0xfcb8)	/* PWM41T1����ֵ */
#define PWM51T2     (*(unsigned int  volatile xdata *)0xfcba)	/* PWM41T2����ֵ */
#define PWM52T1     (*(unsigned int  volatile xdata *)0xfcc0)	/* PWM42T1����ֵ */
#define PWM52T2     (*(unsigned int  volatile xdata *)0xfcc2)	/* PWM42T2����ֵ */
#define PWM53T1     (*(unsigned int  volatile xdata *)0xfcc8)	/* PWM43T1����ֵ */
#define PWM53T2     (*(unsigned int  volatile xdata *)0xfcca)	/* PWM43T2����ֵ */
#define PWM54T1     (*(unsigned int  volatile xdata *)0xfcd0)	/* PWM44T1����ֵ */
#define PWM54T2     (*(unsigned int  volatile xdata *)0xfcd2)	/* PWM44T2����ֵ */
#define PWM55T1     (*(unsigned int  volatile xdata *)0xfcd8)	/* PWM45T1����ֵ */
#define PWM55T2     (*(unsigned int  volatile xdata *)0xfcda)	/* PWM45T2����ֵ */
#define PWM56T1     (*(unsigned int  volatile xdata *)0xfce0)	/* PWM46T1����ֵ */
#define PWM56T2     (*(unsigned int  volatile xdata *)0xfce2)	/* PWM46T2����ֵ */
#define PWM57T1     (*(unsigned int  volatile xdata *)0xfce8)	/* PWM47T1����ֵ */
#define PWM57T2     (*(unsigned int  volatile xdata *)0xfcea)	/* PWM47T2����ֵ */

#define PWM0CH      (*(unsigned char volatile xdata *)0xff00)	/* PWM0���������ֽ� */
#define PWM0CL      (*(unsigned char volatile xdata *)0xff01)	/* PWM0���������ֽ� */
#define PWM0CKS     (*(unsigned char volatile xdata *)0xff02)	/* PWM0ʱ��ѡ�� */
#define PWM0TADCH   (*(unsigned char volatile xdata *)0xff03)	/* PWM0����ADC�������ֽ� */
#define PWM0TADCL   (*(unsigned char volatile xdata *)0xff04)	/* PWM0����ADC�������ֽ� */
#define PWM0IF      (*(unsigned char volatile xdata *)0xff05)	/* PWM0�жϱ�־�Ĵ���    */
#define PWM0FDCR    (*(unsigned char volatile xdata *)0xff06)	/* PWM0�쳣�����ƼĴ��� */

#define PWM00T1H    (*(unsigned char volatile xdata *)0xff10)	/* PWM00T1����ֵ���ֽ� */
#define PWM00T1L    (*(unsigned char volatile xdata *)0xff11)	/* PWM00T1����ֵ���ֽ� */
#define PWM00T2H    (*(unsigned char volatile xdata *)0xff12)	/* PWM00T2����ֵ���ֽ� */
#define PWM00T2L    (*(unsigned char volatile xdata *)0xff13)	/* PWM00T2����ֵ���ֽ� */
#define PWM00CR     (*(unsigned char volatile xdata *)0xff14)	/* PWM00���ƼĴ���     */
#define PWM00HLD    (*(unsigned char volatile xdata *)0xff15)	/* PWM00��ƽ���ֿ��ƼĴ��� */

#define PWM01T1H    (*(unsigned char volatile xdata *)0xff18)	/* PWM01T1����ֵ���ֽ� */
#define PWM01T1L    (*(unsigned char volatile xdata *)0xff19)	/* PWM01T1����ֵ���ֽ� */
#define PWM01T2H    (*(unsigned char volatile xdata *)0xff1a)	/* PWM01T2����ֵ���ֽ� */
#define PWM01T2L    (*(unsigned char volatile xdata *)0xff1b)	/* PWM01T2����ֵ���ֽ� */
#define PWM01CR     (*(unsigned char volatile xdata *)0xff1c)	/* PWM01���ƼĴ���     */
#define PWM01HLD    (*(unsigned char volatile xdata *)0xff1d)	/* PWM01��ƽ���ֿ��ƼĴ��� */

#define PWM02T1H    (*(unsigned char volatile xdata *)0xff20)	/* PWM02T1����ֵ���ֽ� */
#define PWM02T1L    (*(unsigned char volatile xdata *)0xff21)	/* PWM02T1����ֵ���ֽ� */
#define PWM02T2H    (*(unsigned char volatile xdata *)0xff22)	/* PWM02T2����ֵ���ֽ� */
#define PWM02T2L    (*(unsigned char volatile xdata *)0xff23)	/* PWM02T2����ֵ���ֽ� */
#define PWM02CR     (*(unsigned char volatile xdata *)0xff24)	/* PWM02���ƼĴ���     */
#define PWM02HLD    (*(unsigned char volatile xdata *)0xff25)	/* PWM02��ƽ���ֿ��ƼĴ��� */

#define PWM03T1H    (*(unsigned char volatile xdata *)0xff28)	/* PWM03T1����ֵ���ֽ� */
#define PWM03T1L    (*(unsigned char volatile xdata *)0xff29)	/* PWM03T1����ֵ���ֽ� */
#define PWM03T2H    (*(unsigned char volatile xdata *)0xff2a)	/* PWM03T2����ֵ���ֽ� */
#define PWM03T2L    (*(unsigned char volatile xdata *)0xff2b)	/* PWM03T2����ֵ���ֽ� */
#define PWM03CR     (*(unsigned char volatile xdata *)0xff2c)	/* PWM03���ƼĴ���     */
#define PWM03HLD    (*(unsigned char volatile xdata *)0xff2d)	/* PWM03��ƽ���ֿ��ƼĴ��� */

#define PWM04T1H    (*(unsigned char volatile xdata *)0xff30)	/* PWM04T1����ֵ���ֽ� */
#define PWM04T1L    (*(unsigned char volatile xdata *)0xff31)	/* PWM04T1����ֵ���ֽ� */
#define PWM04T2H    (*(unsigned char volatile xdata *)0xff32)	/* PWM04T2����ֵ���ֽ� */
#define PWM04T2L    (*(unsigned char volatile xdata *)0xff33)	/* PWM04T2����ֵ���ֽ� */
#define PWM04CR     (*(unsigned char volatile xdata *)0xff34)	/* PWM04���ƼĴ���     */
#define PWM04HLD    (*(unsigned char volatile xdata *)0xff35)	/* PWM04��ƽ���ֿ��ƼĴ��� */

#define PWM05T1H    (*(unsigned char volatile xdata *)0xff38)	/* PWM05T1����ֵ���ֽ� */
#define PWM05T1L    (*(unsigned char volatile xdata *)0xff39)	/* PWM05T1����ֵ���ֽ� */
#define PWM05T2H    (*(unsigned char volatile xdata *)0xff3a)	/* PWM05T2����ֵ���ֽ� */
#define PWM05T2L    (*(unsigned char volatile xdata *)0xff3b)	/* PWM05T2����ֵ���ֽ� */
#define PWM05CR     (*(unsigned char volatile xdata *)0xff3c)	/* PWM05���ƼĴ���     */
#define PWM05HLD    (*(unsigned char volatile xdata *)0xff3d)	/* PWM05��ƽ���ֿ��ƼĴ��� */

#define PWM06T1H    (*(unsigned char volatile xdata *)0xff40)	/* PWM06T1����ֵ���ֽ� */
#define PWM06T1L    (*(unsigned char volatile xdata *)0xff41)	/* PWM06T1����ֵ���ֽ� */
#define PWM06T2H    (*(unsigned char volatile xdata *)0xff42)	/* PWM06T2����ֵ���ֽ� */
#define PWM06T2L    (*(unsigned char volatile xdata *)0xff43)	/* PWM06T2����ֵ���ֽ� */
#define PWM06CR     (*(unsigned char volatile xdata *)0xff44)	/* PWM06���ƼĴ���     */
#define PWM06HLD    (*(unsigned char volatile xdata *)0xff45)	/* PWM06��ƽ���ֿ��ƼĴ��� */

#define PWM07T1H    (*(unsigned char volatile xdata *)0xff48)	/* PWM07T1����ֵ���ֽ� */
#define PWM07T1L    (*(unsigned char volatile xdata *)0xff49)	/* PWM07T1����ֵ���ֽ� */
#define PWM07T2H    (*(unsigned char volatile xdata *)0xff4a)	/* PWM07T2����ֵ���ֽ� */
#define PWM07T2L    (*(unsigned char volatile xdata *)0xff4b)	/* PWM07T2����ֵ���ֽ� */
#define PWM07CR     (*(unsigned char volatile xdata *)0xff4c)	/* PWM07���ƼĴ���     */
#define PWM07HLD    (*(unsigned char volatile xdata *)0xff4d)	/* PWM07��ƽ���ֿ��ƼĴ��� */

#define PWM1CH      (*(unsigned char volatile xdata *)0xff50)	/* PWM1���������ֽ� */
#define PWM1CL      (*(unsigned char volatile xdata *)0xff51)	/* PWM1���������ֽ� */
#define PWM1CKS     (*(unsigned char volatile xdata *)0xff52)	/* PWM1ʱ��ѡ�� */
#define PWM1TADCH   (*(unsigned char volatile xdata *)0xff53)	/* PWM1����ADC�������ֽ� */
#define PWM1TADCL   (*(unsigned char volatile xdata *)0xff54)	/* PWM1����ADC�������ֽ� */
#define PWM1IF      (*(unsigned char volatile xdata *)0xff55)	/* PWM1�жϱ�־�Ĵ���    */
#define PWM1FDCR    (*(unsigned char volatile xdata *)0xff56)	/* PWM1�쳣�����ƼĴ��� */

#define PWM10T1H    (*(unsigned char volatile xdata *)0xff60)	/* PWM10T1����ֵ���ֽ� */
#define PWM10T1L    (*(unsigned char volatile xdata *)0xff61)	/* PWM10T1����ֵ���ֽ� */
#define PWM10T2H    (*(unsigned char volatile xdata *)0xff62)	/* PWM10T2����ֵ���ֽ� */
#define PWM10T2L    (*(unsigned char volatile xdata *)0xff63)	/* PWM10T2����ֵ���ֽ� */
#define PWM10CR     (*(unsigned char volatile xdata *)0xff64)	/* PWM10���ƼĴ���     */
#define PWM10HLD    (*(unsigned char volatile xdata *)0xff65)	/* PWM10��ƽ���ֿ��ƼĴ��� */

#define PWM11T1H    (*(unsigned char volatile xdata *)0xff68)	/* PWM11T1����ֵ���ֽ� */
#define PWM11T1L    (*(unsigned char volatile xdata *)0xff69)	/* PWM11T1����ֵ���ֽ� */
#define PWM11T2H    (*(unsigned char volatile xdata *)0xff6a)	/* PWM11T2����ֵ���ֽ� */
#define PWM11T2L    (*(unsigned char volatile xdata *)0xff6b)	/* PWM11T2����ֵ���ֽ� */
#define PWM11CR     (*(unsigned char volatile xdata *)0xff6c)	/* PWM11���ƼĴ���     */
#define PWM11HLD    (*(unsigned char volatile xdata *)0xff6d)	/* PWM11��ƽ���ֿ��ƼĴ��� */

#define PWM12T1H    (*(unsigned char volatile xdata *)0xff70)	/* PWM12T1����ֵ���ֽ� */
#define PWM12T1L    (*(unsigned char volatile xdata *)0xff71)	/* PWM12T1����ֵ���ֽ� */
#define PWM12T2H    (*(unsigned char volatile xdata *)0xff72)	/* PWM12T2����ֵ���ֽ� */
#define PWM12T2L    (*(unsigned char volatile xdata *)0xff73)	/* PWM12T2����ֵ���ֽ� */
#define PWM12CR     (*(unsigned char volatile xdata *)0xff74)	/* PWM12���ƼĴ���     */
#define PWM12HLD    (*(unsigned char volatile xdata *)0xff75)	/* PWM12��ƽ���ֿ��ƼĴ��� */

#define PWM13T1H    (*(unsigned char volatile xdata *)0xff78)	/* PWM13T1����ֵ���ֽ� */
#define PWM13T1L    (*(unsigned char volatile xdata *)0xff79)	/* PWM13T1����ֵ���ֽ� */
#define PWM13T2H    (*(unsigned char volatile xdata *)0xff7a)	/* PWM13T2����ֵ���ֽ� */
#define PWM13T2L    (*(unsigned char volatile xdata *)0xff7b)	/* PWM13T2����ֵ���ֽ� */
#define PWM13CR     (*(unsigned char volatile xdata *)0xff7c)	/* PWM13���ƼĴ���     */
#define PWM13HLD    (*(unsigned char volatile xdata *)0xff7d)	/* PWM13��ƽ���ֿ��ƼĴ��� */

#define PWM14T1H    (*(unsigned char volatile xdata *)0xff80)	/* PWM14T1����ֵ���ֽ� */
#define PWM14T1L    (*(unsigned char volatile xdata *)0xff81)	/* PWM14T1����ֵ���ֽ� */
#define PWM14T2H    (*(unsigned char volatile xdata *)0xff82)	/* PWM14T2����ֵ���ֽ� */
#define PWM14T2L    (*(unsigned char volatile xdata *)0xff83)	/* PWM14T2����ֵ���ֽ� */
#define PWM14CR     (*(unsigned char volatile xdata *)0xff84)	/* PWM14���ƼĴ���     */
#define PWM14HLD    (*(unsigned char volatile xdata *)0xff85)	/* PWM14��ƽ���ֿ��ƼĴ��� */

#define PWM15T1H    (*(unsigned char volatile xdata *)0xff88)	/* PWM15T1����ֵ���ֽ� */
#define PWM15T1L    (*(unsigned char volatile xdata *)0xff89)	/* PWM15T1����ֵ���ֽ� */
#define PWM15T2H    (*(unsigned char volatile xdata *)0xff8a)	/* PWM15T2����ֵ���ֽ� */
#define PWM15T2L    (*(unsigned char volatile xdata *)0xff8b)	/* PWM15T2����ֵ���ֽ� */
#define PWM15CR     (*(unsigned char volatile xdata *)0xff8c)	/* PWM15���ƼĴ���     */
#define PWM15HLD    (*(unsigned char volatile xdata *)0xff8d)	/* PWM15��ƽ���ֿ��ƼĴ��� */

#define PWM16T1H    (*(unsigned char volatile xdata *)0xff90)	/* PWM16T1����ֵ���ֽ� */
#define PWM16T1L    (*(unsigned char volatile xdata *)0xff91)	/* PWM16T1����ֵ���ֽ� */
#define PWM16T2H    (*(unsigned char volatile xdata *)0xff92)	/* PWM16T2����ֵ���ֽ� */
#define PWM16T2L    (*(unsigned char volatile xdata *)0xff93)	/* PWM16T2����ֵ���ֽ� */
#define PWM16CR     (*(unsigned char volatile xdata *)0xff94)	/* PWM16���ƼĴ���     */
#define PWM16HLD    (*(unsigned char volatile xdata *)0xff95)	/* PWM16��ƽ���ֿ��ƼĴ��� */

#define PWM17T1H    (*(unsigned char volatile xdata *)0xff98)	/* PWM17T1����ֵ���ֽ� */
#define PWM17T1L    (*(unsigned char volatile xdata *)0xff99)	/* PWM17T1����ֵ���ֽ� */
#define PWM17T2H    (*(unsigned char volatile xdata *)0xff9a)	/* PWM17T2����ֵ���ֽ� */
#define PWM17T2L    (*(unsigned char volatile xdata *)0xff9b)	/* PWM17T2����ֵ���ֽ� */
#define PWM17CR     (*(unsigned char volatile xdata *)0xff9c)	/* PWM17���ƼĴ���     */
#define PWM17HLD    (*(unsigned char volatile xdata *)0xff9d)	/* PWM17��ƽ���ֿ��ƼĴ��� */

#define PWM2CH      (*(unsigned char volatile xdata *)0xffa0)	/* PWM2���������ֽ� */
#define PWM2CL      (*(unsigned char volatile xdata *)0xffa1)	/* PWM2���������ֽ� */
#define PWM2CKS     (*(unsigned char volatile xdata *)0xffa2)	/* PWM2ʱ��ѡ�� */
#define PWM2TADCH   (*(unsigned char volatile xdata *)0xffa3)	/* PWM2����ADC�������ֽ� */
#define PWM2TADCL   (*(unsigned char volatile xdata *)0xffa4)	/* PWM2����ADC�������ֽ� */
#define PWM2IF      (*(unsigned char volatile xdata *)0xffa5)	/* PWM2�жϱ�־�Ĵ���    */
#define PWM2FDCR    (*(unsigned char volatile xdata *)0xffa6)	/* PWM2�쳣�����ƼĴ��� */

#define PWM20T1H    (*(unsigned char volatile xdata *)0xffb0)	/* PWM20T1����ֵ���ֽ� */
#define PWM20T1L    (*(unsigned char volatile xdata *)0xffb1)	/* PWM20T1����ֵ���ֽ� */
#define PWM20T2H    (*(unsigned char volatile xdata *)0xffb2)	/* PWM20T2����ֵ���ֽ� */
#define PWM20T2L    (*(unsigned char volatile xdata *)0xffb3)	/* PWM20T2����ֵ���ֽ� */
#define PWM20CR     (*(unsigned char volatile xdata *)0xffb4)	/* PWM20���ƼĴ���     */
#define PWM20HLD    (*(unsigned char volatile xdata *)0xffb5)	/* PWM20��ƽ���ֿ��ƼĴ��� */

#define PWM21T1H    (*(unsigned char volatile xdata *)0xffb8)	/* PWM21T1����ֵ���ֽ� */
#define PWM21T1L    (*(unsigned char volatile xdata *)0xffb9)	/* PWM21T1����ֵ���ֽ� */
#define PWM21T2H    (*(unsigned char volatile xdata *)0xffba)	/* PWM21T2����ֵ���ֽ� */
#define PWM21T2L    (*(unsigned char volatile xdata *)0xffbb)	/* PWM21T2����ֵ���ֽ� */
#define PWM21CR     (*(unsigned char volatile xdata *)0xffbc)	/* PWM21���ƼĴ���     */
#define PWM21HLD    (*(unsigned char volatile xdata *)0xffbd)	/* PWM21��ƽ���ֿ��ƼĴ��� */

#define PWM22T1H    (*(unsigned char volatile xdata *)0xffc0)	/* PWM22T1����ֵ���ֽ� */
#define PWM22T1L    (*(unsigned char volatile xdata *)0xffc1)	/* PWM22T1����ֵ���ֽ� */
#define PWM22T2H    (*(unsigned char volatile xdata *)0xffc2)	/* PWM22T2����ֵ���ֽ� */
#define PWM22T2L    (*(unsigned char volatile xdata *)0xffc3)	/* PWM22T2����ֵ���ֽ� */
#define PWM22CR     (*(unsigned char volatile xdata *)0xffc4)	/* PWM22���ƼĴ���     */
#define PWM22HLD    (*(unsigned char volatile xdata *)0xffc5)	/* PWM22��ƽ���ֿ��ƼĴ��� */

#define PWM23T1H    (*(unsigned char volatile xdata *)0xffc8)	/* PWM23T1����ֵ���ֽ� */
#define PWM23T1L    (*(unsigned char volatile xdata *)0xffc9)	/* PWM23T1����ֵ���ֽ� */
#define PWM23T2H    (*(unsigned char volatile xdata *)0xffca)	/* PWM23T2����ֵ���ֽ� */
#define PWM23T2L    (*(unsigned char volatile xdata *)0xffcb)	/* PWM23T2����ֵ���ֽ� */
#define PWM23CR     (*(unsigned char volatile xdata *)0xffcc)	/* PWM23���ƼĴ���     */
#define PWM23HLD    (*(unsigned char volatile xdata *)0xffcd)	/* PWM23��ƽ���ֿ��ƼĴ��� */

#define PWM24T1H    (*(unsigned char volatile xdata *)0xffd0)	/* PWM24T1����ֵ���ֽ� */
#define PWM24T1L    (*(unsigned char volatile xdata *)0xffd1)	/* PWM24T1����ֵ���ֽ� */
#define PWM24T2H    (*(unsigned char volatile xdata *)0xffd2)	/* PWM24T2����ֵ���ֽ� */
#define PWM24T2L    (*(unsigned char volatile xdata *)0xffd3)	/* PWM24T2����ֵ���ֽ� */
#define PWM24CR     (*(unsigned char volatile xdata *)0xffd4)	/* PWM24���ƼĴ���     */
#define PWM24HLD    (*(unsigned char volatile xdata *)0xffd5)	/* PWM24��ƽ���ֿ��ƼĴ��� */

#define PWM25T1H    (*(unsigned char volatile xdata *)0xffd8)	/* PWM25T1����ֵ���ֽ� */
#define PWM25T1L    (*(unsigned char volatile xdata *)0xffd9)	/* PWM25T1����ֵ���ֽ� */
#define PWM25T2H    (*(unsigned char volatile xdata *)0xffda)	/* PWM25T2����ֵ���ֽ� */
#define PWM25T2L    (*(unsigned char volatile xdata *)0xffdb)	/* PWM25T2����ֵ���ֽ� */
#define PWM25CR     (*(unsigned char volatile xdata *)0xffdc)	/* PWM25���ƼĴ���     */
#define PWM25HLD    (*(unsigned char volatile xdata *)0xffdd)	/* PWM25��ƽ���ֿ��ƼĴ��� */

#define PWM26T1H    (*(unsigned char volatile xdata *)0xffe0)	/* PWM26T1����ֵ���ֽ� */
#define PWM26T1L    (*(unsigned char volatile xdata *)0xffe1)	/* PWM26T1����ֵ���ֽ� */
#define PWM26T2H    (*(unsigned char volatile xdata *)0xffe2)	/* PWM26T2����ֵ���ֽ� */
#define PWM26T2L    (*(unsigned char volatile xdata *)0xffe3)	/* PWM26T2����ֵ���ֽ� */
#define PWM26CR     (*(unsigned char volatile xdata *)0xffe4)	/* PWM26���ƼĴ���     */
#define PWM26HLD    (*(unsigned char volatile xdata *)0xffe5)	/* PWM26��ƽ���ֿ��ƼĴ��� */

#define PWM27T1H    (*(unsigned char volatile xdata *)0xffe8)	/* PWM27T1����ֵ���ֽ� */
#define PWM27T1L    (*(unsigned char volatile xdata *)0xffe9)	/* PWM27T1����ֵ���ֽ� */
#define PWM27T2H    (*(unsigned char volatile xdata *)0xffea)	/* PWM27T2����ֵ���ֽ� */
#define PWM27T2L    (*(unsigned char volatile xdata *)0xffeb)	/* PWM27T2����ֵ���ֽ� */
#define PWM27CR     (*(unsigned char volatile xdata *)0xffec)	/* PWM27���ƼĴ���     */
#define PWM27HLD    (*(unsigned char volatile xdata *)0xffed)	/* PWM27��ƽ���ֿ��ƼĴ��� */

#define PWM3CH      (*(unsigned char volatile xdata *)0xfc00)	/* PWM3���������ֽ� */
#define PWM3CL      (*(unsigned char volatile xdata *)0xfc01)	/* PWM3���������ֽ� */
#define PWM3CKS     (*(unsigned char volatile xdata *)0xfc02)	/* PWM3ʱ��ѡ�� */
#define PWM3TADCH   (*(unsigned char volatile xdata *)0xfc03)	/* PWM3����ADC�������ֽ� */
#define PWM3TADCL   (*(unsigned char volatile xdata *)0xfc04)	/* PWM3����ADC�������ֽ� */
#define PWM3IF      (*(unsigned char volatile xdata *)0xfc05)	/* PWM3�жϱ�־�Ĵ���    */
#define PWM3FDCR    (*(unsigned char volatile xdata *)0xfc06)	/* PWM3�쳣�����ƼĴ��� */

#define PWM30T1H    (*(unsigned char volatile xdata *)0xfc10)	/* PWM30T1����ֵ���ֽ� */
#define PWM30T1L    (*(unsigned char volatile xdata *)0xfc11)	/* PWM30T1����ֵ���ֽ� */
#define PWM30T2H    (*(unsigned char volatile xdata *)0xfc12)	/* PWM30T2����ֵ���ֽ� */
#define PWM30T2L    (*(unsigned char volatile xdata *)0xfc13)	/* PWM30T2����ֵ���ֽ� */
#define PWM30CR     (*(unsigned char volatile xdata *)0xfc14)	/* PWM30���ƼĴ���     */
#define PWM30HLD    (*(unsigned char volatile xdata *)0xfc15)	/* PWM30��ƽ���ֿ��ƼĴ��� */

#define PWM31T1H    (*(unsigned char volatile xdata *)0xfc18)	/* PWM31T1����ֵ���ֽ� */
#define PWM31T1L    (*(unsigned char volatile xdata *)0xfc19)	/* PWM31T1����ֵ���ֽ� */
#define PWM31T2H    (*(unsigned char volatile xdata *)0xfc1a)	/* PWM31T2����ֵ���ֽ� */
#define PWM31T2L    (*(unsigned char volatile xdata *)0xfc1b)	/* PWM31T2����ֵ���ֽ� */
#define PWM31CR     (*(unsigned char volatile xdata *)0xfc1c)	/* PWM31���ƼĴ���     */
#define PWM31HLD    (*(unsigned char volatile xdata *)0xfc1d)	/* PWM31��ƽ���ֿ��ƼĴ��� */

#define PWM32T1H    (*(unsigned char volatile xdata *)0xfc20)	/* PWM32T1����ֵ���ֽ� */
#define PWM32T1L    (*(unsigned char volatile xdata *)0xfc21)	/* PWM32T1����ֵ���ֽ� */
#define PWM32T2H    (*(unsigned char volatile xdata *)0xfc22)	/* PWM32T2����ֵ���ֽ� */
#define PWM32T2L    (*(unsigned char volatile xdata *)0xfc23)	/* PWM32T2����ֵ���ֽ� */
#define PWM32CR     (*(unsigned char volatile xdata *)0xfc24)	/* PWM32���ƼĴ���     */
#define PWM32HLD    (*(unsigned char volatile xdata *)0xfc25)	/* PWM32��ƽ���ֿ��ƼĴ��� */

#define PWM33T1H    (*(unsigned char volatile xdata *)0xfc28)	/* PWM33T1����ֵ���ֽ� */
#define PWM33T1L    (*(unsigned char volatile xdata *)0xfc29)	/* PWM33T1����ֵ���ֽ� */
#define PWM33T2H    (*(unsigned char volatile xdata *)0xfc2a)	/* PWM33T2����ֵ���ֽ� */
#define PWM33T2L    (*(unsigned char volatile xdata *)0xfc2b)	/* PWM33T2����ֵ���ֽ� */
#define PWM33CR     (*(unsigned char volatile xdata *)0xfc2c)	/* PWM33���ƼĴ���     */
#define PWM33HLD    (*(unsigned char volatile xdata *)0xfc2d)	/* PWM33��ƽ���ֿ��ƼĴ��� */

#define PWM34T1H    (*(unsigned char volatile xdata *)0xfc30)	/* PWM34T1����ֵ���ֽ� */
#define PWM34T1L    (*(unsigned char volatile xdata *)0xfc31)	/* PWM34T1����ֵ���ֽ� */
#define PWM34T2H    (*(unsigned char volatile xdata *)0xfc32)	/* PWM34T2����ֵ���ֽ� */
#define PWM34T2L    (*(unsigned char volatile xdata *)0xfc33)	/* PWM34T2����ֵ���ֽ� */
#define PWM34CR     (*(unsigned char volatile xdata *)0xfc34)	/* PWM34���ƼĴ���     */
#define PWM34HLD    (*(unsigned char volatile xdata *)0xfc35)	/* PWM34��ƽ���ֿ��ƼĴ��� */

#define PWM35T1H    (*(unsigned char volatile xdata *)0xfc38)	/* PWM35T1����ֵ���ֽ� */
#define PWM35T1L    (*(unsigned char volatile xdata *)0xfc39)	/* PWM35T1����ֵ���ֽ� */
#define PWM35T2H    (*(unsigned char volatile xdata *)0xfc3a)	/* PWM35T2����ֵ���ֽ� */
#define PWM35T2L    (*(unsigned char volatile xdata *)0xfc3b)	/* PWM35T2����ֵ���ֽ� */
#define PWM35CR     (*(unsigned char volatile xdata *)0xfc3c)	/* PWM35���ƼĴ���     */
#define PWM35HLD    (*(unsigned char volatile xdata *)0xfc3d)	/* PWM35��ƽ���ֿ��ƼĴ��� */

#define PWM36T1H    (*(unsigned char volatile xdata *)0xfc40)	/* PWM36T1����ֵ���ֽ� */
#define PWM36T1L    (*(unsigned char volatile xdata *)0xfc41)	/* PWM36T1����ֵ���ֽ� */
#define PWM36T2H    (*(unsigned char volatile xdata *)0xfc42)	/* PWM36T2����ֵ���ֽ� */
#define PWM36T2L    (*(unsigned char volatile xdata *)0xfc43)	/* PWM36T2����ֵ���ֽ� */
#define PWM36CR     (*(unsigned char volatile xdata *)0xfc44)	/* PWM36���ƼĴ���     */
#define PWM36HLD    (*(unsigned char volatile xdata *)0xfc45)	/* PWM36��ƽ���ֿ��ƼĴ��� */

#define PWM37T1H    (*(unsigned char volatile xdata *)0xfc48)	/* PWM37T1����ֵ���ֽ� */
#define PWM37T1L    (*(unsigned char volatile xdata *)0xfc49)	/* PWM37T1����ֵ���ֽ� */
#define PWM37T2H    (*(unsigned char volatile xdata *)0xfc4a)	/* PWM37T2����ֵ���ֽ� */
#define PWM37T2L    (*(unsigned char volatile xdata *)0xfc4b)	/* PWM37T2����ֵ���ֽ� */
#define PWM37CR     (*(unsigned char volatile xdata *)0xfc4c)	/* PWM37���ƼĴ���     */
#define PWM37HLD    (*(unsigned char volatile xdata *)0xfc4d)	/* PWM37��ƽ���ֿ��ƼĴ��� */

#define PWM4CH      (*(unsigned char volatile xdata *)0xfc50)	/* PWM4���������ֽ� */
#define PWM4CL      (*(unsigned char volatile xdata *)0xfc51)	/* PWM4���������ֽ� */
#define PWM4CKS     (*(unsigned char volatile xdata *)0xfc52)	/* PWM4ʱ��ѡ�� */
#define PWM4TADCH   (*(unsigned char volatile xdata *)0xfc53)	/* PWM4����ADC�������ֽ� */
#define PWM4TADCL   (*(unsigned char volatile xdata *)0xfc54)	/* PWM4����ADC�������ֽ� */
#define PWM4IF      (*(unsigned char volatile xdata *)0xfc55)	/* PWM4�жϱ�־�Ĵ���    */
#define PWM4FDCR    (*(unsigned char volatile xdata *)0xfc56)	/* PWM4�쳣�����ƼĴ��� */

#define PWM40T1H    (*(unsigned char volatile xdata *)0xfc60)	/* PWM40T1����ֵ���ֽ� */
#define PWM40T1L    (*(unsigned char volatile xdata *)0xfc61)	/* PWM40T1����ֵ���ֽ� */
#define PWM40T2H    (*(unsigned char volatile xdata *)0xfc62)	/* PWM40T2����ֵ���ֽ� */
#define PWM40T2L    (*(unsigned char volatile xdata *)0xfc63)	/* PWM40T2����ֵ���ֽ� */
#define PWM40CR     (*(unsigned char volatile xdata *)0xfc64)	/* PWM40���ƼĴ���     */
#define PWM40HLD    (*(unsigned char volatile xdata *)0xfc65)	/* PWM40��ƽ���ֿ��ƼĴ��� */

#define PWM41T1H    (*(unsigned char volatile xdata *)0xfc68)	/* PWM41T1����ֵ���ֽ� */
#define PWM41T1L    (*(unsigned char volatile xdata *)0xfc69)	/* PWM41T1����ֵ���ֽ� */
#define PWM41T2H    (*(unsigned char volatile xdata *)0xfc6a)	/* PWM41T2����ֵ���ֽ� */
#define PWM41T2L    (*(unsigned char volatile xdata *)0xfc6b)	/* PWM41T2����ֵ���ֽ� */
#define PWM41CR     (*(unsigned char volatile xdata *)0xfc6c)	/* PWM41���ƼĴ���     */
#define PWM41HLD    (*(unsigned char volatile xdata *)0xfc6d)	/* PWM41��ƽ���ֿ��ƼĴ��� */

#define PWM42T1H    (*(unsigned char volatile xdata *)0xfc70)	/* PWM42T1����ֵ���ֽ� */
#define PWM42T1L    (*(unsigned char volatile xdata *)0xfc71)	/* PWM42T1����ֵ���ֽ� */
#define PWM42T2H    (*(unsigned char volatile xdata *)0xfc72)	/* PWM42T2����ֵ���ֽ� */
#define PWM42T2L    (*(unsigned char volatile xdata *)0xfc73)	/* PWM42T2����ֵ���ֽ� */
#define PWM42CR     (*(unsigned char volatile xdata *)0xfc74)	/* PWM42���ƼĴ���     */
#define PWM42HLD    (*(unsigned char volatile xdata *)0xfc75)	/* PWM42��ƽ���ֿ��ƼĴ��� */

#define PWM43T1H    (*(unsigned char volatile xdata *)0xfc78)	/* PWM43T1����ֵ���ֽ� */
#define PWM43T1L    (*(unsigned char volatile xdata *)0xfc79)	/* PWM43T1����ֵ���ֽ� */
#define PWM43T2H    (*(unsigned char volatile xdata *)0xfc7a)	/* PWM43T2����ֵ���ֽ� */
#define PWM43T2L    (*(unsigned char volatile xdata *)0xfc7b)	/* PWM43T2����ֵ���ֽ� */
#define PWM43CR     (*(unsigned char volatile xdata *)0xfc7c)	/* PWM43���ƼĴ���     */
#define PWM43HLD    (*(unsigned char volatile xdata *)0xfc7d)	/* PWM43��ƽ���ֿ��ƼĴ��� */

#define PWM44T1H    (*(unsigned char volatile xdata *)0xfc80)	/* PWM44T1����ֵ���ֽ� */
#define PWM44T1L    (*(unsigned char volatile xdata *)0xfc81)	/* PWM44T1����ֵ���ֽ� */
#define PWM44T2H    (*(unsigned char volatile xdata *)0xfc82)	/* PWM44T2����ֵ���ֽ� */
#define PWM44T2L    (*(unsigned char volatile xdata *)0xfc83)	/* PWM44T2����ֵ���ֽ� */
#define PWM44CR     (*(unsigned char volatile xdata *)0xfc84)	/* PWM44���ƼĴ���     */
#define PWM44HLD    (*(unsigned char volatile xdata *)0xfc85)	/* PWM44��ƽ���ֿ��ƼĴ��� */

#define PWM45T1H    (*(unsigned char volatile xdata *)0xfc88)	/* PWM45T1����ֵ���ֽ� */
#define PWM45T1L    (*(unsigned char volatile xdata *)0xfc89)	/* PWM45T1����ֵ���ֽ� */
#define PWM45T2H    (*(unsigned char volatile xdata *)0xfc8a)	/* PWM45T2����ֵ���ֽ� */
#define PWM45T2L    (*(unsigned char volatile xdata *)0xfc8b)	/* PWM45T2����ֵ���ֽ� */
#define PWM45CR     (*(unsigned char volatile xdata *)0xfc8c)	/* PWM45���ƼĴ���     */
#define PWM45HLD    (*(unsigned char volatile xdata *)0xfc8d)	/* PWM45��ƽ���ֿ��ƼĴ��� */

#define PWM46T1H    (*(unsigned char volatile xdata *)0xfc90)	/* PWM46T1����ֵ���ֽ� */
#define PWM46T1L    (*(unsigned char volatile xdata *)0xfc91)	/* PWM46T1����ֵ���ֽ� */
#define PWM46T2H    (*(unsigned char volatile xdata *)0xfc92)	/* PWM46T2����ֵ���ֽ� */
#define PWM46T2L    (*(unsigned char volatile xdata *)0xfc93)	/* PWM46T2����ֵ���ֽ� */
#define PWM46CR     (*(unsigned char volatile xdata *)0xfc94)	/* PWM46���ƼĴ���     */
#define PWM46HLD    (*(unsigned char volatile xdata *)0xfc95)	/* PWM46��ƽ���ֿ��ƼĴ��� */

#define PWM47T1H    (*(unsigned char volatile xdata *)0xfc98)	/* PWM47T1����ֵ���ֽ� */
#define PWM47T1L    (*(unsigned char volatile xdata *)0xfc99)	/* PWM47T1����ֵ���ֽ� */
#define PWM47T2H    (*(unsigned char volatile xdata *)0xfc9a)	/* PWM47T2����ֵ���ֽ� */
#define PWM47T2L    (*(unsigned char volatile xdata *)0xfc9b)	/* PWM47T2����ֵ���ֽ� */
#define PWM47CR     (*(unsigned char volatile xdata *)0xfc9c)	/* PWM47���ƼĴ���     */
#define PWM47HLD    (*(unsigned char volatile xdata *)0xfc9d)	/* PWM47��ƽ���ֿ��ƼĴ��� */

#define PWM5CH      (*(unsigned char volatile xdata *)0xfca0)	/* PWM5���������ֽ� */
#define PWM5CL      (*(unsigned char volatile xdata *)0xfca1)	/* PWM5���������ֽ� */
#define PWM5CKS     (*(unsigned char volatile xdata *)0xfca2)	/* PWM5ʱ��ѡ�� */
#define PWM5TADCH   (*(unsigned char volatile xdata *)0xfca3)	/* PWM5����ADC�������ֽ� */
#define PWM5TADCL   (*(unsigned char volatile xdata *)0xfca4)	/* PWM5����ADC�������ֽ� */
#define PWM5IF      (*(unsigned char volatile xdata *)0xfca5)	/* PWM5�жϱ�־�Ĵ���    */
#define PWM5FDCR    (*(unsigned char volatile xdata *)0xfca6)	/* PWM5�쳣�����ƼĴ��� */

#define PWM50T1H    (*(unsigned char volatile xdata *)0xfcb0)	/* PWM50T1����ֵ���ֽ� */
#define PWM50T1L    (*(unsigned char volatile xdata *)0xfcb1)	/* PWM50T1����ֵ���ֽ� */
#define PWM50T2H    (*(unsigned char volatile xdata *)0xfcb2)	/* PWM50T2����ֵ���ֽ� */
#define PWM50T2L    (*(unsigned char volatile xdata *)0xfcb3)	/* PWM50T2����ֵ���ֽ� */
#define PWM50CR     (*(unsigned char volatile xdata *)0xfcb4)	/* PWM50���ƼĴ���     */
#define PWM50HLD    (*(unsigned char volatile xdata *)0xfcb5)	/* PWM50��ƽ���ֿ��ƼĴ��� */

#define PWM51T1H    (*(unsigned char volatile xdata *)0xfcb8)	/* PWM51T1����ֵ���ֽ� */
#define PWM51T1L    (*(unsigned char volatile xdata *)0xfcb9)	/* PWM51T1����ֵ���ֽ� */
#define PWM51T2H    (*(unsigned char volatile xdata *)0xfcba)	/* PWM51T2����ֵ���ֽ� */
#define PWM51T2L    (*(unsigned char volatile xdata *)0xfcbb)	/* PWM51T2����ֵ���ֽ� */
#define PWM51CR     (*(unsigned char volatile xdata *)0xfcbc)	/* PWM51���ƼĴ���     */
#define PWM51HLD    (*(unsigned char volatile xdata *)0xfcbd)	/* PWM51��ƽ���ֿ��ƼĴ��� */

#define PWM52T1H    (*(unsigned char volatile xdata *)0xfcc0)	/* PWM52T1����ֵ���ֽ� */
#define PWM52T1L    (*(unsigned char volatile xdata *)0xfcc1)	/* PWM52T1����ֵ���ֽ� */
#define PWM52T2H    (*(unsigned char volatile xdata *)0xfcc2)	/* PWM52T2����ֵ���ֽ� */
#define PWM52T2L    (*(unsigned char volatile xdata *)0xfcc3)	/* PWM52T2����ֵ���ֽ� */
#define PWM52CR     (*(unsigned char volatile xdata *)0xfcc4)	/* PWM52���ƼĴ���     */
#define PWM52HLD    (*(unsigned char volatile xdata *)0xfcc5)	/* PWM52��ƽ���ֿ��ƼĴ��� */

#define PWM53T1H    (*(unsigned char volatile xdata *)0xfcc8)	/* PWM53T1����ֵ���ֽ� */
#define PWM53T1L    (*(unsigned char volatile xdata *)0xfcc9)	/* PWM53T1����ֵ���ֽ� */
#define PWM53T2H    (*(unsigned char volatile xdata *)0xfcca)	/* PWM53T2����ֵ���ֽ� */
#define PWM53T2L    (*(unsigned char volatile xdata *)0xfccb)	/* PWM53T2����ֵ���ֽ� */
#define PWM53CR     (*(unsigned char volatile xdata *)0xfccc)	/* PWM53���ƼĴ���     */
#define PWM53HLD    (*(unsigned char volatile xdata *)0xfccd)	/* PWM53��ƽ���ֿ��ƼĴ��� */

#define PWM54T1H    (*(unsigned char volatile xdata *)0xfcd0)	/* PWM54T1����ֵ���ֽ� */
#define PWM54T1L    (*(unsigned char volatile xdata *)0xfcd1)	/* PWM54T1����ֵ���ֽ� */
#define PWM54T2H    (*(unsigned char volatile xdata *)0xfcd2)	/* PWM54T2����ֵ���ֽ� */
#define PWM54T2L    (*(unsigned char volatile xdata *)0xfcd3)	/* PWM54T2����ֵ���ֽ� */
#define PWM54CR     (*(unsigned char volatile xdata *)0xfcd4)	/* PWM54���ƼĴ���     */
#define PWM54HLD    (*(unsigned char volatile xdata *)0xfcd5)	/* PWM54��ƽ���ֿ��ƼĴ��� */

#define PWM55T1H    (*(unsigned char volatile xdata *)0xfcd8)	/* PWM55T1����ֵ���ֽ� */
#define PWM55T1L    (*(unsigned char volatile xdata *)0xfcd9)	/* PWM55T1����ֵ���ֽ� */
#define PWM55T2H    (*(unsigned char volatile xdata *)0xfcda)	/* PWM55T2����ֵ���ֽ� */
#define PWM55T2L    (*(unsigned char volatile xdata *)0xfcdb)	/* PWM55T2����ֵ���ֽ� */
#define PWM55CR     (*(unsigned char volatile xdata *)0xfcdc)	/* PWM55���ƼĴ���     */
#define PWM55HLD    (*(unsigned char volatile xdata *)0xfcdd)	/* PWM55��ƽ���ֿ��ƼĴ��� */

#define PWM56T1H    (*(unsigned char volatile xdata *)0xfce0)	/* PWM56T1����ֵ���ֽ� */
#define PWM56T1L    (*(unsigned char volatile xdata *)0xfce1)	/* PWM56T1����ֵ���ֽ� */
#define PWM56T2H    (*(unsigned char volatile xdata *)0xfce2)	/* PWM56T2����ֵ���ֽ� */
#define PWM56T2L    (*(unsigned char volatile xdata *)0xfce3)	/* PWM56T2����ֵ���ֽ� */
#define PWM56CR     (*(unsigned char volatile xdata *)0xfce4)	/* PWM56���ƼĴ���     */
#define PWM56HLD    (*(unsigned char volatile xdata *)0xfce5)	/* PWM56��ƽ���ֿ��ƼĴ��� */

#define PWM57T1H    (*(unsigned char volatile xdata *)0xfce8)	/* PWM57T1����ֵ���ֽ� */
#define PWM57T1L    (*(unsigned char volatile xdata *)0xfce9)	/* PWM57T1����ֵ���ֽ� */
#define PWM57T2H    (*(unsigned char volatile xdata *)0xfcea)	/* PWM57T2����ֵ���ֽ� */
#define PWM57T2L    (*(unsigned char volatile xdata *)0xfceb)	/* PWM57T2����ֵ���ֽ� */
#define PWM57CR     (*(unsigned char volatile xdata *)0xfcec)	/* PWM57���ƼĴ���     */
#define PWM57HLD    (*(unsigned char volatile xdata *)0xfced)	/* PWM57��ƽ���ֿ��ƼĴ��� */

#define MD3U32    (*(unsigned long volatile xdata *)0xfcf0)	/* MDU���ݼĴ��� */
#define MD3U16    (*(unsigned int  volatile xdata *)0xfcf0)	/* MDU���ݼĴ��� */
#define MD1U16    (*(unsigned int  volatile xdata *)0xfcf2)	/* MDU���ݼĴ��� */
#define MD5U16    (*(unsigned int  volatile xdata *)0xfcf4)	/* MDU���ݼĴ��� */

#define MD3       (*(unsigned char volatile xdata *)0xfcf0)	/* MDU���ݼĴ��� */
#define MD2       (*(unsigned char volatile xdata *)0xfcf1)	/* MDU���ݼĴ��� */
#define MD1       (*(unsigned char volatile xdata *)0xfcf2)	/* MDU���ݼĴ��� */
#define MD0       (*(unsigned char volatile xdata *)0xfcf3)	/* MDU���ݼĴ��� */
#define MD5       (*(unsigned char volatile xdata *)0xfcf4)	/* MDU���ݼĴ��� */
#define MD4       (*(unsigned char volatile xdata *)0xfcf5)	/* MDU���ݼĴ��� */
#define ARCON     (*(unsigned char volatile xdata *)0xfcf6)	/* MDUģʽ���ƼĴ��� */
#define OPCON     (*(unsigned char volatile xdata *)0xfcf7)	/* MDU�������ƼĴ��� */

#define COMEN     (*(unsigned char volatile xdata *)0xfb00)	/* COMʹ�ܼĴ��� */
#define SEGENL    (*(unsigned char volatile xdata *)0xfb01)	/* SEGʹ�ܼĴ��� */
#define SEGENH    (*(unsigned char volatile xdata *)0xfb02)	/* SEGʹ�ܼĴ��� */
#define LEDCTRL   (*(unsigned char volatile xdata *)0xfb03)	/* LED���ƼĴ��� */
#define LEDCKS    (*(unsigned char volatile xdata *)0xfb04)	/* LEDʱ�ӷ�Ƶ�Ĵ��� */

#define COM0_DAL  (*(unsigned char volatile xdata *)0xfb10)	/* ����ģʽ��ʾ���� */
#define COM1_DAL  (*(unsigned char volatile xdata *)0xfb11)	/* ����ģʽ��ʾ���� */
#define COM2_DAL  (*(unsigned char volatile xdata *)0xfb12)	/* ����ģʽ��ʾ���� */
#define COM3_DAL  (*(unsigned char volatile xdata *)0xfb13)	/* ����ģʽ��ʾ���� */
#define COM4_DAL  (*(unsigned char volatile xdata *)0xfb14)	/* ����ģʽ��ʾ���� */
#define COM5_DAL  (*(unsigned char volatile xdata *)0xfb15)	/* ����ģʽ��ʾ���� */
#define COM6_DAL  (*(unsigned char volatile xdata *)0xfb16)	/* ����ģʽ��ʾ���� */
#define COM7_DAL  (*(unsigned char volatile xdata *)0xfb17)	/* ����ģʽ��ʾ���� */
#define COM0_DAH  (*(unsigned char volatile xdata *)0xfb18)	/* ����ģʽ��ʾ���� */
#define COM1_DAH  (*(unsigned char volatile xdata *)0xfb19)	/* ����ģʽ��ʾ���� */
#define COM2_DAH  (*(unsigned char volatile xdata *)0xfb1a)	/* ����ģʽ��ʾ���� */
#define COM3_DAH  (*(unsigned char volatile xdata *)0xfb1b)	/* ����ģʽ��ʾ���� */
#define COM4_DAH  (*(unsigned char volatile xdata *)0xfb1c)	/* ����ģʽ��ʾ���� */
#define COM5_DAH  (*(unsigned char volatile xdata *)0xfb1d)	/* ����ģʽ��ʾ���� */
#define COM6_DAH  (*(unsigned char volatile xdata *)0xfb1e)	/* ����ģʽ��ʾ���� */
#define COM7_DAH  (*(unsigned char volatile xdata *)0xfb1f)	/* ����ģʽ��ʾ���� */

#define COM0_DCL  (*(unsigned char volatile xdata *)0xfb20)	/* ����ģʽ��ʾ���� */
#define COM1_DCL  (*(unsigned char volatile xdata *)0xfb21)	/* ����ģʽ��ʾ���� */
#define COM2_DCL  (*(unsigned char volatile xdata *)0xfb22)	/* ����ģʽ��ʾ���� */
#define COM3_DCL  (*(unsigned char volatile xdata *)0xfb23)	/* ����ģʽ��ʾ���� */
#define COM4_DCL  (*(unsigned char volatile xdata *)0xfb24)	/* ����ģʽ��ʾ���� */
#define COM5_DCL  (*(unsigned char volatile xdata *)0xfb25)	/* ����ģʽ��ʾ���� */
#define COM6_DCL  (*(unsigned char volatile xdata *)0xfb26)	/* ����ģʽ��ʾ���� */
#define COM7_DCL  (*(unsigned char volatile xdata *)0xfb27)	/* ����ģʽ��ʾ���� */
#define COM0_DCH  (*(unsigned char volatile xdata *)0xfb28)	/* ����ģʽ��ʾ���� */
#define COM1_DCH  (*(unsigned char volatile xdata *)0xfb29)	/* ����ģʽ��ʾ���� */
#define COM2_DCH  (*(unsigned char volatile xdata *)0xfb2a)	/* ����ģʽ��ʾ���� */
#define COM3_DCH  (*(unsigned char volatile xdata *)0xfb2b)	/* ����ģʽ��ʾ���� */
#define COM4_DCH  (*(unsigned char volatile xdata *)0xfb2c)	/* ����ģʽ��ʾ���� */
#define COM5_DCH  (*(unsigned char volatile xdata *)0xfb2d)	/* ����ģʽ��ʾ���� */
#define COM6_DCH  (*(unsigned char volatile xdata *)0xfb2e)	/* ����ģʽ��ʾ���� */
#define COM7_DCH  (*(unsigned char volatile xdata *)0xfb2f)	/* ����ģʽ��ʾ���� */

#define TSCHEN     (*(unsigned int  volatile xdata *)0xfb40)	/* ��������ʹ�ܼĴ��� */
#define TSCFG      (*(unsigned int  volatile xdata *)0xfb42)	/* �����������üĴ���1 */
#define TSSTA      (*(unsigned int  volatile xdata *)0xfb46)	/* ��������״̬�Ĵ���1 */
#define TSDAT      (*(unsigned int  volatile xdata *)0xfb49)	/* ������������ */
#define TSTH00     (*(unsigned int  volatile xdata *)0xfb50)	/* ��������0�ż�ֵ���ֽ� */
#define TSTH01     (*(unsigned int  volatile xdata *)0xfb52)	/* ��������1�ż�ֵ���ֽ� */
#define TSTH02     (*(unsigned int  volatile xdata *)0xfb54)	/* ��������2�ż�ֵ���ֽ� */
#define TSTH03     (*(unsigned int  volatile xdata *)0xfb56)	/* ��������3�ż�ֵ���ֽ� */
#define TSTH04     (*(unsigned int  volatile xdata *)0xfb58)	/* ��������4�ż�ֵ���ֽ� */
#define TSTH05     (*(unsigned int  volatile xdata *)0xfb5a)	/* ��������5�ż�ֵ���ֽ� */
#define TSTH06     (*(unsigned int  volatile xdata *)0xfb5c)	/* ��������6�ż�ֵ���ֽ� */
#define TSTH07     (*(unsigned int  volatile xdata *)0xfb5e)	/* ��������7�ż�ֵ���ֽ� */
#define TSTH08     (*(unsigned int  volatile xdata *)0xfb60)	/* ��������8�ż�ֵ���ֽ� */
#define TSTH09     (*(unsigned int  volatile xdata *)0xfb62)	/* ��������9�ż�ֵ���ֽ� */
#define TSTH10     (*(unsigned int  volatile xdata *)0xfb64)	/* ��������10�ż�ֵ���ֽ� */
#define TSTH11     (*(unsigned int  volatile xdata *)0xfb66)	/* ��������11�ż�ֵ���ֽ� */
#define TSTH12     (*(unsigned int  volatile xdata *)0xfb68)	/* ��������12�ż�ֵ���ֽ� */
#define TSTH13     (*(unsigned int  volatile xdata *)0xfb6a)	/* ��������13�ż�ֵ���ֽ� */
#define TSTH14     (*(unsigned int  volatile xdata *)0xfb6c)	/* ��������14�ż�ֵ���ֽ� */
#define TSTH15     (*(unsigned int  volatile xdata *)0xfb6e)	/* ��������15�ż�ֵ���ֽ� */

#define TSCHEN1    (*(unsigned char volatile xdata *)0xfb40)	/* ��������ʹ�ܼĴ���1 */
#define TSCHEN2    (*(unsigned char volatile xdata *)0xfb41)	/* ��������ʹ�ܼĴ���2 */
#define TSCFG1     (*(unsigned char volatile xdata *)0xfb42)	/* �����������üĴ���1 */
#define TSCFG2     (*(unsigned char volatile xdata *)0xfb43)	/* �����������üĴ���2 */
#define TSWUTC     (*(unsigned char volatile xdata *)0xfb44)	/* �����������ѿ��ƼĴ��� */
#define TSCTRL     (*(unsigned char volatile xdata *)0xfb45)	/* �����������ƼĴ���  */
#define TSSTA1     (*(unsigned char volatile xdata *)0xfb46)	/* ��������״̬�Ĵ���1 */
#define TSSTA2     (*(unsigned char volatile xdata *)0xfb47)	/* ��������״̬�Ĵ���2 */

#define TSRT       (*(unsigned char volatile xdata *)0xfb48)	/* ��������ʱ����ƼĴ��� */
#define TSDATH     (*(unsigned char volatile xdata *)0xfb49)	/* �����������ݸ��ֽ� */
#define TSDATL     (*(unsigned char volatile xdata *)0xfb4a)	/* �����������ݵ��ֽ� */

#define TSTH00H    (*(unsigned char volatile xdata *)0xfb50)	/* ��������0�ż�ֵ���ֽ� */
#define TSTH00L    (*(unsigned char volatile xdata *)0xfb51)	/* ��������0�ż�ֵ���ֽ� */
#define TSTH01H    (*(unsigned char volatile xdata *)0xfb52)	/* ��������1�ż�ֵ���ֽ� */
#define TSTH01L    (*(unsigned char volatile xdata *)0xfb53)	/* ��������1�ż�ֵ���ֽ� */
#define TSTH02H    (*(unsigned char volatile xdata *)0xfb54)	/* ��������2�ż�ֵ���ֽ� */
#define TSTH02L    (*(unsigned char volatile xdata *)0xfb55)	/* ��������2�ż�ֵ���ֽ� */
#define TSTH03H    (*(unsigned char volatile xdata *)0xfb56)	/* ��������3�ż�ֵ���ֽ� */
#define TSTH03L    (*(unsigned char volatile xdata *)0xfb57)	/* ��������3�ż�ֵ���ֽ� */
#define TSTH04H    (*(unsigned char volatile xdata *)0xfb58)	/* ��������4�ż�ֵ���ֽ� */
#define TSTH04L    (*(unsigned char volatile xdata *)0xfb59)	/* ��������4�ż�ֵ���ֽ� */
#define TSTH05H    (*(unsigned char volatile xdata *)0xfb5a)	/* ��������5�ż�ֵ���ֽ� */
#define TSTH05L    (*(unsigned char volatile xdata *)0xfb5b)	/* ��������5�ż�ֵ���ֽ� */
#define TSTH06H    (*(unsigned char volatile xdata *)0xfb5c)	/* ��������6�ż�ֵ���ֽ� */
#define TSTH06L    (*(unsigned char volatile xdata *)0xfb5d)	/* ��������6�ż�ֵ���ֽ� */
#define TSTH07H    (*(unsigned char volatile xdata *)0xfb5e)	/* ��������7�ż�ֵ���ֽ� */
#define TSTH07L    (*(unsigned char volatile xdata *)0xfb5f)	/* ��������7�ż�ֵ���ֽ� */
#define TSTH08H    (*(unsigned char volatile xdata *)0xfb60)	/* ��������8�ż�ֵ���ֽ� */
#define TSTH08L    (*(unsigned char volatile xdata *)0xfb61)	/* ��������8�ż�ֵ���ֽ� */
#define TSTH09H    (*(unsigned char volatile xdata *)0xfb62)	/* ��������9�ż�ֵ���ֽ� */
#define TSTH09L    (*(unsigned char volatile xdata *)0xfb63)	/* ��������9�ż�ֵ���ֽ� */
#define TSTH10H    (*(unsigned char volatile xdata *)0xfb64)	/* ��������10�ż�ֵ���ֽ� */
#define TSTH10L    (*(unsigned char volatile xdata *)0xfb65)	/* ��������10�ż�ֵ���ֽ� */
#define TSTH11H    (*(unsigned char volatile xdata *)0xfb66)	/* ��������11�ż�ֵ���ֽ� */
#define TSTH11L    (*(unsigned char volatile xdata *)0xfb67)	/* ��������11�ż�ֵ���ֽ� */
#define TSTH12H    (*(unsigned char volatile xdata *)0xfb68)	/* ��������12�ż�ֵ���ֽ� */
#define TSTH12L    (*(unsigned char volatile xdata *)0xfb69)	/* ��������12�ż�ֵ���ֽ� */
#define TSTH13H    (*(unsigned char volatile xdata *)0xfb6a)	/* ��������13�ż�ֵ���ֽ� */
#define TSTH13L    (*(unsigned char volatile xdata *)0xfb6b)	/* ��������13�ż�ֵ���ֽ� */
#define TSTH14H    (*(unsigned char volatile xdata *)0xfb6c)	/* ��������14�ż�ֵ���ֽ� */
#define TSTH14L    (*(unsigned char volatile xdata *)0xfb6d)	/* ��������14�ż�ֵ���ֽ� */
#define TSTH15H    (*(unsigned char volatile xdata *)0xfb6e)	/* ��������15�ż�ֵ���ֽ� */
#define TSTH15L    (*(unsigned char volatile xdata *)0xfb6f)	/* ��������15�ż�ֵ���ֽ� */


//=============================================================================================================

#define	EAXSFR()		P_SW2 |=  0x80		/* MOVX A,@DPTR/MOVX @DPTR,Aָ��Ĳ�������Ϊ��չSFR(XSFR) */
#define	EAXRAM()		P_SW2 &= ~0x80		/* MOVX A,@DPTR/MOVX @DPTR,Aָ��Ĳ�������Ϊ��չRAM(XRAM) */

#define	I2C_USE_P15P14()	P_SW2 &= ~0x30						/* ��I2C�л���P1.5(SCL) P1.4(SDA)(�ϵ�Ĭ��).*/
#define	I2C_USE_P25P24()	P_SW2  = (P_SW2 & ~0x30) | 0x10		/* ��I2C�л���P2.5(SCL) P2.4(SDA).*/
#define	I2C_USE_P32P33()	P_SW2 |= 0x30						/* ��I2C�л���P3.2(SCL) P3.3(SDA).*/

#define	MainFosc_IRC24M()	CKSEL = (CKSEL & ~0x03)			/* ѡ���ڲ�24MHZʱ�� */
#define	MainFosc_XTAL()		CKSEL = (CKSEL & ~0x03) | 0x01	/* ѡ���ⲿ�����ʱ�� */
#define	EXT_CLOCK()			XOSCCR = 0x80					/* ѡ���ⲿʱ�� */
#define	EXT_CRYSTAL()		XOSCCR = 0xC0					/* ѡ���ⲿ���� */
#define	MainFosc_IRC32K()	CKSEL =  CKSEL | 0x03			/* ѡ���ڲ�32Kʱ�� */
#define	MCLKO_None()		MCLKOCR = 0						/* ��ʱ�Ӳ���� 	    */
#define	MCLKO54_DIV(n)		MCLKOCR = n						/* ��ʱ�Ӵ�P5.4��Ƶ��� 0~127 */
#define	MCLKO16_DIV(n)		MCLKOCR = n | 0x80				/* ��ʱ�Ӵ�P1.6��Ƶ��� 0~127 */


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
sbit TF1  = TCON^7;	//��ʱ��1����жϱ�־λ
sbit TR1  = TCON^6;	//��ʱ��1���п���λ
sbit TF0  = TCON^5;	//��ʱ��0����жϱ�־λ
sbit TR0  = TCON^4;	//��ʱ��0���п���λ
sbit IE1  = TCON^3;	//���ж�1��־λ
sbit IT1  = TCON^2;	//���ж�1�źŷ�ʽ����λ��1���½����жϣ�0�������½����жϡ�
sbit IE0  = TCON^1;	//���ж�0��־λ
sbit IT0  = TCON^0;	//���ж�0�źŷ�ʽ����λ��1���½����жϣ�0�������½����жϡ�

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
sbit SM0  = SCON^7;	//SM0/FE		SM0 SM1 = 00 ~ 11: ��ʽ0~3
sbit SM1  = SCON^6;	//
sbit SM2  = SCON^5;	//���ͨѶ
sbit REN  = SCON^4;	//��������
sbit TB8  = SCON^3;	//�������ݵ�8λ
sbit RB8  = SCON^2;	//�������ݵ�8λ
sbit TI   = SCON^1;	//�����жϱ�־λ
sbit RI   = SCON^0;	//�����жϱ�־λ

/*  IE   */
sbit EA   = IE^7;	//�ж������ܿ���λ
sbit ELVD = IE^6;	//��ѹ����ж�����λ
sbit EADC = IE^5;	//ADC �ж� ����λ
sbit ES   = IE^4;	//�����ж� �������λ
sbit ET1  = IE^3;	//��ʱ�ж�1�������λ
sbit EX1  = IE^2;	//�ⲿ�ж�1�������λ
sbit ET0  = IE^1;	//��ʱ�ж�0�������λ
sbit EX0  = IE^0;	//�ⲿ�ж�0�������λ

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
//INT_CLKO:  �ж���ʱ��������ƼĴ���  -   EX4  EX3  EX2   -   T2CLKO  T1CLKO  T0CLKO    0000,0000
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
//AUXINTIF:  �����жϱ�־�Ĵ���  -  INT4IF  INT3IF  INT2IF   -   T4IF  T3IF  T2IF    0000,0000
#define	INT4IF	0x40
#define	INT3IF	0x20
#define	INT2IF	0x10
#define	T4IF	0x04
#define	T3IF	0x02
#define	T2IF	0x01

#define	INT4_Clear()	AUXINTIF &= ~INT4IF		/* ������ж�4��־λ */
#define	INT3_Clear()	AUXINTIF &= ~INT3IF		/* ������ж�3��־λ */
#define	INT2_Clear()	AUXINTIF &= ~INT2IF		/* ������ж�2��־λ */
#define	INT1_Clear()	IE1 = 0					/* ������ж�1��־λ */
#define	INT0_Clear()	IE0 = 0					/* ������ж�0��־λ */

#define	INT0_Fall()		IT0 = 1		/* INT0 �½����ж�           */
#define	INT0_RiseFall()	IT0 = 0		/* INT0 �½��������ؾ��ж�   */
#define	INT1_Fall()		IT1 = 1		/* INT1 �½����ж�           */
#define	INT1_RiseFall()	IT0 = 0		/* INT1 �½��������ؾ��ж�   */


//							7     6     5    4    3    2    1     0    Reset Value
//sfr IE2       = 0xAF;		-     -     -    -    -    -   ESPI  ES2   0000,0000B	//Auxiliary Interrupt   
#define		SPI_INT_ENABLE()		IE2 |=  2	/* ����SPI�ж�		*/
#define		SPI_INT_DISABLE()		IE2 &= ~2	/* ����SPI�ж�		*/
#define		UART2_INT_ENABLE()		IE2 |=  1	/* ������2�ж�	*/
#define		UART2_INT_DISABLE()		IE2 &= ~1	/* ������2�ж�	*/

//                                          7     6     5    4    3    2    1    0    Reset Value
//sfr IP      = 0xB8; //�ж����ȼ���λ      PPCA  PLVD  PADC  PS   PT1  PX1  PT0  PX0   0000,0000
//--------
sbit PPCA	= IP^7;	//PCA ģ���ж����ȼ�
sbit PLVD	= IP^6;	//��ѹ����ж����ȼ�
sbit PADC	= IP^5;	//ADC �ж����ȼ�
sbit PS   	= IP^4;	//�����ж�0���ȼ��趨λ
sbit PT1	= IP^3;	//��ʱ�ж�1���ȼ��趨λ
sbit PX1	= IP^2;	//�ⲿ�ж�1���ȼ��趨λ
sbit PT0	= IP^1;	//��ʱ�ж�0���ȼ��趨λ
sbit PX0	= IP^0;	//�ⲿ�ж�0���ȼ��趨λ

//                                           7      6      5     4     3     2    1     0        Reset Value
//sfr IPH   = 0xB7; //�ж����ȼ���λ       PPCAH  PLVDH  PADCH  PSH  PT1H  PX1H  PT0H  PX0H   0000,0000
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
#define	CMPEN	0x80	//1: ����Ƚ���, 0: ��ֹ,�رձȽ�����Դ
#define	CMPIF	0x40	//�Ƚ����жϱ�־, ���������ػ��½����ж�, �����0
#define	PIE		0x20	//1: �ȽϽ����0��1, �����������ж�
#define	NIE		0x10	//1: �ȽϽ����1��0, �����½����ж�
#define	PIS		0x08	//����������ѡ��, 0: ѡ���ڲ�P3.7��������,           1: ��ADC_CHS[3:0]��ѡ���ADC�������������.
#define	NIS		0x04	//���븺����ѡ��, 0: ѡ���ڲ�BandGap��ѹBGv��������, 1: ѡ���ⲿP3.6������.
#define	CMPOE	0x02	//1: ����ȽϽ�����, 0: ��ֹ.
#define	CMPRES	0x01	//�ȽϽ��, 1: CMP+��ƽ����CMP-,  0: CMP+��ƽ����CMP-,  ֻ��

#define	CMP_P_P37	0x00	//����������ѡ��, 0: ѡ���ڲ�P3.7��������
#define	CMP_P_ADC	0x08	//����������ѡ��, 1: ��ADC_CHS[3:0]��ѡ���ADC�������������.
#define	CMP_N_GAP	0x00	//���븺����ѡ��, 0: ѡ���ڲ�BandGap��ѹBGv��������.
#define	CMP_N_P36	0x04	//���븺����ѡ��, 1: ѡ���ⲿP3.6������.

#define	CMPO_P34()	P_SW2 &= ~0x08	//��������P3.4.
#define	CMPO_P41()	P_SW2 |=  0x08	//��������P4.1.

//                       7        6       5  4  3  2  1  0    Reset Value
//sfr CMPCR2 = 0xE7;   INVCMPO  DISFLT       LCDTY[5:0]       00001001B
#define	INVCMPO	0x80	//1: �Ƚ������IOȡ��,  0: ��ȡ��
#define	DISFLT	0x40	//1: �ر�0.1uF�˲�,   	0: ����
#define	LCDTY	0x00	//0~63, �ȽϽ���仯��ʱ������



/*************************************************************************************************/
//                     7     6     5    4    3    2   1   0       Reset Value
//sfr SCON  = 0x98;   SM0   SM1   SM2  REN  TB8  RB8  TI  RI      00000000B		 //S1 Control

#define		S1_DoubleRate()		PCON  |=  0x80
#define		S1_SHIFT()			SCON  &=  0x3f

#define		S1_8bit()			SCON   =  (SCON & 0x3f) | 0x40
#define		S1_9bit()			SCON   =  (SCON & 0x3f) | 0xc0
#define		S1_RX_Enable()		SCON  |=  0x10
#define		S1_RX_Disable()		SCON  &= ~0x10
#define		TI1					TI					/* �ж�TI1�Ƿ������								 */
#define		RI1					RI					/* �ж�RI1�Ƿ�������								 */
#define		SET_TI1()			TI = 1				/* ����TI1(�����ж�)								 */
#define		CLR_TI1()			TI = 0				/* ���TI1											 */
#define		CLR_RI1()			RI = 0				/* ���RI1											 */
#define		S1TB8_SET()			TB8 = 1				/* ����TB8											 */
#define		S1TB8_CLR()			TB8 = 0				/* ���TB8											 */
#define		S1_Int_Enable()		ES     =  1			/* ����1�����ж�									 */
#define		S1_Int_Disable()	ES     =  0			/* ����1��ֹ�ж�									 */
#define 	S1_BRT_UseTimer1()	AUXR  &= ~1
#define 	S1_BRT_UseTimer2()	AUXR  |=  1
#define		S1_USE_P30P31()		P_SW1 &= ~0xc0						//UART1 ʹ��P3.0 P3.1��	Ĭ��
#define		S1_USE_P36P37()		P_SW1  =  (P_SW1 & ~0xc0) | 0x40	//UART1 ʹ��P3.6 P3.7��
#define		S1_USE_P16P17()		P_SW1  =  (P_SW1 & ~0xc0) | 0x80	//UART1 ʹ��P1.6 P1.7��
#define		S1_USE_P43P44()		P_SW1  =  (P_SW1 & ~0xc0) | 0xc0	//UART1 ʹ��P4.3 P4.4��
#define		S1_USE_P32P33()		P_SW1  =  (P_SW1 & ~0xc0) | 0x40	//UART1 ʹ��P3.2 P3.3��	����8��MCU
#define		S1_USE_P54P55()		P_SW1  =  (P_SW1 & ~0xc0) | 0x80	//UART1 ʹ��P5.4 P5.5�� ����8��MCU

//						  7      6      5      4      3      2     1     0        Reset Value
//sfr S2CON = 0x9A;		S2SM0    -    S2SM2  S2REN  S2TB8  S2RB8  S2TI  S2RI      00000000B		 //S2 Control

#define		S2_MODE0()			S2CON &= ~(1<<7)	/* ����2ģʽ0��8λUART�������� = ��ʱ��2������� / 4 */
#define		S2_MODE1()			S2CON |=  (1<<7)	/* ����2ģʽ1��9λUART�������� = ��ʱ��2������� / 4 */
#define		S2_8bit()			S2CON &= ~(1<<7)	/* ����2ģʽ0��8λUART�������� = ��ʱ��2������� / 4 */
#define		S2_9bit()			S2CON |=  (1<<7)	/* ����2ģʽ1��9λUART�������� = ��ʱ��2������� / 4 */
#define		S2_RX_Enable()		S2CON |=  (1<<4)	/* ����2����										 */
#define		S2_RX_Disable()		S2CON &= ~(1<<4)	/* ��ֹ��2����										 */
#define		TI2					(S2CON & 2) 		/* �ж�TI2�Ƿ������								 */
#define		RI2					(S2CON & 1) 		/* �ж�RI2�Ƿ�������								 */
#define		SET_TI2()			S2CON |=  (1<<1)	/* ����TI2(�����ж�)								 */
#define		CLR_TI2()			S2CON &= ~(1<<1)	/* ���TI2											 */
#define		CLR_RI2()			S2CON &= ~1			/* ���RI2											 */
#define		S2TB8_SET()			S2CON |=  (1<<3)	/* ����TB8											 */
#define		S2TB8_CLR()			S2CON &= ~(1<<3)	/* ���TB8											 */
#define		S2_Int_Enable()		IE2   |=  1			/* ����2�����ж�									 */
#define		S2_Int_Disable()	IE2   &= ~1			/* ����2��ֹ�ж�									 */
#define		S2_USE_P10P11()		P_SW2 &= ~1			/* UART2 ʹ��P1.0 P1.1��	Ĭ��					 */
#define		S2_USE_P46P47()		P_SW2 |=  1			/* UART2 ʹ��P4.6 P4.7��							 */

//						  7      6      5      4      3      2     1     0        Reset Value
//sfr S3CON = 0xAC;		S3SM0  S3ST3  S3SM2  S3REN  S3TB8  S3RB8  S3TI  S3RI      00000000B		 //S3 Control

#define		S3_MODE0()			S3CON &= ~(1<<7)	/* ����3ģʽ0��8λUART�������� = ��ʱ��������� / 4  */
#define		S3_MODE1()			S3CON |=  (1<<7)	/* ����3ģʽ1��9λUART�������� = ��ʱ��������� / 4  */
#define		S3_8bit()			S3CON &= ~(1<<7)	/* ����3ģʽ0��8λUART�������� = ��ʱ��������� / 4  */
#define		S3_9bit()			S3CON |=  (1<<7)	/* ����3ģʽ1��9λUART�������� = ��ʱ��������� / 4  */
#define		S3_RX_Enable()		S3CON |=  (1<<4)	/* ����3����									     */
#define		S3_RX_Disable()		S3CON &= ~(1<<4)	/* ��ֹ��3����									     */
#define		TI3					(S3CON & 2) != 0	/* �ж�TI3�Ƿ������								 */
#define		RI3					(S3CON & 1) != 0	/* �ж�RI3�Ƿ�������								 */
#define		SET_TI3()			S3CON |=  (1<<1)	/* ����TI3(�����ж�)								 */
#define		CLR_TI3()			S3CON &= ~(1<<1)	/* ���TI3											 */
#define		CLR_RI3()			S3CON &= ~1			/* ���RI3											 */
#define		S3TB8_SET()			S3CON |=  (1<<3)	/* ����TB8											 */
#define		S3TB8_CLR()			S3CON &= ~(1<<3)	/* ���TB8											 */
#define		S3_Int_Enable()		IE2   |=  (1<<3)	/* ����3�����ж�								     */
#define		S3_Int_Disable()	IE2   &= ~(1<<3)	/* ����3��ֹ�ж�								     */
#define 	S3_BRT_UseTimer3()	S3CON |=  (1<<6)	/* BRT select Timer3								 */
#define 	S3_BRT_UseTimer2()	S3CON &= ~(1<<6)	/* BRT select Timer2								 */
#define		S3_USE_P00P01()		P_SW2 &= ~2			/* UART3 ʹ��P0.0 P0.1��	Ĭ��				     */
#define		S3_USE_P50P51()		P_SW2 |=  2			/* UART3 ʹ��P5.0 P5.1��						     */

//						  7      6      5      4      3      2     1     0        Reset Value
//sfr S4CON = 0x84;		S4SM0  S4ST4  S4SM2  S4REN  S4TB8  S4RB8  S4TI  S4RI      00000000B		 //S4 Control

#define		S4_MODE0()			S4CON &= ~(1<<7)	/* ����4ģʽ0��8λUART�������� = ��ʱ��������� / 4  */
#define		S4_MODE1()			S4CON |=  (1<<7)	/* ����4ģʽ1��9λUART�������� = ��ʱ��������� / 4  */
#define		S4_8bit()			S4CON &= ~(1<<7)	/* ����4ģʽ0��8λUART�������� = ��ʱ��������� / 4  */
#define		S4_9bit()			S4CON |=  (1<<7)	/* ����4ģʽ1��9λUART�������� = ��ʱ��������� / 4  */
#define		S4_RX_Enable()		S4CON |=  (1<<4)	/* ����4����									     */
#define		S4_RX_Disable()		S4CON &= ~(1<<4)	/* ��ֹ��4����									     */
#define		TI4					(S4CON & 2) != 0	/* �ж�TI3�Ƿ������							     */
#define		RI4					(S4CON & 1) != 0	/* �ж�RI3�Ƿ�������							     */
#define		SET_TI4()			S4CON |=  2			/* ����TI3(�����ж�)							     */
#define		CLR_TI4()			S4CON &= ~2			/* ���TI3										     */
#define		CLR_RI4()			S4CON &= ~1			/* ���RI3										     */
#define		S4TB8_SET()			S4CON |=  8			/* ����TB8										     */
#define		S4TB8_CLR()			S4CON &= ~8			/* ���TB8										     */
#define		S4_Int_Enable()		IE2   |=  (1<<4)	/* ����4�����ж�								     */
#define		S4_Int_Disable()	IE2   &= ~(1<<4)	/* ����4��ֹ�ж�								     */
#define 	S4_BRT_UseTimer4()	S4CON |=  (1<<6)	/* BRT select Timer4								 */
#define 	S4_BRT_UseTimer2()	S4CON &= ~(1<<6)	/* BRT select Timer2								 */
#define		S4_USE_P02P03()		P_SW2 &= ~4			/* UART4 ʹ��P0.2 P0.3��	Ĭ��				     */
#define		S4_USE_P52P53()		P_SW2 |=  4			/* UART4 ʹ��P5.2 P5.3��						     */


/**********************************************************/
//						   7     6       5      4     3      2      1      0    Reset Value
//sfr AUXR  = 0x8E;		T0x12 T1x12 UART_M0x6  T2R  T2_C/T T2x12 EXTRAM  S1ST2  0000,0000	//Auxiliary Register 

#define 	InternalXdata_Disable()		AUXR |=  2		/* ��ֹʹ���ڲ�xdata, ���з���xdata���Ƿ����ⲿxdata  */
#define 	InternalXdata_Enable()		AUXR &= ~2		/* ����ʹ���ڲ�xdata, �����ʵĵ�ַ���ڲ�xdata��Χʱ, �����ڲ���xadta, ����ַ�����ڲ�xdataʱ, �����ⲿxdata  */
#define		S1_M0x6()					AUXR |=  (1<<5)	/* UART Mode0 Speed is 6x Standard       */
#define		S1_M0x1()					AUXR &= ~(1<<5)	/* default,	UART Mode0 Speed is Standard */

//====================================
#define		Timer0_16bitAutoReload()	TMOD &= ~0x03					/* 16λ�Զ���װ	*/
#define		Timer0_16bit()				TMOD  = (TMOD & ~0x03) | 0x01	/* 16λ         */
#define		Timer0_8bitAutoReload()		TMOD  = (TMOD & ~0x03) | 0x02	/* 8λ�Զ���װ	*/
#define		Timer0_16bitAutoRL_NoMask()	TMOD |=  0x03		/* 16λ�Զ���װ���������ж�	*/
#define 	Timer0_Run()	 			TR0 = 1				/* ����ʱ��0����			*/
#define 	Timer0_Stop()	 			TR0 = 0				/* ��ֹ��ʱ��0����			*/
#define		Timer0_Gate_INT0_P32()		TMOD |=  (1<<3)		/* ʱ��0���ⲿINT0�ߵ�ƽ����ʱ���� */
#define		Timer0_AsTimer()			TMOD &= ~(1<<2)		/* ʱ��0������ʱ��	*/
#define		Timer0_AsCounter()			TMOD |=  (1<<2)		/* ʱ��0����������	*/
#define		Timer0_AsCounterP34()		TMOD |=  (1<<2)		/* ʱ��0����������	*/
#define 	Timer0_1T()					AUXR |=  (1<<7)		/* Timer0 clodk = fo	*/
#define 	Timer0_12T()				AUXR &= ~(1<<7)		/* Timer0 clodk = fo/12	12��Ƶ,	default	*/
#define		Timer0_CLKO_Enable()		INT_CLKO |=  1			/* ���� T0 ���������T0(P3.5)�������Fck0 = 1/2 T0 ����ʣ�T0����1T��12T��	*/
#define		Timer0_CLKO_Disable()		INT_CLKO &= ~1
#define		Timer0_CLKO_Enable_P35()	INT_CLKO |=  1			/* ���� T0 ���������T0(P3.5)�������Fck0 = 1/2 T0 ����ʣ�T0����1T��12T��	*/
#define		Timer0_CLKO_Disable_P35()	INT_CLKO &= ~1
#define 	Timer0_InterruptEnable()	ET0 = 1				/* ����Timer1�ж�.*/
#define 	Timer0_InterruptDisable()	ET0 = 0				/* ��ֹTimer1�ж�.*/

#define		T0_Load(n)					TH0 = (n) / 256,	TL0 = (n) % 256
#define		T0_Load_us_1T(n)			Timer0_AsTimer(),Timer0_1T(), Timer0_16bitAutoReload(),TH0=(65536-((MAIN_Fosc/1000)*(n)+500)/1000)/256, TL0=(65536-((MAIN_Fosc/1000)*(n)+500)/1000)%256
#define		T0_Load_us_12T(n)			Timer0_AsTimer(),Timer0_12T(),Timer0_16bitAutoReload(),TH0=(65536-((MAIN_Fosc/12000)*(n)+500)/1000)/256,TL0=(65536-((MAIN_Fosc/12000)*(n)+500)/1000)%256
#define		T0_Frequency_1T_P35(n)		ET0=0,Timer0_AsTimer(),Timer0_1T(),Timer0_16bitAutoReload(),TH0=(65536-(n/2+MAIN_Fosc/2)/(n))/256,TL0=(65536-(n/2+MAIN_Fosc/2)/(n))%256,INT_CLKO |= 1,TR0=1		/* fx=fosc/(2*M)/n,  M=1 or M=12 */
#define		T0_Frequency_12T_P35(n)		ET0=0,Timer0_AsTimer(),Timer0_12T(),Timer0_16bitAutoReload(),TH0=(65536-(n/2+MAIN_Fosc/24)/(n))/256,TL0=(65536-(n/2+MAIN_Fosc/24)/(n))%256,INT_CLKO |= 1,TR0=1	/* fx=fosc/(2*M)/n,  M=1 or M=12 */

//====================================
#define		Timer1_16bitAutoReload()	TMOD &= ~0x30					/* 16λ�Զ���װ	*/
#define		Timer1_16bit()				TMOD  = (TMOD & ~0x30) | 0x10	/* 16λ			*/
#define		Timer1_8bitAutoReload()		TMOD  = (TMOD & ~0x30) | 0x20	/* 8λ�Զ���װ	*/
#define 	Timer1_Run()	 			TR1 = 1				/* ����ʱ��1����			*/
#define 	Timer1_Stop()	 			TR1 = 0				/* ��ֹ��ʱ��1����			*/
#define		Timer1_Gate_INT1_P33()		TMOD |=  (1<<7)		/* ʱ��1���ⲿINT1�ߵ�ƽ����ʱ����	*/
#define		Timer1_AsTimer()			TMOD &= ~(1<<6)		/* ʱ��1������ʱ��			*/
#define		Timer1_AsCounter()			TMOD |=  (1<<6)		/* ʱ��1����������			*/
#define		Timer1_AsCounterP35()		TMOD |=  (1<<6)		/* ʱ��1����������			*/
#define 	Timer1_1T()					AUXR |=  (1<<6)		/* Timer1 clodk = fo		*/
#define 	Timer1_12T()				AUXR &= ~(1<<6)		/* Timer1 clodk = fo/12	12��Ƶ,	default	*/
#define		Timer1_CLKO_Enable()		INT_CLKO |=  2			/* ���� T1 ���������T1(P3.4)�������Fck1 = 1/2 T1 ����ʣ�T1����1T��12T��	*/
#define		Timer1_CLKO_Disable()		INT_CLKO &= ~2
#define		Timer1_CLKO_Enable_P34()	INT_CLKO |=  2			/* ���� T1 ���������T1(P3.4)�������Fck1 = 1/2 T1 ����ʣ�T1����1T��12T��	*/
#define		Timer1_CLKO_Disable_P34()	INT_CLKO &= ~2
#define 	Timer1_InterruptEnable()	ET1 = 1				/* ����Timer1�ж�.	*/
#define 	Timer1_InterruptDisable()	ET1 = 0				/* ��ֹTimer1�ж�.	*/

#define		T1_Load(n)					TH1 = (n) / 256,	TL1 = (n) % 256
#define		T1_Load_us_1T(n)			Timer1_AsTimer(),Timer1_1T(), Timer1_16bitAutoReload(),TH1=(65536-((MAIN_Fosc/1000)*(n)+500)/1000)/256, TL1=(65536-((MAIN_Fosc/1000)*(n)+500)/1000)%256
#define		T1_Load_us_12T(n)			Timer1_AsTimer(),Timer1_12T(),Timer1_16bitAutoReload(),TH1=(65536-((MAIN_Fosc/12000)*(n)+500)/1000)/256,TL1=(65536-((MAIN_Fosc/12000)*(n)+500)/1000)%256
#define		T1_Frequency_1T_P34(n)		ET1=0,Timer1_AsTimer(),Timer1_1T(),Timer1_16bitAutoReload(),TH1=(65536-(n/2+MAIN_Fosc/2)/(n))/256,TL1=(65536-(n/2+MAIN_Fosc/2)/(n))%256,INT_CLKO |= 2,TR1=1		/* fx=fosc/(2*M)/n,  M=1 or M=12 */
#define		T1_Frequency_12T_P34(n)		ET1=0,Timer1_AsTimer(),Timer1_12T(),Timer1_16bitAutoReload(),TH1=(65536-(n/2+MAIN_Fosc/24)/(n))/256,TL1=(65536-(n/2+MAIN_Fosc/24)/(n))%256,INT_CLKO |= 2,TR1=1	/* fx=fosc/(2*M)/n,  M=1 or M=12 */

//====================================
#define 	Timer2_Run()	 			AUXR |=  (1<<4)	/* ����ʱ��2����	*/
#define 	Timer2_Stop()	 			AUXR &= ~(1<<4)	/* ��ֹ��ʱ��2����	*/
#define		Timer2_AsTimer()			AUXR &= ~(1<<3)	/* ʱ��2������ʱ��	*/
#define		Timer2_AsCounter()			AUXR |=  (1<<3)	/* ʱ��2����������	*/
#define		Timer2_AsCounterP31()		AUXR |=  (1<<3)	/* ʱ��2����������	*/
#define 	Timer2_1T()					AUXR |=  (1<<2)	/* Timer0 clock = fo	*/
#define 	Timer2_12T()				AUXR &= ~(1<<2)	/* Timer0 clock = fo/12	12��Ƶ,	default	*/
#define		Timer2_CLKO_Enable()		INT_CLKO |=  4		/* ���� T2 ���������P1.3�������Fck2 = 1/2 T2 ����ʣ�T2����1T��12T��	*/
#define		Timer2_CLKO_Disable()		INT_CLKO &= ~4
#define		Timer2_CLKO_Enable_P13()	INT_CLKO |=  4		/* ���� T2 ���������P1.3�������Fck2 = 1/2 T2 ����ʣ�T2����1T��12T��	*/
#define		Timer2_CLKO_Disable_P13()	INT_CLKO &= ~4
#define 	Timer2_InterruptEnable()	IE2  |=  (1<<2)	/* ����Timer2�ж�.	*/
#define 	Timer2_InterruptDisable()	IE2  &= ~(1<<2)	/* ��ֹTimer2�ж�.	*/

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

#define	WDT_reset(n)	WDT_CONTR = D_EN_WDT + D_CLR_WDT + D_IDLE_WDT + (n)		/* ��ʼ��WDT��ι�� */


//						  7     6      5    4     3      2    1     0     Reset Value
//sfr PCON   = 0x87;	SMOD  SMOD0  LVDF  POF   GF1    GF0   PD   IDL    0001,0000	 //Power Control 
//SMOD		//����˫����
//SMOD0
#define		LVDF		(1<<5)	/* P4.6��ѹ����־ */
//POF
//GF1
//GF0
//#define 	D_PD		2		/* set 1, power down mode */
//#define 	D_IDLE		1		/* set 1, idle mode */
#define		MCU_IDLE()			PCON |= 1	/* MCU ���� IDLE ģʽ */
#define		MCU_POWER_DOWN()	PCON |= 2	/* MCU ���� ˯�� ģʽ */


//sfr ISP_CMD   = 0xC5;
#define		ISP_STANDBY()	ISP_CMD = 0		/* ISP���������ֹ��*/
#define		ISP_READ()		ISP_CMD = 1		/* ISP��������		*/
#define		ISP_WRITE()		ISP_CMD = 2		/* ISPд������		*/
#define		ISP_ERASE()		ISP_CMD = 3		/* ISP��������		*/

//sfr ISP_TRIG  = 0xC6;
#define 	ISP_TRIG()	ISP_TRIG = 0x5A,	ISP_TRIG = 0xA5		/* ISP�������� */

//							  7    6    5      4    3    2    1     0    Reset Value
//sfr IAP_CONTR = 0xC7;		IAPEN SWBS SWRST CFAIL  -    -    -     -    0000,x000	//IAP Control Register
#define ISP_EN			(1<<7)
#define ISP_SWBS		(1<<6)
#define ISP_SWRST		(1<<5)
#define ISP_CMD_FAIL	(1<<4)


/* ADC Register */
//								7       6      5       4         3      2    1    0   Reset Value
//sfr ADC_CONTR = 0xBC;		ADC_POWER SPEED1 SPEED0 ADC_FLAG ADC_START CHS2 CHS1 CHS0 0000,0000	/* AD ת�����ƼĴ��� */ 
//sfr ADC_RES  = 0xBD;		ADCV.9 ADCV.8 ADCV.7 ADCV.6 ADCV.5 ADCV.4 ADCV.3 ADCV.2	  0000,0000	/* A/D ת�������8λ */ 
//sfr ADC_RESL = 0xBE;												  ADCV.1 ADCV.0	  0000,0000	/* A/D ת�������2λ */
//sfr ADC_CONTR  = 0xBC;	//ֱ����MOV��������Ҫ�����


//sfr SPCTL  = 0xCE;	SPI���ƼĴ���
//   7       6       5       4       3       2       1       0    	Reset Value
//	SSIG	SPEN	DORD	MSTR	CPOL	CPHA	SPR1	SPR0		0x00

#define	SPI_SSIG_None()		SPCTL |=  (1<<7)		/* 1: ����SS��	*/
#define	SPI_SSIG_Enable()	SPCTL &= ~(1<<7)		/* 0: SS�����ھ������ӻ�	*/
#define	SPI_Enable()		SPCTL |=  (1<<6)		/* 1: ����SPI	*/
#define	SPI_Disable()		SPCTL &= ~(1<<6)		/* 0: ��ֹSPI	*/
#define	SPI_LSB_First()		SPCTL |=  (1<<5)		/* 1: LSB�ȷ�	*/
#define	SPI_MSB_First()		SPCTL &= ~(1<<5)		/* 0: MSB�ȷ�	*/
#define	SPI_Master()		SPCTL |=  (1<<4)		/* 1: ��Ϊ����	*/
#define	SPI_Slave()			SPCTL &= ~(1<<4)		/* 0: ��Ϊ�ӻ�	*/
#define	SPI_SCLK_NormalH()	SPCTL |=  (1<<3)		/* 1: ����ʱSCLKΪ�ߵ�ƽ	*/
#define	SPI_SCLK_NormalL()	SPCTL &= ~(1<<3)		/* 0: ����ʱSCLKΪ�͵�ƽ	*/
#define	SPI_PhaseH()		SPCTL |=  (1<<2)		/* 1: 	*/
#define	SPI_PhaseL()		SPCTL &= ~(1<<2)		/* 0: 	*/
#define	SPI_Speed(n)		SPCTL = (SPCTL & ~3) | (n)	/*�����ٶ�, 0 -- fosc/4, 1 -- fosc/8, 2 -- fosc/16, 3 -- fosc/32	*/

//sfr SPDAT  = 0xCF; //SPI Data Register                                                     0000,0000
//sfr SPSTAT  = 0xCD;	//SPI״̬�Ĵ���
//   7       6      5   4   3   2   1   0    	Reset Value
//	SPIF	WCOL	-	-	-	-	-	-
#define	SPIF	0x80		/* SPI������ɱ�־��д��1��0��*/
#define	WCOL	0x40		/* SPIд��ͻ��־��д��1��0��  */

#define		SPI_USE_P12P13P14P15()	P_SW1 &= ~0x0c					/* ��SPI�л���P12(SS) P13(MOSI) P14(MISO) P15(SCLK)(�ϵ�Ĭ��)��*/
#define		SPI_USE_P22P23P24P25()	P_SW1 = (P_SW1 & ~0x0c) | 0x04	/* ��SPI�л���P22(SS) P23(MOSI) P24(MISO) P25(SCLK)��*/
#define		SPI_USE_P35P34P33P32()	P_SW1 =  P_SW1 | 0x0C			/* ��SPI�л���P35(SS) P34(MOSI) P33(MISO) P32(SCLK)��*/


/*
;PCA_PWMn:    7       6     5   4   3   2     1       0
;			EBSn_1	EBSn_0	-	-	-	-	EPCnH	EPCnL
;B5-B2:		����
;B1(EPCnH):	��PWMģʽ�£���CCAPnH���9λ����
;B0(EPCnL):	��PWMģʽ�£���CCAPnL���9λ����
*/
#define		PWM0_NORMAL()	PCA_PWM0 &= ~2									/* PWM0�������(Ĭ��)	*/
#define		PWM0_OUT_0()	PCA_PWM0 |= 0x3f, CCAP0H = 0xff, CCAP0L = 0xff	/* PWM0һֱ���0		*/
#define		PWM0_OUT_1()	PCA_PWM0 &= 0xc0, CCAP0H = 0,    CCAP0L = 0		/* PWM0һֱ���1		*/

#define		PWM1_NORMAL()	PCA_PWM1 &= ~2									/* PWM1�������(Ĭ��)	*/
#define		PWM1_OUT_0()	PCA_PWM1 |= 0x3f, CCAP1H = 0xff, CCAP1L = 0xff	/* PWM1һֱ���0		*/
#define		PWM1_OUT_1()	PCA_PWM1 &= 0xc0, CCAP1H = 0,    CCAP1L = 0		/* PWM1һֱ���1		*/

#define		PWM2_NORMAL()	PCA_PWM2 &= ~2									/* PWM2�������(Ĭ��)	*/
#define		PWM2_OUT_0()	PCA_PWM2 |= 0x3f, CCAP2H = 0xff, CCAP2L = 0xff	/* PWM2һֱ���0		*/
#define		PWM2_OUT_1()	PCA_PWM2 &= 0xc0, CCAP2H = 0,    CCAP2L = 0		/* PWM2һֱ���1		*/

//						7     6     5     4     3     2     1     0     Reset Value
//sfr CCON   = 0xD8;	CF    CR    -     -    CCF3  CCF2  CCF1  CCF0   00xx,xx00	//PCA ���ƼĴ�����
sbit CCF0  = CCON^0;	/* PCA ģ��0�жϱ�־����Ӳ����λ�������������0��	*/
sbit CCF1  = CCON^1;	/* PCA ģ��1�жϱ�־����Ӳ����λ�������������0��	*/
sbit CCF2  = CCON^2;	/* PCA ģ��2�жϱ�־����Ӳ����λ�������������0��	*/
sbit CR    = CCON^6;	/* 1: ����PCA�����������������������0��*/
sbit CF    = CCON^7;	/* PCA�����������CH��CL��FFFFH��Ϊ0000H����־��PCA�������������Ӳ����λ�������������0��*/

//					 7     6     5     4     3     2     1     0    Reset Value
//sfr CMOD  = 0xD9;	CIDL   -     -     -   CPS2   CPS1  CPS0  ECF   0xxx,0000	//PCA ����ģʽ�Ĵ�����
#define PCA_IDLE_OFF()		CMOD |=  (1<<7)				/* IDLE״̬PCAֹͣ������	*/
#define PCA_IDLE_ON()		CMOD &= ~(1<<7)				/* IDLE״̬PCA����������	*/
#define PCA_CLK_12T()		CMOD &= ~0x0E				/* PCA��������ѡ�� fosc/12	*/
#define PCA_CLK_2T()		CMOD = (CMOD & ~0x0E) + 2	/* PCA��������ѡ�� fosc/2	*/
#define PCA_CLK_T0()		CMOD = (CMOD & ~0x0E) + 4	/* PCA��������ѡ��Timer0�жϣ�Timer0��ͨ��AUXR�Ĵ������óɹ�����12T��1Tģʽ��	*/
#define PCA_CLK_ECI()		CMOD = (CMOD & ~0x0E) + 6	/* PCA��������ѡ���ECI/P3.4��������ⲿʱ�ӣ���� fosc/2��	*/
#define PCA_CLK_1T()		CMOD = (CMOD & ~0x0E) + 8	/* PCA��������ѡ�� Fosc	*/
#define PCA_CLK_4T()		CMOD = (CMOD & ~0x0E) + 10	/* PCA��������ѡ�� Fosc/4	*/
#define PCA_CLK_6T()		CMOD = (CMOD & ~0x0E) + 12	/* PCA��������ѡ�� Fosc/6	*/
#define PCA_CLK_8T()		CMOD = (CMOD & ~0x0E) + 14	/* PCA��������ѡ�� Fosc/8	*/
#define PCA_INT_ENABLE()	CMOD |=  1					/* PCA����������ж�����λ��1---����CF��CCON.7�������жϡ�	*/
#define PCA_INT_DISABLE()	CMOD &= ~1					/* PCA����������жϽ�ֹ��	*/

//					    7      6       5        4       3       2       1      0    Reset Value
//sfr P_SW1 = 0xA2;	  S1_S1  S1_S0  CCP_S1   CCP_S0  SPI_S1   SPI_S0    -     DPS   0100,0000	//Auxiliary Register 1

#define		PCA_USE_P12P11P10P37()	P_SW1 &= ~0x30					/* ��PCA/PWM�л���P12(ECI) P11(CCP0) P10(CCP1) P37(CCP2)(�ϵ�Ĭ��) */
#define		PCA_USE_P34P35P36P37()	P_SW1 = (P_SW1 & ~0x30) | 0x10	/* ��PCA/PWM�л���P34(ECI) P35(CCP0) P36(CCP1) P37(CCP2) */
#define		PCA_USE_P24P25P26P27()	P_SW1 = (P_SW1 & ~0x30) | 0x20	/* ��PCA/PWM�л���P24(ECI) P25(CCP0) P26(CCP1) P27(CCP2) */

/*									7     6       5       4     3     2     1     0     Reset Value
//sfr CCAPM0 = 0xDA;	PWM �Ĵ���  -   ECOM0  CCAPP0  CCAPN0  MAT0  TOG0  PWM0  ECCF0   x000,0000	//PCA ģ��0
//sfr CCAPM1 = 0xDB;	PWM �Ĵ���  -   ECOM1  CCAPP1  CCAPN1  MAT1  TOG1  PWM1  ECCF1   x000,0000	//PCA ģ��1
//sfr CCAPM2 = 0xDC;	PWM �Ĵ���  -   ECOM2  CCAPP2  CCAPN2  MAT2  TOG2  PWM2  ECCF2   x000,0000	//PCA ģ��2
//sfr CCAPM3 = 0xDD;	PWM �Ĵ���  -   ECOM3  CCAPP3  CCAPN3  MAT3  TOG3  PWM3  ECCF3   x000,0000	//PCA ģ��3
;ECOMn = 1:	����ȽϹ��ܡ�
;CAPPn = 1:	���������ش��������ܡ�
;CAPNn = 1:	�����½��ش��������ܡ�
;MATn  = 1:	��ƥ���������ʱ������CCON�е�CCFn��λ��
;TOGn  = 1:	��ƥ���������ʱ��CEXn����ת��(CEX0/PCA0/PWM0/P3.7,CEX1/PCA1/PWM1/P3.5)
;PWMn  = 1:	��CEXn����ΪPWM�����
;ECCFn = 1:	����CCON�е�CCFn�����жϡ�
;ECOMn CAPPn CAPNn MATn TOGn PWMn ECCFn
;  0     0     0    0    0    0     0		00H	δ�����κι��ܡ�
;  x     1     0    0    0    0     x	 	20H	16λCEXn�����ش��������ܡ�
;  x     0     1    0    0    0     x	 	10H	16λCEXn�½��ش��������ܡ�
;  x     1     1    0    0    0     x	 	30H	16λCEXn/PCAn���أ��ϡ����أ����������ܡ�
;  1     0     0    1    0    0     x	 	48H	16λ�����ʱ����
;  1     0     0    1    1    0     x	 	4CH	16λ�������������
;  1     0     0    0    0    1     0		42H	8λPWM�����ж�
;  1     1     0    0    0    1     1		63H	8λPWM���ͱ�߿ɲ����ж�
;  1     0     1    0    0    1     1		53H	8λPWM���߱�Ϳɲ����ж�
;  1     1     1    0    0    1     1		73H	8λPWM���ͱ�߻�߱�;��ɲ����ж�
;*******************************************************************
;*******************************************************************/
#define		PCA0_none()				CCAPM0 = 0		/* PCA�޹��� */
#define		PCA0_PWM(nbit)			CCAPM0 = 0x42,PCA_PWM0 = (PCA_PWM0 & 0x3f) | (nbit<<6)	/* ���ж�PWMģʽ(PWM����) */
#define		PCA0_PWM_rise_int(nbit) CCAPM0 = 0x63,PCA_PWM0 = (PCA_PWM0 & 0x3f) | (nbit<<6)	/* �������ж�PWMģʽ(PWM����) */
#define		PCA0_PWM_fall_int(nbit) CCAPM0 = 0x53,PCA_PWM0 = (PCA_PWM0 & 0x3f) | (nbit<<6)	/* �½����ж�PWMģʽ(PWM����) */
#define		PCA0_PWM_edge_int(nbit) CCAPM0 = 0x73,PCA_PWM0 = (PCA_PWM0 & 0x3f) | (nbit<<6)	/* �����½����ж�PWMģʽ(PWM����) */
#define		PCA0_capture_rise()		CCAPM0 = (0x20 + 1)		/* �����ز���ģʽ */
#define		PCA0_capture_fall()		CCAPM0 = (0x10 + 1)		/* �½��ز���ģʽ */
#define		PCA0_capture_edge()		CCAPM0 = (0x30 + 1)		/* �����½��ز���ģʽ */
#define		PCA0_16bit_Timer()		CCAPM0 = (0x48 + 1)		/* 16λ�����ʱ��ģʽ */
#define		PCA0_High_PulseEnable()	CCAPM0 |= 0x04			/* 16λ�����ʱ�� �����������ģʽ */

#define		PCA1_none()				CCAPM1 = 0		/* PCA�޹��� */
#define		PCA1_PWM(nbit)			CCAPM1 = 0x42,PCA_PWM1 = (PCA_PWM1 & 0x3f) | (nbit<<6)	/* ���ж�PWMģʽ(PWM����) */
#define		PCA1_PWM_rise_int(nbit) CCAPM1 = 0x63,PCA_PWM1 = (PCA_PWM1 & 0x3f) | (nbit<<6)	/* �������ж�PWMģʽ(PWM����) */
#define		PCA1_PWM_fall_int(nbit) CCAPM1 = 0x53,PCA_PWM1 = (PCA_PWM1 & 0x3f) | (nbit<<6)	/* �½����ж�PWMģʽ(PWM����) */
#define		PCA1_PWM_edge_int(nbit) CCAPM1 = 0x73,PCA_PWM1 = (PCA_PWM1 & 0x3f) | (nbit<<6)	/* �����½����ж�PWMģʽ(PWM����) */
#define		PCA1_capture_rise()		CCAPM1 = (0x20 + 1)		/* �����ز���ģʽ */
#define		PCA1_capture_fall()		CCAPM1 = (0x10 + 1)		/* �½��ز���ģʽ */
#define		PCA1_capture_edge()		CCAPM1 = (0x30 + 1)		/* �����½��ز���ģʽ */
#define		PCA1_16bit_Timer()		CCAPM1 = (0x48 + 1)		/* 16λ�����ʱ��ģʽ */
#define		PCA1_High_PulseEnable()	CCAPM1 |= 0x04			/* 16λ�����ʱ�� �����������ģʽ */

#define		PCA2_none()				CCAPM2 = 0		/* PCA�޹��� */
#define		PCA2_PWM(nbit)			CCAPM2 = 0x42,PCA_PWM2 = (PCA_PWM2 & 0x3f) | (nbit<<6)	/* ���ж�PWMģʽ(PWM����) */
#define		PCA2_PWM_rise_int(nbit) CCAPM2 = 0x63,PCA_PWM2 = (PCA_PWM2 & 0x3f) | (nbit<<6)	/* �������ж�PWMģʽ(PWM����) */
#define		PCA2_PWM_fall_int(nbit) CCAPM2 = 0x53,PCA_PWM2 = (PCA_PWM2 & 0x3f) | (nbit<<6)	/* �½����ж�PWMģʽ(PWM����) */
#define		PCA2_PWM_edge_int(nbit) CCAPM2 = 0x73,PCA_PWM2 = (PCA_PWM2 & 0x3f) | (nbit<<6)	/* �����½����ж�PWMģʽ(PWM����) */
#define		PCA2_capture_rise()		CCAPM2 = (0x20 + 1)		/* �����ز���ģʽ */
#define		PCA2_capture_fall()		CCAPM2 = (0x10 + 1)		/* �½��ز���ģʽ */
#define		PCA2_capture_edge()		CCAPM2 = (0x30 + 1)		/* �����½��ز���ģʽ */
#define		PCA2_16bit_Timer()		CCAPM2 = (0x48 + 1)		/* 16λ�����ʱ��ģʽ */
#define		PCA2_High_PulseEnable()	CCAPM2 |= 0x04			/* 16λ�����ʱ�� �����������ģʽ */

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
#define	Pin0		0x01	//IO���� Px.0
#define	Pin1		0x02	//IO���� Px.1
#define	Pin2		0x04	//IO���� Px.2
#define	Pin3		0x08	//IO���� Px.3
#define	Pin4		0x10	//IO���� Px.4
#define	Pin5		0x20	//IO���� Px.5
#define	Pin6		0x40	//IO���� Px.6
#define	Pin7		0x80	//IO���� Px.7
#define	PinAll		0xFF	//IO��������

#define	GPIO_Pin_0		0x01	//IO���� Px.0
#define	GPIO_Pin_1		0x02	//IO���� Px.1
#define	GPIO_Pin_2		0x04	//IO���� Px.2
#define	GPIO_Pin_3		0x08	//IO���� Px.3
#define	GPIO_Pin_4		0x10	//IO���� Px.4
#define	GPIO_Pin_5		0x20	//IO���� Px.5
#define	GPIO_Pin_6		0x40	//IO���� Px.6
#define	GPIO_Pin_7		0x80	//IO���� Px.7
#define	GPIO_Pin_All	0xFF	//IO��������

#define	GPIO_PullUp		0	//����׼˫���
#define	GPIO_HighZ		1	//��������
#define	GPIO_OUT_OD		2	//��©���
#define	GPIO_OUT_PP		3	//�������

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
b6 -  EX4      : ���ж�INT4����
b5 -  EX3      : ���ж�INT3����
b4 -  EX2      : ���ж�INT2����
b2 - T1CLKO    : ���� T2 ���������P3.0�������Fck1 = 1/2 T1 �����
b1 - T1CLKO    : ���� T1 ���������P3.4�������Fck1 = 1/2 T1 �����
b0 - T0CLKO    : ���� T0 ���������P3.5�������Fck0 = 1/2 T0 �����
*/

#define		LVD_InterruptEnable()		ELVD = 1
#define		LVD_InterruptDisable()		ELVD = 0


//sfr WKTCL = 0xAA;	//STC11F\10��STC15ϵ�� ���Ѷ�ʱ�����ֽ�
//sfr WKTCH = 0xAB;	//STC11F\10��STC15ϵ�� ���Ѷ�ʱ�����ֽ�
//	B7		B6	B5	B4	B3	B2	B1	B0		B7	B6	B5	B4	B3	B2	B1	B0
//	WKTEN				S11	S10	S9	S8		S7	S6	S5	S4	S3	S2	S1	S0	n * 560us
#define		WakeTimerDisable()		WKTCH &= 0x7f	/* WKTEN = 0		��ֹ˯�߻��Ѷ�ʱ�� */
#define		WakeTimerSet(scale)		WKTCL = (scale) % 256,WKTCH = (scale) / 256 | 0x80	/* WKTEN = 1	����˯�߻��Ѷ�ʱ�� */


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
#define		PWM0_VECTOR		22	/* PWM0 P0.0~P0.7�ж� */
#define		PWMFD_VECTOR	23
#define		I2C_VECTOR		24
#define		USB_VECTOR		25
#define		HPWM1_VECTOR	26	/* �߼�PWM1 */
#define		HPWM2_VECTOR	27	/* �߼�PWM2 */
#define		PWM1_VECTOR		28	/* PWM1 P1.0~P1.7�ж� */
#define		PWM2_VECTOR		29	/* PWM2 P2.0~P2.7�ж� */
#define		PWM3_VECTOR		30	/* PWM3 P3.0~P3.7�ж� */
#define		PWM4_VECTOR		31	/* PWM4 P4.0~P4.7�ж� */
#define		PWM5_VECTOR		32	/* PWM5 P5.0~P5.4�ж� */
#define		PWM2FD_VECTOR	33	/* PWM2�쳣�ж� */
#define		PWM4FD_VECTOR	34	/* PWM4�쳣�ж� */
#define		TKSU_VECTOR		35	/* ���������ж� */
#define		RTC_VECTOR		36	/* RTC�ж� */
#define		P0INT_VECTOR	37	/* P0.0~P0.7�ж� */
#define		P1INT_VECTOR	38	/* P1.0~P1.7�ж� */
#define		P2INT_VECTOR	39	/* P2.0~P2.7�ж� */
#define		P3INT_VECTOR	40	/* P3.0~P3.7�ж� */
#define		P4INT_VECTOR	41	/* P4.0~P4.7�ж� */
#define		P5INT_VECTOR	42	/* P5.0~P5.4�ж� */
#define		P6INT_VECTOR	43	/* P6.0~P6.7�ж� */
#define		P7INT_VECTOR	44	/* P7.0~P7.7�ж� */
#define		P8INT_VECTOR	45	/* P8.0~P8.7�ж� */
#define		P9INT_VECTOR	46	/* P9.0~P9.7�ж� */

//=============================================================

#define	TRUE	1
#define	FALSE	0

#define	PolityLow			0	//�����ȼ��ж�
#define	PolityHigh			1	//�����ȼ��ж�

#define		ENABLE		1
#define		DISABLE		0

#endif
