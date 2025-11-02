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
        Accept two numbers from the user
        Compare both numbers using if-else
        if a > b
            return a
        Oterwise
            return b             
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
// Function Name    :   FindMax
// Description      :   Compare two numbers using and returns the larger one
// Input            :   Two Integer(a,b)
// Output           :   Returns the maximum value among the two
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   28/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int FindMax(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int num1, num2, result;

    printf("Enter two numbers:\n");
    scanf("%d%d", &num1, &num2);

    result = FindMax(num1, num2);

    printf("Maximum is: %d\n", result);

    return 0;
}