//  Input:      5

//  Output:     1   2   3   4   5

/*
    Algorithum  

    START
        Accept number N
        Call DisplayRecursive(1, n)
        Function DisplayRecursive(i, N)
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
// Description      :   Recursively displays alphabets from 1 to N seperated by spaces
// Input            :   int 
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int i, int N)
{
    if(i > N)
    {
        return;
    }

    printf("%d", i);

    if(i < N)
    {
        printf("\t");
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
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(1, iValue);

    return 0;
}