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
int main(void);

/*===============================================================================
  FUNCTION:     main()
  DESCRIPTION:  Prints out various data types with different format settings
  PARAMETERS:   none
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/
int main(void)
{
	/*-----------------------------------------------------------------------
	  Print out various data types with different format settings
	-----------------------------------------------------------------------*/
	printf("25 as decimal (d): %d\n", 25);                   //%d = decimal int
	printf("'a' as character (c): %c\n", 'a');               //%c = character
	printf("'a' as decimal (d): %d\n", 'a');                 //%d = decimal int
	printf("2.55 as float (f): %f\n", 2.55);                 //%f = float
	printf("2.55 as decimal (d): %d\n", 2.55);               //%d = decimal int
	printf("6.02e23 as exponent (e): %e\n", 6.02e23);        //%e = float exp
	printf("6.02e23 as decimal (d): %d\n", 6.02e23);         //%d = decimal int
	printf("'Microchip' as string (s): %s\n", "Microchip");  //%s = string
	printf("'Microchip' as decimal (d): %d\n", "Microchip"); //%d = decimal int

	/*-----------------------------------------------------------------------
	  Loop Forever
	-----------------------------------------------------------------------*/
	while(1);
}



/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab03.c
|  AUTHOR:        Rob Ostapiuk
|  DATE:          1 NOV 2006
|  DESCRIPTION:   Illustrates the use of the printf() function
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
