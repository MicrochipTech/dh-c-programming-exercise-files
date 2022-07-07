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
#define ARRAY_SIZE 10

/*-------------------------------------------------------------------------------
  FUNCTION PROTOTYPES
-------------------------------------------------------------------------------*/
void twosComplement(int *number);
void reverse1(int a[], int SIZE);
void reverse2(int *a, int SIZE);
int main(void);
void printArray(int *numbers, const int SIZE);

/*===============================================================================
  FUNCTION:     main()
  DESCRIPTION:  
  PARAMETERS:   none
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/
int main(void)
{

/*-------------------------------------------------------------------------------
  VARIABLE DECLARATIONS
-------------------------------------------------------------------------------*/
    int x;
    int y;
    int a[ARRAY_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};


    x = y = 5;
    printf("x = %d\n", x);            //Show original value of x
/*###############################################################################
# STEP1: Pass the variable x to the function twosComplement such that the value
#        of x itself may be changed by the function.  Note: The function expects
#        a pointer (address) as its parameter.
###############################################################################*/
    //### Your Code Here ###          //### Perform twos complement on x
    twosComplement(&x);
	
    printf("x = %d\n", x);            //Show twos complemented value of x
	
    printArray(a, ARRAY_SIZE);        //Show original array values
/*###############################################################################
# STEP 2: Pass the array 'a' to the function reverse1().  Use the constant
#         ARRAY_SIZE for the second parameter.
#         See definition of function reverse1() below.
###############################################################################*/
    //### Your Code Here ###          //### Reverse order of elements by passing array
    reverse1(a, ARRAY_SIZE);
	
    printArray(a, ARRAY_SIZE);        //Show reversed array values
	
/*###############################################################################
# STEP 3: Pass a pointer to array 'a' to the function reverse2().  Use the
#         constant ARRAY_SIZE for the second parameter.
#         See definition of function reverse2() below.
#         Hint: You do not need to define a new pointer variable to do this.
###############################################################################*/
    //### Your Code Here ###          //### Reverse order of elements by passing pointer
    reverse2(a, ARRAY_SIZE);
	
    printArray(a, ARRAY_SIZE);        //Show restored array values
	
    while(1);                         //Loop forever
}

/*===============================================================================
  FUNCTION:     twosComplement()
  DESCRIPTION:  Performs twos complement the long way, but demonstrates the 
                ability of this function to modify the variable passed to it.
  PARAMETERS:   pointer to int
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/

/*###############################################################################
# STEP 4: Complete the function header by defining a parameter called 'number'
#         that points to an integer (i.e. accepts the address of an integer
#         variable).
###############################################################################*/
//void twosComplement(/*### Your Code Here ###*/)
void twosComplement(int *number)
{
	*number = ~(*number);             //Bitwise complement value
	*number += 1;                     //Add 1 to result
}

/*===============================================================================
  FUNCTION:     reverse1()  
  DESCRIPTION:  Reverses the order of array elements using arrays
  PARAMETERS:   array of int, length of array 
  RETURNS:      nothing
  REQUIREMENTS: Array must contain an even number of elements
===============================================================================*/
void reverse1(int numbers[], const int SIZE)
{
	int temp, i, j;
	for (i = 0, j = (SIZE-1); i < (SIZE >> 1); i++, j--)
	{
		temp = numbers[i];            //Store left element in temp
		numbers[i] = numbers[j];      //Move right element into left
		numbers[j] = temp;            //Move temp to right element
	}
}	

/*===============================================================================
  FUNCTION:     reverse2()  
  DESCRIPTION:  Reverses the order of array elements using pointers
  PARAMETERS:   pointer to int array, length of array
  RETURNS:      nothing
  REQUIREMENTS: Array must contain an even number of elements
===============================================================================*/
void reverse2(int *numbers, const int SIZE)
{
	int temp, offset;
	for (offset = 0; offset < (SIZE >> 1); offset++)
	{
		temp = *(numbers + offset);
		*(numbers + offset) = *(numbers + (SIZE-1) - offset);
		*(numbers + (SIZE-1) - offset) = temp;
	}
}

/*===============================================================================
  FUNCTION:     printArray()  
  DESCRIPTION:  Prints out the elements of an array
  PARAMETERS:   pointer to int array, length of array
  RETURNS:      nothing
  REQUIREMENTS: Array must contain an even number of elements
===============================================================================*/
void printArray(int *numbers, const int SIZE)
{
	int i;
	
	printf("a = {");
	for (i = 0; i < (SIZE-1); i++)
	{
		printf("%d, ", *(numbers + i));
	}
	printf("%d}\n", *(numbers + i));	
}



/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab12.c
|  AUTHOR:        Rob Ostapiuk
|  DATE:          14 MAY 2007
|  DESCRIPTION:   Pointers, Arrays and Functions
|  REQUIREMENTS:  (1) A heap is required for the printf() function
|                    (See handout for instructions on allocating a heap)
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
|
|  REVISION HISTORY:
|  15 Feb 2012    Dave Stokes
|                 Moved variable declarations inside of main()'
|
|
********************************************************************************/