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
        Read number from user
        Run loop 1 to given number
        If number % i == 00,print i
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
// Function Name    :   print_factors
// Description      :   prints all positive factors of the given number in ascending
//                      order                                                          
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   30/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void print_factors(int number)
{
    int i = 0;

    for(i= 1; i<= number; i++)
    {
        if(number % i == 0)
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
    int number = 0;

    printf("Enter number : ");
    scanf("%d", &number);

    print_factors(number);

    return 0;
}

// Time Complexity : 0(N)