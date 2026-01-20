// Input:   A

// Output:  Decimal         65
//           Octal          0101
//          Hexadecimal     0X41

/*
    Algorithum  

    START
        Accept a division character from user
        Print its ASCII value in decimal
        Print its ASCII value in octal
        Print its ASCII value in hexadecimal  
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Displays ASCII value of charcter in decimal, octal, hexadecimal
// Input            :   char
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   20/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal     : %d\n", ch);
    printf("Octal       : %o\n", ch);
    printf("Hexadecimal : %X\n", ch);
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}