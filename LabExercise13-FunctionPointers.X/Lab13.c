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
float y1, y2, y3;

/*-------------------------------------------------------------------------------
  FUNCTION PROTOTYPES
-------------------------------------------------------------------------------*/
float justx(float x);
float xsquared(float x);
float xcubed(float x);
float integral(float a, float b, float (*f)(float));
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
	/*---------------------------------------------------------------------------
	  Evaluate y1 = Int x dx over the interval 0 to 1
	---------------------------------------------------------------------------*/
	y1 = integral(0, 1, justx);
	printf("y1 = integral of x dx over 0 to 1 = %f\n", y1);

	/*---------------------------------------------------------------------------
	  Evaluate y2 = Int x^2 dx over the interval 0 to 1
	---------------------------------------------------------------------------*/	
	y2 = integral(0, 1, xsquared);
	printf("y2 = integral of x^2 dx over 0 to 1 = %f\n", y2);
	
	/*---------------------------------------------------------------------------
	  Evaluate y3 = Int x^3 dx over the interval 0 to 1
	---------------------------------------------------------------------------*/	
	y3 = integral(0, 1, xcubed);
	printf("y3 = integral of x^3 dx over 0 to 1 = %f\n", y3);
	
	while(1);
}

/*===============================================================================
  FUNCTION:     justx()
  DESCRIPTION:  Implements function y = x
  PARAMETERS:   float x
  RETURNS:      float x
  REQUIREMENTS: none
===============================================================================*/
float justx(float x)
{
	return x;
}

/*===============================================================================
  FUNCTION:     xsquared()
  DESCRIPTION:  Implements function y = x^2
  PARAMETERS:   float x
  RETURNS:      float (x * x)
  REQUIREMENTS: none
===============================================================================*/
float xsquared(float x)
{
	return (x * x);
}

/*===============================================================================
  FUNCTION:     xcubed()
  DESCRIPTION:  Implements function y = x^3
  PARAMETERS:   float x
  RETURNS:      float (x * x * x)
  REQUIREMENTS: none
===============================================================================*/
float xcubed(float x)
{
	return (x * x * x);
}

/*===============================================================================
  FUNCTION:     integral()
  DESCRIPTION:  Evaluates the integral of the function passed to it over the 
                interval a to b.
  PARAMETERS:   interval end points a & b and function to integrate
  RETURNS:      integral of function f over interval a to b
  REQUIREMENTS: none
  SOURCE:       Adapted from example at: 
                  http://en.wikipedia.org/wiki/Function_pointer
===============================================================================*/
float integral(float a, float b, float (*f)(float))
{
    float sum = 0.0;
    float x;
    int n;

    //Evaluate integral{a,b} f(x) dx
    for (n = 0; n <= 100; n++)
    {
        x = ((n / 100.0) * (b-a)) + a;
        sum += (f(x) * (b-a)) / 101.0;
    }
    return sum;
}


/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab13.c
|  AUTHOR:        Rob Ostapiuk
|  DATE:          14 MAY 2007
|  DESCRIPTION:   Function Pointers
|  REQUIREMENTS:  (1) A heap is required for the printf() function
|                    (See handout for instructions on allocating a heap)
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
|
|  REVISION HISTORY:
|
********************************************************************************/
