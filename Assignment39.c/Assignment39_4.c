//  Input:      A   B   C   D   E   F

/*
    Algorithum  

    START
        Accept number N
        Call DisplayRecursive(1, n)
        Function DisplayRecursive(i, N)
            If i > N
                Return
            Compute character = 'A' + (i - 1)
            Print character
            If i < N
                Print spaces
            Call DisplayRecursive(i + 1, N)
        End Function
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Recursively displays alphabets from 'A' to given range with spaces
// Input            :   int i (current position), int N (maximum range)
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
    printf("%c", 'A' + (i - 1));

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
    int Alphabet = 6;

    Display(1, Alphabet);
    printf("\n");

    return 0;
}