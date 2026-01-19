// Input:  iRow = 4       iCol = 4

// Output:  A   B   C   D
//          a   b   c   d
//          A   B   C   D
//          a   b   c   d

/*
    Algorithum  

    START
        Accept iRow and iCol from user
        Repeat i = 1 to iRow
            If i is odd
                ch = 'A'
            Else
                ch = 'a'
        Repeat j = 1 to iCol
            Print ch
            Increment ch
        End inner loop
        Print newline
    End outer loop
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Pattern
// Description      :   Displays alternate uppercase and lowercase alphabets
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
    char ch = '\0';

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            ch = 'A';
        }
        else
        {
            ch = 'a';
        }

        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            printf("%c\t", ch);
            ch++;
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