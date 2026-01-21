//  Input:      *   *   *   *   *

/*
    Algorithum  

    START
        Accept number of stars (say n)
        Call DisplayRecursive(n)
        Function DisplayRecursive(n)
            If n == 0
                Return
            Print '*'
            If n > 1
                Print spaces
            Call DisplayRecursive(n - 1)
        End Function
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Recursively isplays '*' pattern with spaces
// Input            :   int n (number of stars to print)
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("*");

    if(n > 1)
    {
        printf("  ");
    }

    Display(n - 1);
}
////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int stars = 5;

    Display(stars);
    printf("\n");

    return 0;
}