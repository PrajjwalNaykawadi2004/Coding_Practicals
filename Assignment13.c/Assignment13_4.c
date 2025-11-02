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
        Accept an integer input limit from the user
        Initialize a variable sum = 0
        Loop from 1 to limit
        In each iteration,add the number to sum
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
// Function Name    :   sum_natural_numbers
// Description      :   Calculates and returns the sum of the first N natural numbers                                                       
// Input            :   int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   30/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int sum_natural_numbers(int limit)
{
    int i, sum = 0;

    for(i = 1; i <= limit; i++)
    {
        sum = sum + i;
    }
    return sum;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int limit;

    printf("Enter number: ");
    scanf("%d", &limit);

    printf("%d\n",sum_natural_numbers(limit));

    return 0;
}

// Time Complexity : 0(N)