// Input  : 2395
// Output : 1

// Input  : 1018
// Output : 2

// Input  : -1018
// Output : 2

// Input  : 8462
// Output : 4

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
        Accept a number from the user as iNo
        If the number is negative,convert it to positive
        If the digit is even,increase the count
        Divide the number by 10 to move to the next digit
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
// Function Name    :   CountEven
// Description      :   Counts how many digits in the entered number are even                                                     
// Input            :   int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   31/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit % 2 == 0)
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

    iRet = CountEven(iValue);

    printf("%d\n", iRet);

    return 0;
}

// Time Complexity : 0(N)