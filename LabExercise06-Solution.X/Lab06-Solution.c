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
#define CBS 4
#define NBC 5
#define ABC 7

/*-------------------------------------------------------------------------------
  VARIABLE DECLARATIONS
-------------------------------------------------------------------------------*/
int channel = 1;

/*-------------------------------------------------------------------------------
  FUNCTION PROTOTYPES
-------------------------------------------------------------------------------*/
int main(void);

/*===============================================================================
  FUNCTION:     main()
  DESCRIPTION:  Prints TV channels from 2 to 10 with their network affiliation
  PARAMETERS:   none
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/
int main(void)
{
    /*---------------------------------------------------------------------------
      Main Program Loop
    ---------------------------------------------------------------------------*/
    while(channel < 10)
    {
        channel++;                          //Increment channel
	    
	/*###########################################################################
	# TASK:   Write a switch statement to print the network's initials with the
	#         channel (based on Chicago TV stations).
	#         * If channel = 2, print "CBS 2" to the output window.
	#         * If channel = 5, print "NBC 5" to the output window.
	#         * If channel = 7, print "ABC 7" to the output window.
	#         * For all other channels, print "--- #" to the output window,
	#           where "#" is the channel number.
	#         (HINT: Use printf(), and use the newline character '\n' at the end
	#          of each string you print to the output window.)
	# NOTE:   The switch statement is in a loop that will execute 9 times.  Each
	#         pass through the loop, 'channel' will be incremented.  The output
	#         window should display a line of text for channels 2 to 10.
	#
	# STEP 1: Open a switch statement on the variable 'channel'
	###########################################################################*/	
	         
        switch(channel)                     //### Begin switch statement
	{

    /*###########################################################################
    # STEP 2: Write case for channel = CBS (CBS is a constant defined to equal 2)
    ###########################################################################*/
		    
            //### Your Code Here ###        //### If channel = CBS (CBS = 2)
            case CBS:
            {
                //### Your Code Here ###    //### Display string "CBS 2" followed by newline
                printf("CBS %d\n", channel);
                //### Your Code Here ###    //### Prevent fall through to next case
                break;
            }

    /*###########################################################################
    # STEP 3: Write case for channel = NBC (NBC is a constant defined to equal 5)
    #         This should look almost identical to step 2.
    ###########################################################################*/
			
            //### Your Code Here ###        //### If channel = NBC (NBC = 5)
            case NBC:
            {
                //### Your Code Here ###    //### Display string "NBC 5" followed by newline
                printf("NBC %d\n", channel);
                //### Your Code Here ###    //### Prevent fall through to next case
                break;
            }

    /*###########################################################################
    # STEP 4: Write case for channel = ABC (ABC is a constant defined to equal 7)
    #         This should look almost identical to step 2.
    ###########################################################################*/
            
            //### Your Code Here ###        //### If channel = ABC (ABC = 7)
            case ABC:
            {
                //### Your Code Here ###    //### Display string "ABC 7" followed by newline
                printf("ABC %d\n", channel);
                //### Your Code Here ###    //### Prevent fall through to next case
                break;
            }

    /*###########################################################################
    # STEP 5: Write default case.  If channel is anything other than those 
    #         listed above, this is what should be done.  For these cases, you
    #         need to print the string "--- #" where "#" is the channel number.
    #         For example, if channel = 6, you should print "--- 6".
    ###########################################################################*/
			
            //### Your Code Here ###        //### For all other channels
            default:
            {
                //### Your Code Here ###    //### Display string "--- #" followed by newline
                printf("--- %d\n", channel);
            }
        }
    }

    while(1);
}



/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       Lab06.c
|  AUTHOR:        Rob Ostapiuk
|  DATE:          02 MAY 2007
|  DESCRIPTION:   Illustrates decision making using the switch statement.
|                 Illustrates use of printf() function.
|  REQUIREMENTS:  (1) A heap is required for the printf() function
|                    (See handout for instructions on allocating a heap)
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
|
|  REVISION HISTORY:
|  DD MMM YYYY    <Name>
|                 <ActionTaken>
********************************************************************************/
