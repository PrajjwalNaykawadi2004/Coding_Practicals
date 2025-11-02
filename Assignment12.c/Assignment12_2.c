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
        Loop from 1 to given number and count all values that divide number
        Return the count
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
// Function Name    :   count_factors
// Description      :   Returns total number of positive factors of the given number                                                          
// Input            :   int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   30/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int count_factors(int number)
{
    int i = 0, iCnt = 0;

    for(i= 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            iCnt++;
        }
    }
    return iCnt;
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

    printf("%d\n", count_factors(number));

    return 0;
}

// Time Complexity : 0(N)