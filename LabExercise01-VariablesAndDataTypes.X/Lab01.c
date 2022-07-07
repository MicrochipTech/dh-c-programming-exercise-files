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
#define CONSTANT1 50


/*-------------------------------------------------------------------------------
  FUNCTION PROTOTYPES
-------------------------------------------------------------------------------*/
int main(void);


/*===============================================================================
  FUNCTION:     main()
  DESCRIPTION:  Prints out the storage size of each variable
  PARAMETERS:   none
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/
int main(void)
{
        /*-----------------------------------------------------------------------
        VARIABLE DECLARATIONS
        -----------------------------------------------------------------------*/
        char charVariable;
        double doubleVariable;
        float floatVariable;
        int intVariable;
        long longVariable;              // Same as "long int"
        short shortVariable;            // Same as "short int"

        /*-----------------------------------------------------------------------
	  Initialize Variables
	-----------------------------------------------------------------------*/
	charVariable = CONSTANT1;
        doubleVariable = CONSTANT1;
	floatVariable = CONSTANT1;
	intVariable = CONSTANT1;
	longVariable = CONSTANT1;
	shortVariable = CONSTANT1;

	/*-----------------------------------------------------------------------
	  Print out storage size of each variable
	-----------------------------------------------------------------------*/
	printf("A character variable requires %d byte\n", sizeof( char ));
	printf("A short variable requires %d bytes\n", sizeof( short ));
	printf("An integer variable requires %d bytes\n", sizeof( int ));
	printf("A long variable requires %d bytes\n", sizeof( long ));
	printf("A floating point variable requires %d bytes\n", sizeof( float ));
	printf("A double variable requires %d bytes\n", sizeof( double ));

	/*-----------------------------------------------------------------------
	  Loop Forever
	-----------------------------------------------------------------------*/
	while(1);
}



/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab01.c
|  AUTHOR:        Denny Hopp
|  DATE:          13 DEC 2006
|  DESCRIPTION:   Illustrates memory usage of C's built-in data types.
|  REQUIREMENTS:  (1) A heap is required for the printf() function
|                    (See handout for instructions on allocating a heap)
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
|
|  REVISION HISTORY:
|  01 MAY 2007    Rob Ostapiuk
|                 Updated to meet new lab coding standards
|  14 FEB 2012    Dave Stokes
|                 Moved variable declaration inside of main() to auto poputlate
|                 the Variable Window in MPLAB X for rev 2.7
********************************************************************************/