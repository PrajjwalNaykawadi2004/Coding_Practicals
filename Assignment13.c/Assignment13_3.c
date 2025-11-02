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
        Use a loop from 1 to limit
        In each iteration,check if the number is odd
        Continue until all numbers up to limit are checked
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
// Function Name    :   print_odd_numbers
// Description      :   Prints all odd numbers from 1 up to the given number N                                                       
// Input            :   int
// Output           :   Void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   30/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void print_odd_numbers(int limit)
{
    int i;

    for(i = 1; i <= limit; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
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

    print_odd_numbers(limit);

    return 0;
}

// Time Complexity : 0(N)