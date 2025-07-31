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


void mainscheck()												//this section is working correctly
{	
// Implements CLS_SW_L2_Req_7
// Implements SP-1

		if(!t2)
		{	
		orc = 1;
		mf = 1;
		EA = 0;
	   	TR0 = 0;
		}
			if(t2)
			{
			    	if(ipv<1600)			       				//MAINS LOW CUT OFF  less than 160Volts
					{
					orc = 1;									//output relay OFF
					mf = 1;
					EA = 0;
				   	TR0 = 0;
					}
							if(ipv>2000 & ipv<2500)				//MAINS NORMAL		less than 245V & greater than 200volts.
							{
							    if(mf)
							    {
								EA = 1;
							   	TR0 = 1;
								mf = 0;
								}
						    }
					if(ipv>2700)				    			//MAINS HIGH CUT OFF  greater than 270Volts.		
					{
					orc = 1;									//output relay OFF
					mf = 1;							
					EA = 0;
				   	TR0 = 0;
					}
			} 
	
		if(ipv<200)
		ipv = 0;
		if(opv<200)
		opv = 0;
}

void disp()														//this section is working correctly
	{															//to display loaad on mains/invertor.

// Implements CLS_SW_Mgmt_Req_6
// Implements SP-2
	if(bvf)
		{
			if(orc==1)
			{

			display(str8,LINE2);
			}
			else 
			{
			display(str7 ,LINE2);
			}
		}
	}






