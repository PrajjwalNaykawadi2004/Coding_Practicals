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
        Run a loop from 1 to limit
        Inside the loop,check if the number is even
        Print the even numbers
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
// Function Name    :   print_even_numbers
// Description      :   Prints all even numbers between 1 and N entered by the user                                                       
// Input            :   int
// Output           :   Void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   30/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void print_even_numbers(int limit)
{
    int i;

    for(i = 1; i <= limit; i++)
    {
        if(i % 2 == 0)
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

    print_even_numbers(limit);

    return 0;
}

// Time Complexity : 0(N)