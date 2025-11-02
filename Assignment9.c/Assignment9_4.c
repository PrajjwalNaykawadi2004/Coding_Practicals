// Input  :  5
// Output :  15       (5 * 3 * 1)

// Input  : -5
// Output :  15       (5 * 3 * 1)

// Input  : 10
// Output : 945    (9 * 7 * 5 * 3 * 1)

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
        If number is negative convert to positive
        Run loop from iNo down to 1,multiply only odd numbers.
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
// Function Name    :   OddFactorial  
// Description      :   Calculates factorial of only odd numbers from given number
//                      down to 1                 
// Input            :   int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   29/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int i = 0, iFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo; i >= 1; i--)
    {
        if(i % 2 != 0)
        {
            iFact = iFact * i;
        }
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

    iRet = OddFactorial(iValue);

    printf("Odd factorial of number is %d", iRet);

    return 0;
}

// Time Complexity : 0(N)