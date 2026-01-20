/*
    Algorithum  

    START
        For i = 0 to 255
            Print decimal value of i
            Print hexadecimal value of i
            Print octal value of i
            Print ASCII character of i
        End loop
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   DisplayASCII
// Description      :   Displays ASCII table with decimal, hexadecimal, octal, and
//                      character values
// Input            :   None
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   20/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    int i;

    printf("Dec  Hex  Oct  Char\n");
    printf("--------------------\n");

    for(i = 0; i <= 255; i++)
    {
        if((i >= 0 && i <= 31) || i == 127)
        {
            printf("%3d  %3X  %3o  NP\n", i, i, i);
        }
        else
        {
            printf("%3d  %3X  %3o   %c\n", i, i, i, i);
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    DisplayASCII();

    return 0;
}