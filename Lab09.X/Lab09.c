#pragma config FWDTEN = OFF // Compiler directive WDT=OFF stops PIC24 from automatic resets
/*-------------------------------------------------------------------------------
  HEADER FILES
  NOTE: Header files stored in the project directory must have their filename
  enclosed in quotes ("") rather than angle brackets (<>) below.
-------------------------------------------------------------------------------*/
#include <xc.h>             // Processor specific header file
#include "File1_09.h"       // Header file for external multiply_function()
#include "File2_09.h"       // Header file for external divide_function()
/*###############################################################################
# STEP 1: Edit the header file "File1_09.h".  Follow the directions in that file.
# STEP 2: Edit the header file "File2_09.h".  Follow the directions in that file.
# 
# No changes are required in this file (Lab09.c)
###############################################################################*/

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
    intVariable1 = 25;
    intVariable2 = 40;
    floatVariable1 = 17.7869;
    floatVariable2 = 30.12345;

    /*-----------------------------------------------------------------------
      Call Functions
    -----------------------------------------------------------------------*/
    product = multiply_function( intVariable1 , intVariable2 );

    quotient = divide_function( floatVariable1 , floatVariable2 );

    // intQuotient will be 0 since it is an integer
    intQuotient = divide_function( floatVariable1 , floatVariable2 );

    while(1);
    
}



/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab09.c
|  AUTHOR:        Rob Ostapiuk
|  DATE:          3 MAY 2007
|  DESCRIPTION:   Illustrates the methods used to implement multi-file projects.
|                 This file contains the main() function.
|  REQUIREMENTS:  (1) A heap is required for the printf() function
|                    (See handout for instructions on allocating a heap)
|                 (2)
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
|
|  REVISION HISTORY:
|
********************************************************************************/
