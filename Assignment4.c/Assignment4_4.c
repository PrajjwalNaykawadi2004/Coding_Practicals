// Input  :  12             
// Onput  :  50       

// Input  : 10
// Output : 37           

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
        Accept a number from user
        Starts a loop from 1 to one less than that number
        If the number is not divisible bt th current value and add to sum          
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
// Function Name    :   SumNonFact
// Description      :   This function returns all non-factors of the given number
// Input            :   Integer iNo
// Output           :   Integer
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   28/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int i = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
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

    iRet = SumNonFact(iValue);

    printf("%d\n", iRet);

    return 0;
}