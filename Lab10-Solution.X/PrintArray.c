
#include <stdio.h>

/*===============================================================================
  FUNCTION:     printArray()
  DESCRIPTION:  Prints out a one dimensional array
  PARAMETERS:   array[], size
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/
void printArray(int array[], int size)
{
    int i = 0;                              // Initialize loop count
    printf("Result = {");                   // Print out initial text

    while (i < size)
    {
        if (i < size - 1)
            printf("%d, ", array[i]);       // Print each array element and comma
        else
            printf("%d}\n", array[i]);      // Print out final array element and }
        i++;
    }
}

/*===============================================================================
  FUNCTION:     printArray()
  DESCRIPTION:  Prints out a two dimensional array
  PARAMETERS:   array[][3], iSize
  RETURNS:      nothing
  REQUIREMENTS: none
===============================================================================*/
void print2dArray(int array[][3], int iSize)
/*-------------------------------------------------------------------------------
  Note: You must specify all but the first dimension when passing a multi-
  dimensional array.
  Pointers will let you work around this limitation. (more later...)
-------------------------------------------------------------------------------*/
{
    int i = 0, j = 0, jSize = 3;
    printf("multiDimArray = {{");

    while(i < iSize)
    {
        while(j < jSize)
        {
            if (j < jSize - 1)
                printf("%d, ", array[i][j]);
            else
                printf("%d}", array[i][j]);
            j++;
        }

        j = 0;
        if (i < iSize - 1)
            printf(", {");
        else
            printf("}\n");
        i++;
    }
}



/********************************************************************************
|  CLASS:         TLS2101 - Getting Started with Embedded C Programming
|  PROGRAM:       PrintArray.c
|  AUTHOR:        Rob Ostapiuk
|  DATE:          7 MAY 2007
|  DESCRIPTION:   Prints out an array of integers given the array name and
|                 array size.
|  REQUIREMENTS:  (1) A heap is required for the printf() function
|                    (See handout for instructions on allocating a heap)
|  NOTES:         Code was written generically so that it may be used with any
|                 processor or compiler, though the MPLAB workspace has been
|                 configured to use MPLAB C30 with the PIC24FJ128GA010.
|
|  REVISION HISTORY:
|
********************************************************************************/
