/*-------------------------------------------------------------------------------
  HEADER FILES
  NOTE: The processor specific header file is not required since we will not
  be using any processor specific features - this is all generic C code
-------------------------------------------------------------------------------*/
#include <xc.h>                 // Processor specific header file
#include <stdio.h>              // Standard I/O - required for printf() function

/*-------------------------------------------------------------------------------
  STRUCTURE TYPE DEFINITIONS
  These will be used as types for variable declarations below.
-------------------------------------------------------------------------------*/
typedef struct {     //Structure to hold voltage and current values of a circuit
	int v;       //Voltage
	int i;       //Current
} power;

typedef struct {     //Structure to hold max and min power values of a circuit
	power max;   //Maximum Power
	power min;   //Minimum Power
} range;

/*-------------------------------------------------------------------------------
  FUNCTION PROTOTYPES
-------------------------------------------------------------------------------*/
int main(void);

/*===============================================================================
  FUNCTION:     main()
  DESCRIPTION:  + Preloads the max voltage and current values for each of 3 
                  circuits.
                + Performs power calculations for each circuit
                + Uses a pointer to indicate circuit with maximum power
  PARAMETERS:   none
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/
int main(void)
{
/*-------------------------------------------------------------------------------
  VARIABLE DECLARATIONS
-------------------------------------------------------------------------------*/
long powerDiff1 = 0;          //Circuit 1 diference between max and min power
long powerDiff2 = 0;          //Circuit 2 diference between max and min power
long powerDiff3 = 0;          //Circuit 3 diference between max and min power
long maxPowerDiff = 0;        //Maximum power difference of the 3 circuits

                              /*-------------------------------------------------
                                Notice the use of the structure's name as the
                                variable's type in the following declarations
                              -------------------------------------------------*/
power PMax1;                  //Maximum power of circuit 1
power PMin1;                  //Minimum power of circuit 1
power PMax2;                  //Maximum power of circuit 2
power PMin2;                  //Minimum power of circuit 2
power PMax3;                  //Maximum power of circuit 3
power PMin3;                  //Minimum power of circuit 3
power PMax;                   //Maximum power values from circuit with most power

range PRange1;                //Power range of circuit 1
range PRange2;                //Power range of circuit 2
range PRange3;                //Power range of circuit 3
range PMaxRange;              //Power range from circuit with most power

power *pPower;                //Pointer to power structure
range *pRange;                //Pointer to range structure
	
        /*-----------------------------------------------------------------------
          METHOD 1
          It is assumed that the maximum and minimum voltage and current values
          were determined from another piece of code that continuously read the
          A/D converter and stored the appropriate values into the structure
          members.  The following code assigns these values to the members since
          we are not working with the A/D today. (We have to get them somehow!)
          Assume that these values are raw A/D results.
        -------------------------------------------------------------------------
        Initialize the maximum voltage & current values for each circuit
	-----------------------------------------------------------------------*/
        PMax1.v = 500;          //Circuit 1 max voltage
        PMax1.i = 50;           //Circuit 1 max current
        PMax2.v = 400;          //...
        PMax2.i = 40;
        PMax3.v = 600;
        PMax3.i = 60;
        /*-----------------------------------------------------------------------
          Initialize the minimum voltage & current values for each circuit
        -----------------------------------------------------------------------*/
        PMin1.v = 100;          //Circuit 1 min voltage
        PMin1.i = 10;           //Circuit 1 min current
        PMin2.v = 200;          //...
        PMin2.i = 20;
        PMin3.v = 300;
        PMin3.i = 30;

        /*-----------------------------------------------------------------------
          Calculate difference between maximum and minimum power of each circuit
          using the individual circuit power structures.
        -----------------------------------------------------------------------*/

