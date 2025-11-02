// Input  :  12             
// Onput  :  5      7       8       9       10      11 

// Input  : 13
// Output : 2       3       4       5       6       7       8       9       10      11      12

// Input  : 10      
// Output : 3       4       6       7       8       9      

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
        Accept a number iNo from the user and convert to positive if needed
        Starts from 1 and go up to one less than iNo.
        If the current number does not divide iNo completely,print it
        Repeat until all non-factors are printed           
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
// Function Name    :   NonFact
// Description      :   Displays all non-Factors of the given number
// Input            :   Int
// Output           :   Void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   28/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int i = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            printf("%d  ", i);
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
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}