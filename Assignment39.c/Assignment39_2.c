//  Input:      1   2   3   4   5

/*
    Algorithum  

    START
        Accept number N
        Call DisplayRecursive(1, n)
        Function DisplayRecursive(n)
            If i > N
                Return
            Print i
            If i < N
                Print spaces
            Call DisplayRecursive(i + 1, N)
        End Function
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Recursively isplays numbers from 1 to N with spaces
// Input            :   int i (current number), int N (maximum number)
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int i, int N)
{
    if (i > N)
    {
        return;
    }
    printf("%d", i);

    if(i < N)
    {
        printf("  ");
    }

    Display(i + 1, N);
}
////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int number = 5;

    Display(1, number);
    printf("\n");

    return 0;
}