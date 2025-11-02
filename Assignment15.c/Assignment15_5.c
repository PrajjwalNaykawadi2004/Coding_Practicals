// Input  : 2395
// Output : -15     (2 - 17)

// Input  : 1018
// Output : 6       (16 - 0)

// Input  : 5733
// Output : -18     (16 - 0)

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
        Accept one number from the user
        Initialize two variables:
            iEvenSum = 0
            iOddSum = 0
        Reapeat until iNo becomes 0
        Return difference
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
// Function Name    :   CountDiff
// Description      :   This function calculates the difference between the sum of 
//                      even digits and the sum of odd digits of a given number                                                                       
// Input            :   int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   31/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit % 2 == 0)
            iEvenSum = iEvenSum + iDigit;

        else
            iOddSum = iOddSum + iDigit;

        iNo = iNo / 10;

    }

    return (iEvenSum - iOddSum);
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d", iRet);

    return 0;
}

// Time Complexity : 0(N)