#include<LPC21xx.h>
#include<string.h>
#include"Delay.h"
#include"I2Cheader.h"
#include"UART0header.h"
#include"Keypadheader.h"
#include"LCD_4bitheader.h"
#include"Spl.h"


#define Switch 1<<15


int main()
{
	unsigned char in_pass[5],save[5],attempt=0,OTP_KEY[5],OTP_RE[5];
	int i;
	LCD_Config();
	UART0_Config();
	init_i2c();
	i2c_eeprom_page_write(I2C_EEPROM_SA,0x00,"1399",4);
	i2c_eeprom_seq_read(I2C_EEPROM_SA,0X00,save,4);
	LCD_String("Security System");
	delay_seconds(5);
	LCD_Command(0x01);
	LCD_String(" Press Switch");
	delay_seconds(2);
	while((IOPIN0&Switch)!=0);
	delay_milliseconds(300);
	LCD_Command(0x01);
	LCD_String("Switch Pressed");
	delay_milliseconds(5);
//	UART0_String(save);
	//UART0_String("\r\n");
	RE_PIN:
	LCD_Command(0x01);
	LCD_String("Enter Password");
	LCD_Command(0xc0);
//PASSWORD PROCESS
	for(i=0;i<4;i++)
	{
		in_pass[i]=(keyscan()+48);
	  LCD_Data(in_pass[i]);	
	}
	in_pass[i]='\0';
	//UART0_String(in_pass);
	if(((strcmp(in_pass,save))==0))
	{
		LCD_Command(0X01);
		LCD_String(" Correct Password");
		//LCD_Command(0Xc0);
	//	LCD_String("     VALID");
	}
	else if(++attempt==3)
	{
		LCD_Command(0X01);
		LCD_String(" Access Denided");
		delay_milliseconds(1000);
		return 0;
	}
	else
	{
		LCD_Command(0X01);
		LCD_String(" Invalid");
		LCD_Command(0Xc0);
		LCD_String(" Password");
		delay_milliseconds(3);
		LCD_Command(0X01);
		LCD_String(" Re-Enter");
		LCD_Command(0Xc0);
		LCD_String(" Password");
    delay_milliseconds(3);		
		goto RE_PIN;
	}
//OTP KEYPAD
		LCD_Command(0X01);
		LCD_String(" Press KEY ");
		LCD_Command(0Xc0);
		LCD_String(" OTP Generate");
		delay_milliseconds(500);
	sprintf(OTP_RE,"%d",otp_generate());
	UART0_String("at");

	//UART0_STR("\r\n");
	UART0_String("at+cmgf=1");
	UART0_String("\r\n");
	delay_milliseconds(20);
	UART0_String("at+cmgs=\"+918838482186\"\r\n");
	UART0_String("\r\n");
	delay_milliseconds(20);
	UART0_String(OTP_RE);
	delay_milliseconds(20);
	UART0_Tx(0X1A);
		//sprintf(OTP_RE,"%d",otp_generate());
	OTPRE:
		LCD_Command(0X01);
		LCD_String("Enter Your OTP");
		LCD_Command(0Xc0);

	//KEYPAD TAKE OTP
		for(i=0;i<4;i++)
	{
		OTP_KEY[i]=(keyscan()+48);
		LCD_Data(OTP_KEY[i]);	
	}
	OTP_KEY[i]='\0';

	if(((strcmp(OTP_RE,OTP_KEY))==0))
	{
		LCD_Command(0X01);
		LCD_String("  OTP");
		LCD_Command(0Xc0);
		LCD_String("  Matched");
	}
	else if(++attempt==3)
	{
		LCD_Command(0X01);
		LCD_String(" Access Denided");
		LCD_Command(0xc0);
		LCD_String("Bye!!!");
		delay_milliseconds(1000);
		return 0;
	}
	else
	{
		LCD_Command(0X01);
		LCD_String("Invalid OTP");
		delay_milliseconds(3);
		LCD_Command(0X01);
		LCD_String(" Re-Enter OTP");
		goto OTPRE;
	}
		LCD_Command(0X01);
		LCD_String("Access Granted");
	delay_milliseconds(100);
	LCD_Command(0Xc0);
	LCD_String("MOTOR ON");
	MOTOR();
}
