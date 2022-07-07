/*-------------------------------------------------------------------------------
  HEADER FILES
  NOTE: The processor specific header file is not required since we will not
  be using any processor specific features - this is all generic C code
-------------------------------------------------------------------------------*/
#include <xc.h>                 // Processor specific header file
#include <stdio.h>              // Standard I/O - required for printf() function

/*-------------------------------------------------------------------------------
  VARIABLE DECLARATIONS
-------------------------------------------------------------------------------*/
int x = 5;
int y[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int *p;

/*-------------------------------------------------------------------------------
  FUNCTION PROTOTYPES
-------------------------------------------------------------------------------*/
int main(void);

/*===============================================================================
  FUNCTION:     main()
  DESCRIPTION:  Illustrates  
  PARAMETERS:   none
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/
int main(void)
{	
	int i;

/*###############################################################################
# STEP 1: Initialize the pointer p with the address of the variable x
###############################################################################*/

	//### Your Code Here ###        //### Point to address of x


/*###############################################################################
# STEP 2: Complete the following printf() functions by adding in the appropriate
#         arguments as described in the control string.
###############################################################################*/	

	printf("The variable x is located at address 0x%X\n", &x);
	printf("The value of x is %d\n", x);
	printf("The pointer p is located at address 0x%X\n", &p);
	printf("The value of p is 0x%X\n", p);
	printf("The value pointed to by *p = %d\n", *p);

/*###############################################################################
# STEP 3: Write the integer value 10 to the location p is currently pointing to.
###############################################################################*/

        //### Your Code Here ###        //### x = 10 via pointer p (dereference)

	
	printf("The variable x is located at address 0x%X\n", &x);
	printf("The value of x is %d\n", x);
	
        p = &y;                         //p points to array y

/*-------------------------------------------------------------------------------
  Increment the value of each array element and print it out
-------------------------------------------------------------------------------*/	
	for (i = 0; i < 10; i++)
	{
/*###############################################################################
# STEP 4: Increment the value that p points to.
###############################################################################*/
            //### Your Code Here ###    //### Increment array element's value

            printf("y[%d] = %d\n", i, *p);

/*###############################################################################
# STEP 5: Increment the pointer p so that it points to the next item.
###############################################################################*/
            //### Your Code Here ###    //### Increment pointer to next array element

	}

/*-------------------------------------------------------------------------------
  Loop forever...
-------------------------------------------------------------------------------*/	
	while(1);	
}



/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab11.c
|  AUTHOR:        Rob Ostapiuk
|  DATE:          11 MAY 2007
|  DESCRIPTION:   This lab will illustrate the syntax associated with
|                 pointer assignment and usage.
|  REQUIREMENTS:  (1) A heap is required for the printf() function
|                    (See handout for instructions on allocating a heap)
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
|
|  REVISION HISTORY:
|
********************************************************************************/
