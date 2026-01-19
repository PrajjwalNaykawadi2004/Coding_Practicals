// Input:  iRow = 5     iCol = 5

// Output:   1    2    3    4    5
//          -1   -2   -3   -4   -5
//           1    2    3    4    5
//          -1   -2   -3   -4   -5
//           1    2    3    4    5

/*
    Algorithum  

    START
        Accept iRow and iCol
        For i = 1 to iRow
        For j = 1 to iCol
            If i is odd
                Print j
            Else
                Print -(j)
        End inner loop
        Print newline
    End outer loop
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Pattern
// Description      :   Displays positive numbers in odd rows and negative numbers in 
//                      even rows
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
            if(iCnt % 2 != 0)
            {
                printf("%d\t", jCnt);
            }
            else
            {
                printf("-%d\t", jCnt);
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