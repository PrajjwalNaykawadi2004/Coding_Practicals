//  Input:      5

//  Output:     5   4   3   2   1

/*
    Algorithum  

    START
        Accept number N
        Call DisplayRecursive(N)
        Function DisplayRecursive(X)
            If X == 0
                Return
            Print X
            If X > 1
                Print spaces
            Call DisplayRecursive(X - 1)
        End Function
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Recursively displays alphabets from N down to 1 seperated by spaces
// Input            :   int 
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int X)
{
    if(X == 0)
    {
        return;
    }

    printf("%d", X);

    if(X > 1)
    {
        printf("\t");
    }

    Display(X - 1);

}
////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}