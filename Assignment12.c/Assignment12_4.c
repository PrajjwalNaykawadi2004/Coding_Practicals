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
        Take a number from user
        Loop from 1 to number -1 
        Check if number %i == 0 and i is even
        Add such even factors and print sum
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
// Function Name    :   sum_of_even_factors
// Description      :   Returns sum of even factors excluding the number itself                                                          
// Input            :   int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   30/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int sum_of_even_factors(int number)
{
    int sum = 0; 
    int i = 1;

    for(i= 1; i < number; i++)
    {
        if((number % i == 0) && (i % 2 == 0))
        {
            sum = sum + i;
        }
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
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    printf("%d\n" , sum_of_even_factors(number));

    return 0;
}

// Time Complexity : 0(N)