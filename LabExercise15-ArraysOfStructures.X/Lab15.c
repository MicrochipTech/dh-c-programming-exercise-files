/*-------------------------------------------------------------------------------
  HEADER FILES
  NOTE: The processor specific header file is not required since we will not
  be using any processor specific features - this is all generic C code
-------------------------------------------------------------------------------*/
#include <xc.h>                 // Processor specific header file
#include <stdio.h>              // Standard I/O - required for printf() function

/*-------------------------------------------------------------------------------
  STRUCTURE TYPE DEFINITION
-------------------------------------------------------------------------------*/
typedef struct {                //Complex number structure
        float re;               //Real part
        float im;               //Imaginary part
} complex;

/*-------------------------------------------------------------------------------
  VARIABLE DECLARATIONS
-------------------------------------------------------------------------------*/
complex x[3] = {{1.1, 1.2},{2.1, 2.2},{3.1, 3.2}};

/*-------------------------------------------------------------------------------
  FUNCTION PROTOTYPES
-------------------------------------------------------------------------------*/	
int main(void);

/*===============================================================================
  FUNCTION:     main()
  DESCRIPTION:  
  PARAMETERS:   none
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/
int main(void)
{
    int i;                     //Loop Count Variable
	
    /*-----------------------------------------------------------------------
      Loop through each array element
    -----------------------------------------------------------------------*/
    for(i = 0; i < 3; i++)
    {
/*###############################################################################
# STEP 1: Multiply the real (re) part of each array element by 10
#         HINT: Use *=
###############################################################################*/
   
        //### Your Code Here ###    //### Multiply re part of current array element by 10
	    
/*###############################################################################
# STEP 2: Multiply the imaginary (im) part of each array element by 5
#         HINT: Use *=
###############################################################################*/

        //### Your Code Here ###    //### Multiply im part of current array element by 5

    /*-------------------------------------------------------------------
      Print out the two structure members for each array element
    -------------------------------------------------------------------*/
        printf("%f + j%f\n", x[i].re, x[i].im);
    
    }
	
    while(1);                      //Main Loop
}



/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab15.c
|  AUTHOR:        Rob Ostapiuk
|  DATE:          15 MAY 2007
|  DESCRIPTION:   Arrays of Structures
|  REQUIREMENTS:  (1) A heap is required for the printf() function
|                    (See handout for instructions on allocating a heap)
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
|
|  REVISION HISTORY:
|
********************************************************************************/
