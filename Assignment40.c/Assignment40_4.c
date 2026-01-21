//  Input:      6

//  Output:     A   B   C   D   F   F   

/*
    Algorithum  

    START
        Accept number N
        Call DisplayRecursive(1, N)
        Function DisplayRecursive(i, N)
            If i > N
                Return
            Compute character = 'A' + (i - 1)
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
// Description      :   Recursively displays alphabets from 'A' to N seperated by spaces
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

    printf("%c", 'A' + (i - 1));

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