// Input:  iRow = 4       iCol = 4

// Output:  A   B   C   D  
//          A   B   C   D
//          A   B   C   D
//          A   B   C   D

/*
    Algorithum  

    START
        Accept iRow and iCol from user
        Repeat i = 1 to iRow
            Initializa 'A'
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
// Description      :   Displays alphabet pattern (A to specified column)
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
        ch = 'A';
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