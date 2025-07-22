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

// Implements UPS_DESIGN_REQ001
void bvcheck()													//this section is working correctly
{	

	if(bv<2149)													//less than 10.5v it will show battery low         
	{	
	bvf = 0;
	display(str9 ,LINE2);
	t1 = 0;
	}
	if(bv>2252)
	{	
	bvf = 1;
	t1  = 1;
	}
}   
// Implements UPS_DESIGN_REQ002
void solarconditioncheck()
{

	if(orc==1)
	{
		if(sv>2662 & bv<2252)										//solar is greater than 13v and batt.less than 11v.
		{
		cc  = 0;													//solar charger ON
		mcr = 1;
		}
	}
	else
		{
			if(sv>2662 & bv<2457)										//solar is greater than 13v and batt.less than 11v.
			{
			cc  = 0;													//solar charger ON
			mcr = 1;
			}
		}															//mains charger OFF

		if(sv>2662 & bv>2968)
		{
		cc  = 1;											//solar charger OFF
		mcr = 1;											//mains charger OFF
		}

//	if(sv<2048 & (ipv>2000 & ipv<2700))
	if(sv<2458 & (ipv>2000 & ipv<2700))
	{
	cc  = 1;													//solar charger OFF
	mcr = 0;	     											//mains charger ON
	}

	if(sv>2662)							            			//solar is greater than 13v.
	{
	mcr = 1;													//mains charger OFF
	}
}





