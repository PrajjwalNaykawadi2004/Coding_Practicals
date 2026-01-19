// Input:  iRow = 5     iCol = 5

// Output:  a   b   c   d   e
//          1   2   3   4   5
//          a   b   c   d   e
//          1   2   3   4   5
//          a   b   c   d   e

/*
    Algorithum  

    START
        Accept iRow and iCol
        Repeat i = 1 to iRow
            If i is odd
                For j = 1 to icol
                    Print character starting from 'a'
            Else
                For j = 1 to iCol
                    Print numbers starting from 1
        End inner loop
        Print newline
    End outer loop
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Pattern
// Description      :   Displays alphabets in odd rows and numbers in even rows
// Input            :   int,int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   19/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    int jCnt = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            char ch = 'a';
            for(jCnt = 1; jCnt <= iCol; jCnt++)
            {
                printf("%c\t", ch);
                ch++;
            }
        }
        else
        {
            for(jCnt = 1; jCnt <= iCol; jCnt++)
            {
                printf("%d\t", jCnt);
            }
        } 
        printf("\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}