// Input  : 10
// Output : 700

// Input  : 3
// Output : 270

// Input  : 1200
// Output : 84000

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
        Accept an integer from user
        If input is negative,convert it to positive
        Multiply the USD value by 70
        Then print '#' that many times
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
// Function Name    :   DollarTOINR  
// Description      :   Converts given USD amount to INR(1 USD = 70 INR)                  
// Input            :   Integer
// Output           :   Integer
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   29/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iINR = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iINR = iNo * 70;

    return iINR;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value INR is %d", iRet);

    return 0;
}

// Time Complexity : 0(1)