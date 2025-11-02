// Input  : 5
// Output : 120         (5 * 4 *  3 * 2 * 1)

// Input  : -5
// Output : 120         (5 * 4  * 3 * 2  *1)

// Input  : 4
// Output : 24          (4 * 3 * 2 * 1)

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
        Accept one integer from user
        If number is negative,convert it to positive
        Multiply numbers from 1 to that number to get the factorial
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
// Function Name    :   Factorial 
// Description      :   Calculates factorial of a given number                   
// Input            :   int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   29/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iFact= 1;
    int i = 0;

    if(iNo < 0)
    {
        iNo  = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        iFact = iFact * i;
    }
    return iFact;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);

    return 0;
}

// Time Complexity : 0(N)