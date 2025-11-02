// Input  :   12                 
// Onput  :  -34     (16 - 50)  

// Input  :   10  
// Output :  -29     (8 - 37)

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
        Accept a number from the user
        Run a loop from 1 to one less than number
        Add factors to one sum and non-factors to another sum          
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
// Function Name    :   FactDiff
// Description      :   This Function calculates the difference between the
//                      summation of all non-factors of the given number
// Input            :   Integer iNo
// Output           :   Integer
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   28/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int i = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            iSumFact = iSumFact + i;
        }
        else
        {
            iSumNonFact = iSumNonFact + i;
        }
    }
    return iSumFact - iSumNonFact;
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

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}