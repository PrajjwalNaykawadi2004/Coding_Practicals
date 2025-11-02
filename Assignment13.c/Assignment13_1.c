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
        Accept number from the user
        Use a loop to print numbers from 1 to N
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
// Function Name    :   print_numbers
// Description      :   Prints all numbers starting from 1 up to the given number N                                                        
// Input            :   int
// Output           :   Void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   30/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void print_numbers(int limit)
{
    int i;

    for(i = 1; i <= limit; i++)
    {
        printf("%d ", i);
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

    print_numbers(limit);

    return 0;
}

// Time Complexity : 0(N)