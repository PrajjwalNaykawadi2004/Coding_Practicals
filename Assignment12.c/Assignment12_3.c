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
        Take a number as input
        Loop from 1 to number
        If a number divides input perfectly,add it to sum
        Return the sum
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
// Function Name    :   sum_of_factors
// Description      :   Returns the sum of all positive factors of a given number                                                          
// Input            :   int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   30/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int sum_of_factors(int number)
{
    int i = 0, iSum = 0;

    for(i= 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    int number = 0;

    printf("Enter number : ");
    scanf("%d", &number);

    printf("%d\n" , sum_of_factors(number));

    return 0;
}

// Time Complexity : 0(N)