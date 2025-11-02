// Input  : 2395
// Output : 270

// Input  : 1018
// Output : 8

// Input  : 9440
// Output : 144

// Input  : 922432
// Output : 864

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
        If the number is negative,convert it to positive
        Extract each digit using modulus(% 10)
        Multiply all digits together
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

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit != 0)
        {
            iMult = iMult * iDigit;
        }

        iNo = iNo / 10;
    }

    return iMult;
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

    iRet = MultDigits(iValue);

    printf("%d", iRet);

    return 0;
}

// Time Complexity : 0(N)