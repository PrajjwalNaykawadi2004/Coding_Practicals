//  Input:      6

//  Output:     a   b   c   d   e   f   

/*
    Algorithum  

    START
        Accept number N
        Call DisplayRecursive(1, N)
        Function DisplayRecursive(i, N)
            If i > N
                Return
            Compute character = 'a' + (i - 1)
            Print character
            If i < N THEN
                Print spaces
            Call DisplayRecursive(i + 1, N)
        End Function
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Recursively displays lowercase alphabets from 'a' to given 
//                      range seperated by spaces
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

    printf("%c", 'a' + (i - 1));

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