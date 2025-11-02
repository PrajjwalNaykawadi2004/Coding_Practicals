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
        Check if number
            It is Even
        Else
            It is Odd              
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
// Function Name    :   CheckEvenOdd
// Description      :   Checks whether the given number is even or odd and displays 
//                      the result
// Input            :   Integer 
// Output           :   Prints Even or Odd
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   28/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int num)
{
    if(num % 2 == 0)
    {
        printf("It is Even Number");
    }
    else
    {
        printf("It is Odd Number");
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int number;

    printf("Enter number");
    scanf("%d", &number);

    CheckEvenOdd(number);

    return 0;
}