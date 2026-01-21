//  Input:      5   4   3   2   1

/*
    Algorithum  

    START
        Accept number N
        Call DisplayRecursive(1, n)
        Function DisplayRecursive(n)
            If n == 0
                Return
            Print n
            If n > 1
                Print spaces
            Call DisplayRecursive(n - 1)
        End Function
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Recursively displays numbers from N down to 1 with spaces
// Input            :   int N (current number to print)
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
    printf("%d", n);

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
    int number = 5;

    Display(number);
    printf("\n");

    return 0;
}