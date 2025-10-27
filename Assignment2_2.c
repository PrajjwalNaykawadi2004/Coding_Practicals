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
        Accept one number from the user as No
        If the input is negative,convert it into positive
        Use a loop to print '*' on the screen equal to the value of no
        Stop after printing all the stars  
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
// Function Name    :   DisplayStars 
// Description      :   It is used to display the given number of stars on the screen
// Input            :   Integer
// Output           :   Void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    // Write Updater
    while(iNo > 0)
    {
        printf("*");
        iNo--;
    }

}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}