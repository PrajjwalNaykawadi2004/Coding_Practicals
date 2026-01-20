// Input:  iRow = 6     iCol = 6

// Output:  *   *   *   *   *   *
//          *   #   #   #   *   *           
//          *   #   #   *   $   *
//          *   #   *   $   $   *
//          *   *   $   $   $   *
//          *   *   *   *   *   *

/*
    Algorithum  

    START
        Accept iRow and iCol from user
        For i = 1 to iRow
            For j = 1 to iCol
                If i == 1 OR i == iRow OR j == 1 OR j == iCol
                    Print "*"
                Else i + j <= iRow
                    Print "#"
                Else i + j >= iRow + 2
                    Print "$"
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
// Description      :   Displays layered diagonal pattern with '*' , '#' and '$'
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
            if(iCnt == 1 || iCnt == iRow || jCnt == 1 || jCnt == iCol)
            {
                printf("*\t");
            }
            else if(iCnt + jCnt <= iRow)
            {
                printf("#\t");
            }
            else if(iCnt + jCnt >= iRow + 2)
            {
                printf("$\t");
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