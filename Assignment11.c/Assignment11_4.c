// Input  :  23  30
// Output :  212

// Input  :  10  18
// Output :  126 

// Input  : -10  2
// Output :  Invalid range

// Input  : -90   18
// Output :  Invalid range 

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
        Read start and end values from user
        Check if range is valid;if not
            print"Invalid range"
        Traverse the range and add only even numbers
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
// Function Name    :   RangeSumEven
// Description      :   Accepts starting and ending range and returns the sum of all
//                      even numbers present in the range                                                         
// Input            :   int, int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   30/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;
    int i = 0;

    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        return -1;
    }

    for(i = iStart; i <= iEnd; i++)
    { 
        if(i % 2 == 0)
        {
            iSum = iSum + i;
        } 
    }

    return iSum;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting point: ");
    scanf("%d", &iValue1);

    printf("Enter Ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);
    
    if(iRet == -1)
    {
        printf("Invalid range\n"); 
    }
    else
    {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}

// Time Complexity : O(N)