// Input    =   7
// Output   =   2       4       6       8       10      12      14

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
        Accept one number from the user as iNo
        If the number is less than or equal to 0 than stop  
        Otherwise,use a loop from 1 to iNo         
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
// Function Name    :   PrintEven 
// Description      :   The functions accepts one integer from the user and prints
//                      that many even numbers on the screen
// Input            :   Integer
// Output           :   EvenNumbers
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   27/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d", iCnt * 2);  
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue =0;

    printf("Enter number:\n");

    scanf("%d ", &iValue);

    PrintEven(iValue);

    return 0;
}