/*###############################################################################
# STEP 1: Calculate the difference between maximum and minimum power in circuit 1
#         using the individual power structures (i.e. variables PMax1 & PMin1).
#         Algebraic Notation: Pdiff = (Vmax * Imax) - (Vmin * Imin)
###############################################################################*/

        powerDiff1 = (PMax1.v * PMax1.i) - (PMin1.v * PMin1.i);     //### Your Code Here ###
        powerDiff2 = (PMax2.v * PMax2.i) - (PMin2.v * PMin2.i);
        powerDiff3 = (PMax3.v * PMax3.i) - (PMin3.v * PMin3.i);
		
        /*-----------------------------------------------------------------------
          Determine which circuit had the highest power and save it in the
          maximum power structure.
        -----------------------------------------------------------------------*/
        if (powerDiff1 > powerDiff2)
        {
            pPower = &PMax1;
            maxPowerDiff = powerDiff1;
        }
        else
        {
            pPower = &PMax2;
            maxPowerDiff = powerDiff2;
        }
		
        if (maxPowerDiff < powerDiff3)
        {
            pPower = &PMax3;
            maxPowerDiff = powerDiff3;
        }
		
        /*-----------------------------------------------------------------------
          Set the PMax structure to the pointer pointing to the maximum
          power circuit.
        -----------------------------------------------------------------------*/
        PMax = *pPower;
		
//===============================================================================
        /*-----------------------------------------------------------------------
          METHOD 2
        This time, we will use the structure of structures to do the same thing
        as above.  Just as before, we need to initialize the structures with
        the values we would have obtained using an A/D converter.
        -------------------------------------------------------------------------
         Initialize the maximum voltage & current values for each circuit
        -----------------------------------------------------------------------*/
        PRange1.max.v = 500;     //Circuit 1 max voltage
        PRange1.max.i = 50;      //Circuit 1 max current
        PRange2.max.v = 400;     //...
        PRange2.max.i = 40;
        PRange3.max.v = 600;
        PRange3.max.i = 60;
        
        /*-----------------------------------------------------------------------
          Initialize the minimum voltage & current values for each circuit
        -----------------------------------------------------------------------*/
        PRange1.min.v = 100;     //Circuit 1 min voltage
        PRange1.min.i = 10;      //Circuit 2 min current
        PRange2.min.v = 200;     //...
        PRange2.min.i = 20;
        PRange3.min.v = 300;
        PRange3.min.i = 30;
			
        /*-----------------------------------------------------------------------
          Calculate difference between maximum and minimum power of each circuit
          using the structure of structures.
        -----------------------------------------------------------------------*/
/*###############################################################################
# STEP 2: Calculate the difference between maximum and minimum power in circuit 1
#         using the structure of structures (i.e. variable PRange1).
#         Algebraic Notation: Pdiff = (Vmax * Imax) - (Vmin * Imin)
###############################################################################*/

        powerDiff1 = (PRange1.max.v * PRange1.max.i) - (PRange1.min.v * PRange1.min.i);     //### Your Code Here ###
        powerDiff2 = (PRange2.max.v * PRange2.max.i) - (PRange2.min.v * PRange2.min.i);
        powerDiff3 = (PRange3.max.v * PRange3.max.i) - (PRange3.min.v * PRange3.min.i);
		
        /*-----------------------------------------------------------------------
          Determine which circuit had the highest power and save it in the
          maximum power structure.
	-----------------------------------------------------------------------*/
        if (powerDiff1 > powerDiff2)
        {
            pRange = &PRange1;
            maxPowerDiff = powerDiff1;
        }
        else
        {
            pRange = &PRange2;
            maxPowerDiff = powerDiff2;
        }
		
        if (maxPowerDiff < powerDiff3)
        {
            pRange = &PRange3;
            maxPowerDiff = powerDiff3;
        }

        /*-----------------------------------------------------------------------
          Now, by setting the PMaxRange structure to the pointer pointing to the
          max power circuit, we will capture the entire circuit's voltage and
          current parameters, both max and min in one line of code.
        -----------------------------------------------------------------------*/
        PMaxRange = *pRange;

        while(1) ;
}



/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab14.c
|  AUTHOR:        Denny Hopp
|  DATE:          13 DEC 2006
|  DESCRIPTION:   Structures
|  REQUIREMENTS:
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
|
|  REVISION HISTORY:
|  15 MAY 2007    Rob Ostapiuk
|                 Updated to meet new lab coding standards
|                 Simplified application
|  15 Feb 2012    Dave Stokes
|                 moved variable declarations inside of main();
********************************************************************************/