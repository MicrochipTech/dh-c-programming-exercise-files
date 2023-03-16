#pragma config FWDTEN = OFF // Compiler directive WDT=OFF stops PIC24 from automatic resets
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
  DESCRIPTION:  Modifies integer variables based on values of the float and 
                char variables.
  PARAMETERS:   none
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/
int main(void)
{

        /*-------------------------------------------------------------------------------
          VARIABLE DECLARATIONS - placed inside of main() to allow Variable Window visibility
        -------------------------------------------------------------------------------*/
        char charVariable1 = 50;
        char charVariable2 = 100;
        float floatVariable1 = 34.5678;
        float floatVariable2 = 156.78956;
        int intVariable1 = 1000;
        int intVariable2 = 10000;

	/*---------------------------------------------------------------------------
	  Decision Making (if, else if, else statements) and Comparison Operators
	---------------------------------------------------------------------------*/
	/*###########################################################################
	# STEP 1: Increment intVariable1 if BOTH the following conditions are true:
	#         * floatVariable2 is greater than or equal to floatVariable1
	#         * charVariable2 is greater than or equal to charVariable1
	#         Remember to use parentheses to group logical operations.
	###########################################################################*/
	
	//### Your Code Here ###        //### Write the if condition  
	{
            //### Your Code Here ###    //### Increment intVariable1
	}

	/*###########################################################################
	# STEP 2: If the above is not true, and floatVariable1 is greater than 50
	#         then decrement intVariable2.  (HINT: else if)
	###########################################################################*/
	      
	//### Your Code Here ###        //### Write the else if condition
	{
            //### Your Code Here ###    //### Decrement intVariable2
	}

	/*###########################################################################
	# STEP 3: If neither of the above are true, set charVariable2 equal to 1.
	#         (HINT: else)
	###########################################################################*/
	      
	//### Your Code Here ###        //### Write the else condition
	{
            //### Your Code Here ###    //### Set charVariable2 equal to 1
	}

	while(1);
}



/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab05.c   
|  AUTHOR:        Denny Hopp
|  DATE:          13 DEC 2006
|  DESCRIPTION:   Illustrates the use of decision making (if) statements.
|  REQUIREMENTS:  (1) A heap is required for the printf() function
|                    (See handout for instructions on allocating a heap)
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been 
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
| 
|  REVISION HISTORY:
|  01 MAY 2007    Rob Ostapiuk
|                 Updated to meet new lab coding standards
|                 Moved if statements here from Lab04
********************************************************************************/
