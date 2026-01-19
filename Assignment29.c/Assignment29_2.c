// Input:  iRow = 4      iCol = 5

// Output:  2   4   6   8   10
//          1   2   5   7   9
//          2   4   6   8   10
//          1   2   5   7   9

/*
    Algorithum  

    START
        Accept iRow and iCol
        For each row i from 1 to iRow
            If i is odd
                num = 2
            Else i is even
                num = 1
        End inner loop
        Print newline
    End outer loop
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Pattern
// Description      :   Displays mixed numeric pattern with even and special series
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
    int num = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            for(jCnt = 1; jCnt <= iCol; jCnt++)
            {
                printf("%d\t", jCnt*2);
            }
        }
        else
        {
            num = 1;
            for(jCnt = 1; jCnt <= iCol; jCnt++)
            {
                if(jCnt == 1)
                {
                    printf("1\t");
                }
                else if(jCnt == 2)
                {
                    printf("2\t");
                }
                else
                {
                    printf("%d\t",num);
                    num = num + 2;
                }
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