// Input  : 23  35
// Output : 23  24  25  26  27  28  29  30  31  32  33  34  35

// Input  : 10  18
// Output : 10  11  12  13  14  15  16  17  18  

// Input  : 10  10
// Output : 10

// Input  : -10  2
// Output : -10 -9  -8  -7  -6  -5  -4  -3  -2  -1  0   1   2

// Input  : 90  18
// Output : Invalid range

/*
Step 1 : Understand the problem statement
Step 2 : Write the Algorithum
Step 3 : Decide the programing language
Step 4 : Write the program
Step 5 : Test the program
*/

/*
    Algorithum  

    START
        Accept starting and ending number from user
        If starting number is greater than ending number
            print"Invalid range"
        Otherwise
            Run a loop from starting number to ending number
    STOP   
*/

/////////////////////////////////////////////////////////////////////////////////////
//
//      Required Header Files
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   RangeDisplay  
// Description      :   Accepts starting and ending number and prints all numbers
//                      between that range                                                          
// Input            :   int, int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   30/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range\n");

        return ;
    }

    for(int i = iStart; i <= iEnd; i++)
    {
        printf("%d ", i);
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point: ");
    scanf("%d", &iValue1);

    printf("Enter Ending point: ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}

// Time Complexity : O(N)