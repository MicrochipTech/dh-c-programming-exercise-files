#pragma config FWDTEN = OFF // Compiler directive WDT=OFF stops PIC24 from automatic resets
/*-------------------------------------------------------------------------------
  HEADER FILES
-------------------------------------------------------------------------------*/
#include <xc.h>
#include <stdio.h>
/*-------------------------------------------------------------------------------
  CODE
-------------------------------------------------------------------------------*/
int main(void)
{

/*-------------------------------------------------------------------------------
  VARIABLE DECLARATIONS
 *      Moved inside of main() to allow acess via Variables Window
-------------------------------------------------------------------------------*/

union
{
    long Acc32;
    int  Acc16;
    char Acc8;

    struct
    {
        unsigned AccWordL:16;
        unsigned AccWordH:16;
    }AccWord;

    struct
    {
        unsigned char AccByteL:8;
        unsigned char AccByteH:8;
        unsigned char AccByteU:8;
        unsigned char AccByteUU:8;
    }AccByte;

} AccumulatorA;


typedef union
{
    long Acc32;
    int Acc16;
    char Acc8;

    struct
    {
        unsigned AccWordL:16;
        unsigned AccWordH:16;
    }AccWord;

    struct
    {
        unsigned char AccByteL:8;
        unsigned char AccByteH:8;
        unsigned char AccByteU:8;
        unsigned char AccByteUU:8;
    }AccByte;

} AccumulatorB;

    while(1)
    {

    /*###############################################################################
    # STEP 1:   Build the code, set a breakpoint at the Nop(); and run. 
    #           Examine AccumulatorA in the watch window and note how the elements
    #           of the union can be viewed independently 
    ###############################################################################*/  

        AccumulatorA.Acc32 = 0x76543210; 
        Nop();                                      // set breakpoint here                


    /*###############################################################################
    # STEP 2:   Single step through the remainder of the code and observe as the
    #           members of the union are updated in the watch window
    #           Note that all the members share the same address.
    ###############################################################################*/

        AccumulatorA.AccByte.AccByteL  = 'M';       // set breakpoint here
        AccumulatorA.AccByte.AccByteH  = 'C';
        AccumulatorA.AccByte.AccByteU  = 'H';
        AccumulatorA.AccByte.AccByteUU = 'P';


    /*###############################################################################
    # STEP 3:   Declare a variable named AccB of type AccumulatorB
    #           Follow the instructions below to clear AccB, then assign MCHP to each
    #           byte of AccB in sequence.
    #           Set a breakpoint at the Nop(); and single step through while watching
    #           the effect of the updates in the Variable window
    ###############################################################################*/

        AccumulatorB AccB;                          // ### Declare variable AccB of type AccumulatorB

        AccB.Acc32 = 0;                             // ### Clear AccB
        Nop();                                      // set  breakpoint here
 
        AccB.AccByte.AccByteL  = 'M';               // ### Assign 'M' to AccB low byte
        AccB.AccByte.AccByteH  = 'C';               // ### Assign 'C' to AccB high byte
        AccB.AccByte.AccByteU  = 'H';               // ### Assign 'H' to AccB upper byte
        AccB.AccByte.AccByteUU = 'P';               // ### Assign 'P' to AccB upper upper byte
		
    }
}



/******************************************************************************
|  CLASS:         TLS 2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab17.c
|  AUTHOR:        Stu Chandler
|  DATE:          December 1, 2011
|  DESCRIPTION:   Unions
|  REQUIREMENTS:
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
|
|  REVISION HISTORY:
|   16 Feb 2012     David Stokes
|                   Moved data declarations inside of main()
|
********************************************************************************/
