// Input  : 2395
// Output : 1

// Input  : 1018
// Output : 0

// Input  : 4521
// Output : 2

// Input  : 9922
// Output : 0

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
        Accept number from user
        If the number is negative,convert it to positive
        If the digit >3 and < 7 increase count
        Divide the number by 10
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
// Function Name    :   CountRange
// Description      :   This function counts how many digits of a given number are
//                      between 3 and 7                                                   
// Input            :   int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   31/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit >= 3 && iDigit <= 7)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
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

    iRet = CountRange(iValue);

    printf("%d", iRet);

    return 0;
}

// Time Complexity : 0(N)