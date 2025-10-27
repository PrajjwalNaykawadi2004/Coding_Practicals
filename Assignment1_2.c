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
        Initialize the integer
        Print "Marvellous" % times
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
// Function Name    :   Marvellous
// Description      :   used to print  Marvellous 5 times   
// Input            :   int
// Output           :   Marvellous
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    int i = 0 ;
    for(i = 1;i<=5;i++)
    {
        printf("Marvellous\n");
    }

}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    Display();

    return 0;
}