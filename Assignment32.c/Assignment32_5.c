// Input:  iRow = 4     iCol = 4

// Output:  1   2   3   4   5
//          1   2           5           
//          1       3       5
//          1           4   5
//          1   2   3   4   5

/*
    Algorithum  

    START
        Accept iRow and iCol from user
        For i = 1 to iRow
            For j = 1 to iCol
                If i == 1 OR i == iRow
                    Print j
                Else If j == 1 OR j == iCol
                    Print j
                Else If i == j
                    Print j
                Else
                    Print space
        End inner loop
        Print newline
    End outer loop
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Pattern
// Description      :   Displays layered diagonal number pattern with borders and 
//                      diagonal numbers
// Input            :   int,int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   20/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    int jCnt = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            if(iCnt == 1 || iCnt == iRow)
            {
                printf("%d\t", jCnt);
            }
            else if(jCnt == 1 || jCnt == iCol)
            {
                printf("%d\t", jCnt);
            }
            else if(iCnt == jCnt)
            {
                printf("%d\t", jCnt);
            }
            else
            {
                printf("\t");
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