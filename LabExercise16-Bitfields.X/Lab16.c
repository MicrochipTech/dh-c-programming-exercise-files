/*-------------------------------------------------------------------------------
  HEADER FILES
  NOTE: The processor specific header file is not required since we will not
  be using any processor specific features - this is all generic C code
-------------------------------------------------------------------------------*/
#include <xc.h>                 // Processor specific header file
#include <stdio.h>              // Standard I/O - required for printf() function

/*-------------------------------------------------------------------------------
  FUNCTION PROTOTYPES
-------------------------------------------------------------------------------*/
int	main( void );

/*===============================================================================
  FUNCTION:     main()
  DESCRIPTION:  Demos bitfield structures
  PARAMETERS:   none
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/
int main(void)
{
    union {
	char fullByte;
	struct  {
                    int bit0: 1;
                    int bit1: 1;
                    int bit2: 1;
                    int bit3: 1;
                    int bit4: 1;
                    int bit5: 1;
                    int bit6: 1;
                    int bit7: 1;
                } bitField;
        } bitByte;

	while(1)
        {
/*###############################################################################
# DEMO: Set a breakpoint on the next line and run code to this point.  Next,
#       single step through the following lines and observe the changes in the
#       watch window.  Note that every variable in the watch window shares the
#       same address.  The individual bits are all part of the same byte, but
#       the bits themselves do not overlap eachother.
###############################################################################*/

            bitByte.fullByte = 0x55;
	    bitByte.bitField.bit0 = 0;
	    bitByte.bitField.bit2 = 0;
	    bitByte.bitField.bit7 = 1;			
        }
}



/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab11.c
|  AUTHOR:        Rob Ostapiuk
|  DATE:          16 MAY 2007
|  DESCRIPTION:   Bit Fields
|  REQUIREMENTS:
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
|
|  REVISION HISTORY:
|
|   15 FEB 2012 David Stokes    Moved variable definitions inside of main() to allow
|                MPLAB X to display values in Variables Windos
|
********************************************************************************/
