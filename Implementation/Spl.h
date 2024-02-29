
#define sw1 1<<14
#define M_1A 1<<12
#define M_2A 1<<13

int otp_generate(void)
{
	int i;
	for(i=1000;i<=9999;i++)
	{
		if((IOPIN0&sw1)==0)
		{
			delay_milliseconds(500);
		  break;
		}
		if(i==9998)
			i=999;
	}
	return i;
}

MOTOR(void)
{
	IODIR0|=M_1A|M_2A;
	while(1)
	{
		IOCLR0=M_1A;
		IOSET0=M_2A;
		delay_milliseconds(2000);
		IOSET0=M_1A;
		IOCLR0=M_2A;
		delay_milliseconds(2000);
	}
	IOCLR0=M_1A|M_2A;
	delay_milliseconds(200);
}
