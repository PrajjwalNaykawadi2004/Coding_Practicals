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
        Accept an integer limit from the user
        Initialize a variable sum = 0
        Reapeat for i = 1 to limit
            Calculate even number
            Add even to sum
        Display the value of sum
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
// Function Name    :   sum_even_numbers
// Description      :   Calculates sum of first even numbers                                                       
// Input            :   int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   30/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int sum_even_numbers(int limit)
{
    int i, sum = 0;

    for(i = 1; i <= limit; i++)
    {
        sum = sum + (2 * i);
    }
    return sum;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    int limit;

    printf("Enter number: ");
    scanf("%d", &limit);

    printf("%d\n",sum_even_numbers(limit));

    return 0;
}

// Time Complexity : 0(N)