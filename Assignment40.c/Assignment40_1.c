//  Input:      5

//  Output:     *   *   *   *   *

/*
    Algorithum  

    START
        Accept number N
        Call DisplayRecursive(1, n)
        Function DisplayRecursive(i, N)
            If i > N
                Return
            Print '*'
            If i < N
                Print spaces
            Call DisplayRecursive(i + 1, N)
        End Function
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Recursively displays alphabets from '*' N times seperated by spaces
// Input            :   int 
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo == 0)
    {
        return;
    }

    printf("*");

    if(iNo > 1)
    {
        printf("  ");
    }

    Display(iNo - 1);
    
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