/*-------------------------------------------------------------------------------
  HEADER FILES
  NOTE: The processor specific header file is not required since we will not
  be using any processor specific features - this is all generic C code
-------------------------------------------------------------------------------*/
#include <xc.h>                 // Processor specific header file
#include <stdio.h>              // Standard I/O - required for printf() function

/*-------------------------------------------------------------------------------
  PROGRAM CONSTANTS
-------------------------------------------------------------------------------*/
#define CONSTANT1 0x33
const int CONSTANT2 = 0xCC;

/*-------------------------------------------------------------------------------
  VARIABLE DECLARATIONS
-------------------------------------------------------------------------------*/
int variable1 = CONSTANT1;
int variable2;
//int variable2 = CONSTANT2;   // Can't be done with constant defined as "const"

/*-------------------------------------------------------------------------------
  FUNCTION PROTOTYPES
-------------------------------------------------------------------------------*/
int main(void);

/*===============================================================================
  FUNCTION:     main()
  DESCRIPTION:  Prints out the value of the constants
  PARAMETERS:   none
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/
int main(void)
{
	/*-----------------------------------------------------------------------
	  Initialize Variables
	-----------------------------------------------------------------------*/
	variable2 = CONSTANT2;

	/*-----------------------------------------------------------------------
	  Print out storage size of each variable
	-----------------------------------------------------------------------*/
	printf("The first constant is 0x%X\n", CONSTANT1);
	printf("The second constant is 0x%X\n", CONSTANT2);

	/*-----------------------------------------------------------------------
	  Loop Forever
	-----------------------------------------------------------------------*/
	while(1);
}



/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab02.c
|  AUTHOR:        Rob Ostapiuk
|  DATE:          1 NOV 2006
|  DESCRIPTION:   Illustrates the difference between constants declared with the
|                 const keyword and those created with #define
|  REQUIREMENTS:  (1) A heap is required for the printf() function
|                    (See handout for instructions on allocating a heap)
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
|
|  REVISION HISTORY:
|  01 MAY 2007    Rob Ostapiuk
|                 Updated to meet new lab coding standards
********************************************************************************/
