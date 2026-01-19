// Input:  iRow = 4       iCol = 5

// Output:  4   4   4   4   4
//          3   3   3   3   3
//          2   2   2   2   2
//          1   1   1   1   1

/*
    Algorithum  

    START
        Accept iRow and iCol
        For i = 1 to iRow down to 1
            For j = 1 to iCol
                Print i
        End inner loop
        Print newline
    End outer loop
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Pattern
// Description      :   Displays reverse numeric row pattern
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
    int num = 1;

    for(iCnt = iRow; iCnt >= 1; iCnt--)
    {
        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            printf("%d\t", iCnt);
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