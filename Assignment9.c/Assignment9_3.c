// Input  :  5
// Output :  8       (4 * 2)

// Input  : -5
// Output :  8       (4 * 2)

// Input  : 10
// Output : 3840     (10 * 8 * 6 * 4 * 2)

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
        Run loop from iNo down to 2,but only multiply even numbers.
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
// Function Name    :   EvenFactorial  
// Description      :   Calculates factorial of only even numbers from given number
//                      down to 2                 
// Input            :   int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   29/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int i = 0, iFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo; i >= 2; i--)
    {
        if(i % 2 == 0)
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

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d", iRet);

    return 0;
}

// Time Complexity : 0(N)