// Input  :   5
// Output :  -7       (8 - 15)

// Input  :  -5
// Output :  -7       (8 - 15)

// Input  : 10
// Output : 2895     (3840 - 945)

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
        Accept one integer iNo
        If number is negative convert to positive
        Initialize iEvenFact = 1 and iOddFact = 1
        Run loop from 1 to iNo:
            if number is even multiply into iEvenFact
            if number is odd multiply into iOddFact
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
// Function Name    :   FactorialDiff  
// Description      :   Calculates the difference between even factorial and
//                      odd factorial of a given number                                      
// Input            :   int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   29/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iEvenFact = 1, iOddFact = 1;
    int i = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if(i % 2 == 0)
        {
            iEvenFact = iEvenFact * i;
        }
        else
        {
            iOddFact = iOddFact * i;
        }
    }
    return iEvenFact - iOddFact;
    
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

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}

// Time Complexity : 0(N)