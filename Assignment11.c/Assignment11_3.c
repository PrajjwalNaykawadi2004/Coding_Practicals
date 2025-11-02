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
        If start > end OR any value negative
            print"Invalid range" and stop
        Otherwise
            Run loop from start to end and add all numbers
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
// Function Name    :   RangeSum 
// Description      :   Accepts start & end number and returns sum of all numbers in
//                      that range                                                         
// Input            :   int, int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   30/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iSum = 0;
    int i = 0;

    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("Invalid range\n");

        return 0;
    }

    for(i = iStart; i <= iEnd; i++)
    { 
        iSum = iSum + i; 
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

    iRet = RangeSum(iValue1, iValue2);
    
    if(iRet != 0)
    {
        printf("Addition is %d\n", iRet); 
    }

    return 0;
}

// Time Complexity : O(N)