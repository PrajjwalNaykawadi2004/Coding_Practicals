// Input  :  5
// Output :  *       *       *       *       *       #       #       #       #       #

// Input  :  6
// Output :  *       *       *       *       *       *       #       #       #       #       #       #

// Input  : -5
// Output :  *      *       *       *       *       #       #       #       #       #

// Input  :  2 
// Output :  *       *       #       #

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
        If number is negative,convert it to positive
        Print '*'that many times
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
// Function Name    :   Display
// Description      :   Accepts number and prints * first then # same count                  
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   29/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

// Time Complexity : O(N)