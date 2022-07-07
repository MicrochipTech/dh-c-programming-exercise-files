/*-------------------------------------------------------------------------------
  HEADER FILES
  NOTE: The processor specific header file is not required since we will not
  be using any processor specific features - this is all generic C code
-------------------------------------------------------------------------------*/
#include <xc.h>                 // Processor specific header file
#include <stdio.h>              // Standard I/O - required for printf() function

/*-------------------------------------------------------------------------------
  MACROS
-------------------------------------------------------------------------------*/
#define square(m) ((m) * (m))
#define BaudRate(DesiredBR, FoscMHz) ((((FoscMHz * 1000000)/DesiredBR)/64)-1)

/*-------------------------------------------------------------------------------
  VARIABLE DECLARATIONS
-------------------------------------------------------------------------------*/
int x;
int SPBRG;
/*-------------------------------------------------------------------------------
  FUNCTION PROTOTYPES
-------------------------------------------------------------------------------*/
int	main( void );

/*===============================================================================
  FUNCTION:     main()
  DESCRIPTION:  Demos macros
  PARAMETERS:   none
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/
int main(void)
{
    x = square(3);
    printf("x = %d\n", x);
	
    SPBRG = BaudRate(9600, 16);
    printf("SPBRG = %d\n", SPBRG);

    while(1);
}



/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab19.c
|  AUTHOR:        Rob Ostapiuk
|  DATE:          16 MAY 2007
|  DESCRIPTION:   Macros
|  REQUIREMENTS:
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
|
|  REVISION HISTORY:
|
********************************************************************************/
