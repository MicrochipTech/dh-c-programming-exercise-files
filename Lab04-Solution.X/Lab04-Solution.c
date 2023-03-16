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
  DESCRIPTION:  
  PARAMETERS:   none
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/
int main(void)
{
        /*-----------------------------------------------------------------------
        VARIABLE DECLARATIONS - placed inside of main() to allow Varaible window
        * ---------------------------------------------------------------------*/
        unsigned char charVariable1 = 50;
        unsigned char charVariable2 = 100;
        float floatVariable1 = 34.5678;
        float floatVariable2 = 156.78956;
        int intVariable1 = 1000;
        int intVariable2 = 10000;
        long longVariable1 = 1000;
        long longVariable2 = 2000;

	/*-----------------------------------------------------------------------
	  Standard Mathematical Operators
	-----------------------------------------------------------------------*/
	/*###########################################################################
	# STEP 1:  Add charVariable1 to charVariable2 and store the result in
	#          charVariable1.  This may be done in two ways.  One uses the 
	#          ordinary addition operator, the other uses a compound assignment
	#          operator.  Write two lines of code to perform this operation 
	#          twice - once for each of the two methods.  
	#          Don't forget to end each statement with a semi-colon!
	###########################################################################*/
	       
	charVariable1 = charVariable1 + charVariable2;  //### Add using addition operator
      
	charVariable1 += charVariable2; //### Add using compound assignment operator
	
	/*###########################################################################
	# STEP 2:  Increment charVariable1.  There are several ways this could be
	#          done.  Use the one that requires the least amount of typing.
	###########################################################################*/
	      
	charVariable1++;                //### Increment charVariable1

	intVariable1 = intVariable2 - intVariable1;
	intVariable2--;

	longVariable2 *= longVariable1;

	floatVariable2 /= floatVariable1;
	
	/*-----------------------------------------------------------------------
	  Conditional Operator
	-----------------------------------------------------------------------*/
	/*###########################################################################
	# STEP 3: Use the conditional operator to set longVariable1 equal to 
	#         intVariable1 if charVariable1 is less than charVariable2.
	#         Otherwise, set longVariable1 equal to intVariable2
	# NOTE:   The comments below are broken up into 3 lines, but the code you
	#         need to write can fit on a single line.
	###########################################################################*/
	
	//### Your Code Here ###        //### If charVariable1 < charVariable2, then
	                                //### longVariable1 = intVariable1, otherwise
	                                //### longVariable1 = intVariable2
	longVariable1 = (charVariable1 < charVariable2) ? intVariable1 : intVariable2;
	
	/*-----------------------------------------------------------------------
	  Comma Operator
	  The code below increments charVariable1, then increments charVariable2 and
	  assigns the new value of charVariable2 to longVariable2.
	-----------------------------------------------------------------------*/	
	longVariable2 = (charVariable1++ , charVariable2++);
	
	/*-----------------------------------------------------------------------
	  Bit Shift Operator
	-----------------------------------------------------------------------*/
	/*###########################################################################
	# STEP 4: Shift longVariable2 one bit to the right.  This can be accomplished
	#         most easily using the appropriate compound assignment operator.
	###########################################################################*/
	       	
	longVariable2 >>= 1;            //### Shift longVariable2 one bit to the right
	
	/*-----------------------------------------------------------------------
	  Bitwise AND Operators
	-----------------------------------------------------------------------*/
	/*###########################################################################
	# STEP 5: Perform the operation (longVariable2 AND 0x30) and store the result
	#         back in longVariable2.  Once again, the easiest way to do this is
	#         to use the appropriate compound assignment operator that will
	#         perform an equivalent operation to the one in the comment below.
	#         (The operation is a bitwise AND - not a logical AND)
	###########################################################################*/
	      	
	longVariable2 &= 0x30;           //### longVariable2 = longVariable2 & 0x30
		
	/*---------------------------------------------------------------------------
	  Bitwise Inclusive OR Operators (both lines perform the same operation)
	---------------------------------------------------------------------------*/
	//longVariable2 = longVariable2 | 0x0F;
	longVariable2 |= 0x0F;
		
	/*---------------------------------------------------------------------------
	  Bitwise Exclusive OR Operators (both lines perform the same operation)
	---------------------------------------------------------------------------*/
	//longVariable2 = longVariable2 ^ 0x03;	
	longVariable2 ^= 0x03;
	
	/*-----------------------------------------------------------------------
	  Loop Forever and repeatedly increment longVariable2
	-----------------------------------------------------------------------*/
	while(1)
	{
		longVariable2++;
	}
}



/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab04.c   
|  AUTHOR:        Denny Hopp
|  DATE:          13 DEC 2006
|  DESCRIPTION:   Illustrates the use of C's basic arithmetic and logical
|                 operators.
|  REQUIREMENTS:  (1) A heap is required for the printf() function
|                    (See handout for instructions on allocating a heap)
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been 
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
| 
|  REVISION HISTORY:
|  01 MAY 2007    Rob Ostapiuk
|                 Updated to meet new lab coding standards
|                 Moved if statements and comparison operators to Lab05
|  15 FEB 2012    Dave Stokes
|               Moved variable definitions into main();
********************************************************************************/
