// Input  :  23  35
// Output :  24  26  28  30  32  34 

// Input  :  10  18
// Output :  10  12  14  16  18 

// Input  :  10  10
// Output :  10

// Input  : -10   2
// Output : -10  -8  -6  -4  -2  0   2 

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
        If start > end,
            print"Invalid range"
        Otherwise
            loop from start to end
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
// Function Name    :   RangeDisplayEven  
// Description      :   Prints all even numbers between the given start and end range                                                         
// Input            :   int, int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   30/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
    }

    for(int i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }    
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

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}

// Time Complexity : O(N)