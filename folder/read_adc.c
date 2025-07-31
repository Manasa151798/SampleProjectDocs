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



void htod (int c, bit s)										//this section is working correctly
{																//to display the values on the screen.

	int num=c/10;
	if(s==1)
		sprintf(res,"%3.1f",(float)num/100);
	else
		sprintf(res,"%d",num);
		display(res,0x8A);
}

int read_ADC()													//this section is working correctly
{																//to read the analog equivalent digital counts.

	int k=0;
	char i;
	CLK =0;
    		for(i=0; i<12; i++)
			{
	        k<<=1;
            CLK =1;
            CLK = 0;
            if(P1&4) k |=1;
            else k &= ~1;
			}
            CS=1;
       		 return k&=0xfff;
}

void channel_select(char n)										//this section is working correctly
{																//this is for channel selection for serial adc.
	char i,channel;
    CS = 0;

	if(n==0) channel= 0x0d;   
	else channel= 0x0f;
    			for(i=0; i<4; i++)
				{
                 CLK =0;
                 if(channel&8) DIn =1;
                 else DIn = 0;
                 CLK =1;
				 channel <<=1;
				}
   				P1 |= 4;  
}






