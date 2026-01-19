// Input:  iRow = 4     iCol = 4

// Output:  1   2   3   4
//          1   *   *   4
//          1   *   *   4
//          1   2   3   4

/*
    Algorithum  

    START
        Accept iRow and iCol from user
        For i = 1 to iRow
            For j = 1 to iCol
                If i == 1 OR i == iRow
                    Print "j"
                Else If j == 1
                    Print 1
                Else If j == iCol
                    Print iCol
                Else
                    Print "*"
        End inner loop
        Print newline
    End outer loop
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Pattern
// Description      :   Displays border number pattern with '*' inside
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
        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            if(iCnt == 1 || iCnt == iRow)
            {
                printf("%d\t", jCnt);
            }
            else if(jCnt == 1)
            {
                printf("1\t");
            }
            else if(jCnt == iCol)
            {
                printf("%d\t", iCol);
            }
            else
            {
                printf("*\t");
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