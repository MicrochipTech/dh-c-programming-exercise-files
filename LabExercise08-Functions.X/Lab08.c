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

/*###############################################################################
# STEP 1: Write two function prototypes based on the following information:
#         + Function Name: multiply_function()
#           - Parameters: int x, int y
#           - Return type: int
#         + Function Name: divide_function()
#           - Parameters: float x, float y
#           - Return type: float 
###############################################################################*/
       
//## Your Code Here ###                     //### multiply_function() prototype
      
//## Your Code Here ###                     //### divide_function() prototype

/*===============================================================================
  FUNCTION:     main()
  DESCRIPTION:  * Assigns numeric values to variables.
                * Calls multiply_function() and divide_function() to show how 
                  variables are passed to functions and values are returned.
  PARAMETERS:   none
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/
int main(void)
{
        /*-------------------------------------------------------------------------------
          VARIABLE DECLARATIONS - moved inside of main() to allow MPLABX variable window
        -------------------------------------------------------------------------------*/
        int intVariable1 = 0;
        int intVariable2 = 0;
        int product = 0;
        float floatVariable1 = 0;
        float floatVariable2 = 0;
        float quotient = 0;
        int intQuotient = 0;
	
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
/*###############################################################################
# STEP 2: Call the multiply_function() and divide_function().
#         (a) Pass the variables intVariable1 and intVariable2 to the
#             multiply_function().
#         (b) Store the result of multiply_function() in the variable "product".
#         (c) Pass the variables floatVariable1 and floatVariable2 to the
#             divide_function().
#         (d) Store the result of divide_function() in the variable "quotient".
###############################################################################*/

        //### Your Code Here ###        //### Call multiply_function
        
        //### Your Code Here ###        //### Call divide_function
	    
        // intQuotient will be 0 since it is an integer
        intQuotient = divide_function( floatVariable1 , floatVariable2 );

        while(1) ;

}

/*===============================================================================
  FUNCTION:     multiply_function()
  DESCRIPTION:  Receives two variables, multiplies them and returns the product.
  PARAMETERS:   int x, int y
  RETURNS:      Product of x and y
  REQUIREMENTS: none
===============================================================================*/

/*###############################################################################
# STEP 3: Write the function multiply_function().  Use the function prototype
#         you wrote in STEP 1 as the function header.  In the body, all you
#         need to do is return the product of the two input parameters (x * y).
###############################################################################*/
     
//### Your Code Here ###                    //### Function Header
{
    //### Your Code Here ###                //### Function Body
}

/*===============================================================================
  FUNCTION:     divide_function()
  DESCRIPTION:  Receives two variables, divides them and returns the quotient.
  PARAMETERS:   int x, int y
  RETURNS:      Quotient of x and y
  REQUIREMENTS: none
===============================================================================*/

/*###############################################################################
# STEP 4: Write the function divide_function().  Use the function prototype
#         you wrote in STEP 1 as the function header.  In the body, all you
#         need to do is return the quotient of the two input parameters (x / y).
###############################################################################*/
     
//### Your Code Here ###                    //### Function Header
{
    //### Your Code Here ###                //### Function Body
}



/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab08.c   
|  AUTHOR:        Denny Hopp
|  DATE:          13 DEC 2006
|  DESCRIPTION:   Illustrates the creation and use of functions.
|  REQUIREMENTS:  (1) A heap is required for the printf() function
|                    (See handout for instructions on allocating a heap)
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been 
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
| 
|  REVISION HISTORY:
|  01 MAY 2007    Rob Ostapiuk
|                 Updated to meet new lab coding standards
|  15 FEB 2012    Dave Stokes
|                 modified to allow MPLABX Variables Window to easily operate
********************************************************************************/
