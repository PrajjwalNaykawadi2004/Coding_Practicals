// Input:  iRow = 4     iCol = 4

// Output:  1   2   3   4
//              2   3   4
//                  3   4
//                      4

/*
    Algorithum  

    START
        Accept iRow from user
        For i = 1 to iRow
        print (i - 1) tabs for indentation
            For j = 1 to iCol
                Print j
        End inner loop
        Print newline
    End outer loop
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Pattern
// Description      :   Displays triangular number pattern with identation
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
    int kCnt = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(kCnt = 1; kCnt < iCnt; kCnt++)
        {
            printf("\t");
        }

        for(jCnt = iCnt; jCnt <= iCol; jCnt++)
        {
            printf("%d\t", jCnt);
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