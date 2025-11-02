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
        Accept a year from the user
        If year is divisible by 400->leap year
        Else if divisible by 4 an not divisible by 100->leap year             
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
// Function Name    :   CheckLeapYear
// Description      :   Check if the given year is a leap year and directly displays 
//                      the result
// Input            :   Integer
// Output           :   Void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   28/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int year)
{
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("It is a Leap Year\n");
    }
    else
    {
        printf("It is not a leap year\n");
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int yr;

    printf("Enter year:\n");
    scanf("%d", &yr);

    CheckLeapYear(yr);

    return 0;
}