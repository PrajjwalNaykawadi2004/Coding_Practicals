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
        Accept an integer number from user
        If the number is greater than 0
            print Positive
        Else the number is less than 0
            print Negative
        Else
            print Zero             
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
// Function Name    :   CheckNumberType
// Description      :   Check if a number is Positive,Negative,or Zero and prints 
//                      the result
// Input            :   Integer
// Output           :   Void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   28/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("%d is Positive\n",num);
    }
    else if(num < 0)
    {
        printf("%d is Negative\n",num);
    }
    else
    {
        printf("It is Zero\n");
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

    printf("Enter number:\n");
    scanf("%d", &number);

    CheckNumberType(number);

    return 0;
}