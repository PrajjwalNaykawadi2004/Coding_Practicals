// Input:  iRow = 4       iCol = 4

// Output:  A   A   A   A   A
//          B   B   B   B   B
//          C   C   C   C   C

/*
    Algorithum  

    START
        Accept iRow and iCol from user
        Initialize ch = 'A'
        Repeat i = 1 to iRow
            Repeat j = 1 to iCol
                Print ch
        End inner loop
        Increment ch
        Print newline
    End outer loop
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Pattern
// Description      :   Displays row-wise constant alphabet pattern
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
    char ch = 'A';

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            printf("%c\t", ch);
        }
        ch++;
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