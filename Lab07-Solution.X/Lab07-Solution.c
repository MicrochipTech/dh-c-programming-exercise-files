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
  VARIABLE DECLARATIONS
-------------------------------------------------------------------------------*/
char charVariable1 = 5;
char charVariable2 = 0;
int intVariable1 = 1;
int intVariable2 = 10000;
long longVariable1 = 1000;
long longVariable2 = 2000;
float floatVariable1 = 34.5678;
float floatVariable2 = 156.78956;
int counter1;
int counter2;

/*-------------------------------------------------------------------------------
  FUNCTION PROTOTYPES
-------------------------------------------------------------------------------*/
int main(void);

/*===============================================================================
  FUNCTION:     main()
  DESCRIPTION:  Demonstrates for, while and do...while loops
  PARAMETERS:   none
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/
int main(void)
{
    /*---------------------------------------------------------------------------
      for Loop
    ---------------------------------------------------------------------------*/
    /*###########################################################################
    # STEP 1: Create a for loop to iterate the block of code below.  The loop
    #         should do the following:
    #         * Initialize counter1 to 1
    #         * Loop as long as counter1 is less than 5
    #         * Increment counter1 on each pass of the loop
    #         (HINT: for(init; test; action))
    ###########################################################################*/
    
    //### Your Code Here ###        //### Write the opening line of the for loop
    for( counter1 = 1 ; counter1 < 5 ; counter1++)
    {
         intVariable1 *= counter1;
         printf("FOR: intVariable1 = %d, counter1 = %d\n", intVariable1, counter1);
    }

    /*---------------------------------------------------------------------------
      while Loop
    ---------------------------------------------------------------------------*/
    /*###########################################################################
    # STEP 2: Create a while loop to iterate the block of code below.  The loop
    #         should run until charVariable1 is 0.
    ###########################################################################*/
	
    //### Your Code Here ###        //### Loop as long as charVariable1 is not 0
    while( charVariable1 != 0)
    {
         charVariable1--;
         charVariable2 += 5;
         printf("WHILE: charVariable1 = %d, charVariable2 = %d\n", charVariable1, charVariable2);
    }

    /*---------------------------------------------------------------------------
      do...while Loop
    ---------------------------------------------------------------------------*/

    counter1 = counter2 = 0;        //Clear variables used in for loop earlier

    /*###########################################################################
    # STEP 3: Create a do...while loop to iterate the block of code below.
    #         The loop should run until counter1 is greater than 100
    ###########################################################################*/
	
    //### Your Code Here ###        //### Write opening line of do loop
    do
    {
        counter1 += 5;
        counter2 = counter1 * 3;
        printf("DO: counter1 = %d, counter2 = %d\n", counter1, counter2);
    } while(counter1 <= 100);       //### Write closing line of loop - test counter1

 

    /*---------------------------------------------------------------------------
      do...while Loop with only one pass
    ---------------------------------------------------------------------------*/
    counter1 = 0;                  //Clear variable used in previous loop

    do
    {
        counter2++;
        printf("DO1: counter2 = %d\n", counter2);
    } while(counter1 != 0);  

    while(1);
  
}



/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab07.c
|  AUTHOR:        Denny Hopp
|  DATE:          13 DEC 2006
|  DESCRIPTION:   Illustrates the use of C different looping mechanisms.
|  REQUIREMENTS:  (1) A heap is required for the printf() function
|                    (See handout for instructions on allocating a heap)
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
|
|  REVISION HISTORY:
|  01 MAY 2007    Rob Ostapiuk
|                 Updated to meet new lab coding standards
|                 Added printf() to show variable values in each pass of loop
********************************************************************************/
