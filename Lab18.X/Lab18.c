#pragma config FWDTEN = OFF // Compiler directive WDT=OFF stops PIC24 from automatic resets
/*-------------------------------------------------------------------------------
  HEADER FILES
  NOTE: The processor specific header file is not required since we will not
  be using any processor specific features - this is all generic C code
-------------------------------------------------------------------------------*/
#include <xc.h>                 // Processor specific header file
#include <stdio.h>              // Standard I/O - required for printf() function
#include "utilities.h"
/*-------------------------------------------------------------------------------
  PROGRAM CONSTANTS
-------------------------------------------------------------------------------*/
typedef enum {BANDSTOP, LOWPASS, HIGHPASS, BANDPASS} filterTypes;

/*-------------------------------------------------------------------------------
  VARIABLE DECLARATIONS
-------------------------------------------------------------------------------*/
filterTypes filter;

/*-------------------------------------------------------------------------------
  FUNCTION PROTOTYPES
-------------------------------------------------------------------------------*/
int	main( void );

/*===============================================================================
  FUNCTION:     main()
  DESCRIPTION:  Demos enumerations
  PARAMETERS:   none
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/
int main(void)
{
   filter = BANDPASS;
   
   switch (filter)
   {
    case BANDSTOP: BandStopFilter(); break;
    case LOWPASS:  LowPassFilter();  break;
    case HIGHPASS: HighPassFilter(); break;
    case BANDPASS: BandPassFilter(); break;
	}
	  
    while(1);  			
}



/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab18.c
|  AUTHOR:        Rob Ostapiuk
|  DATE:          16 MAY 2007
|  DESCRIPTION:   Enumerations
|  REQUIREMENTS:
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
|
|  REVISION HISTORY:
|
********************************************************************************/
