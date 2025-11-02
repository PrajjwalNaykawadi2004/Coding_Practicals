// Input =  12    5               Output :  12  12  12  12  12
// Input =  -2    3               Output :  -2  -2  -2
// Input =  21   -3               Output :  21  21  21
// Input =  -2    0               Output :

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
        Accept first number from user as No1
        Accept second number from user as No2
        If any input is negative, convert it into positive
        Display No1 on the screen, No2 number of times using a loop 
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
// Function Name    :   DisplayNumber 
// Description      :   It is used to display the first number on the screen
//                      as many times as the value of the second number 
// Input            :   Integer, Integer
// Output           :   Void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d", iNo);
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
    int iCount = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    printf("Enter frequency:\n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}

