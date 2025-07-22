/*
 * Real-Time Workshop code generation for Simulink model "cruise_control_r13_v0.mdl".
 *
 * Model Version                        : 1.90
 * Real-Time Workshop file version      : 5.1 $Date: 2003/08/08 18:37:24 $
 * Real-Time Workshop file generated on : Tue Jul 26 15:25:15 2005
 * TLC version                          : 5.1 (Aug  8 2003)
 * C source code generated on           : Tue Jul 26 15:25:15 2005
 */



#include <math.h>
#include <string.h>
#include "types.h"
#include "cruise_control_r13_v0_private.h"


void timer0()interrupt 1 using 2								//this section is working correctly
{																//to check whether 10 sec completed after mains is normal.
// Implements UPS_DESIGN_REQ007

	tcount++;
	TH0 = 0x4b;
	TL0 = 0xff;
		if(tcount==200)
		{
		orc = 0;
		tcount=0;
		EA = 0;
		TR0= 0;
		}
}
void initialisation()
{

	orc = 1;													//output relay OFF condition
	cc  = 1;
	mcr = 1;													//mains relay OFF condition
	t1  = 1;
	TMOD = 0x21;
	EA = 0;
	SCON  = 0x50;		         								/* SCON: mode 1, 8-bit UART, enable rcvr           */
    TH1   = 0xfd;               								/* TH1:  reload value for 9600 baud @ 11.0592MHz   */
    TR1   = 1;                   								/* TR1:  timer 1 run                               */
    TI    = 1;                   								/* TI:   set TI to send first char of UART         */
	TH0 = 0x4b;
	TL0 = 0xff;
	IE = 0x83;
	TR0 = 0;

	initLcd();
  	display(str0,LINE1);
	display(str1,LINE2);
	delay1();
	delay1();
	delay1();
	delay1();
	delay1();
	delay1();
	delay1();
	delay1();
	delay1();
	delay1();
	delay1();
	delay1();
}







