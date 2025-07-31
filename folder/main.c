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
#include "cruise_control_r13_v0.h"
#include "cruise_control_r13_v0_private.h"



// Implements CLS_SW_Mgmt_Req_4
void main()
{
   	int counter=1,blcount,preset;
	char slow=0;
      
	initialisation();	

	while(1)
	{

	a=0;b=0;c=0;
	channel_select(0);	
	preset=500;														//selection to multiplexor for input voltage.
	sprintf(buffer,"%d",read_ADC());
	opv = atoi (buffer);

	
	a=1;b=0;c=0;
	channel_select(0);											//selection to multiplexor for output voltage.
	sprintf(buffer,"%d",read_ADC());
	ipv = atoi (buffer);
	
	a=0;b=1;c=0;
	channel_select(0);											//selection to multiplexor for bat. voltage.
	sprintf(buffer,"%d",read_ADC());
	sv = atoi (buffer);

	a=1;b=1;c=0;
	channel_select(0);											//selection to multiplexor for output current.
	sprintf(buffer,"%d",read_ADC());
	bv = atoi (buffer);

	a=0;b=0;c=1;
	channel_select(0);											//selection to multiplexor for solar voltage.
	sprintf(buffer,"%d",read_ADC());
	sc = atoi (buffer);

	a=1;b=0;c=1;
	channel_select(0);											//selection to multiplexor for solar current.
	sprintf(buffer,"%d",read_ADC());
	oc = atoi (buffer);

	mainscheck();												//mains high/low cut off checking
	disp();														//display load on mains/invertor.
	bvcheck();													//display battery low on screen.
	solarconditioncheck();										//check the solar condition ok/not.
		
	if(blcount==500)
	{
		blcount=0;												//backlight off after time delay.
		bl=0;
	}
	
	if(slow==5)
	{
	slow=0;														//slow update the display.
	if(key1==0)	
	{	
		counter++;												//increment the counter if the key is pressed.									
		bl=1;
			if (counter==6)
				counter=1;

				}

	switch(counter)
	{
		case 1:
				display(str2,LINE1);							//display the output voltage.
				if(oc<50)
				opv = opv;
				else
				opv = 5000-opv;
				htod(opv,0);
				break;
		case 2:
			 	display(str3,LINE1);							//display the input voltage.
				htod(ipv,0);
				break;
		case 3:
			 	display(str6,LINE1);							//display the solar voltage.
				htod(sv*5,1);
				break;
		case 4:
			 	display(str4,LINE1);							//display the batt. voltage.
				htod((bv*5),1);
				break;
		case 5:
			 	display(str5,LINE1);							//display the output current.
				htod(oc,1);
				break;
	    }
		}
		slow++;
		blcount++;
	}
}

