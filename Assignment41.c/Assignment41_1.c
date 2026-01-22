//  Input:      5

//  Output:     5   *   4   *   3   *   2   *   1   *   

/*
    Algorithum  

    START
        Accept number N from user
        Call DisplayRecursive(N)
        Function DisplayRecursive(N)
            If N == 0 THEN
                Return
            END IF
            Print N followed by " * "
            Call DisplayRecursive(N - 1)
        End Function
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Recursively displays numbers from N down to 1 seperated by '*'
// Input            :   int 
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   22/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int N)
{
    if(N == 0)
    {
        return;
    }

    printf("%d * ", N);

    Display(N - 1);
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