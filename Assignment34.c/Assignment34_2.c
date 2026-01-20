// Input:   Q

// Output:  q

//  Input:  m

//  Output: M

//  Input:  4

//  Output: 4

//  Input:  %

//  Output: %

/*
    Algorithum  

    START
        Accept a division character from user
        If ch is uppercase THEN
            Convert to lowercase and print
        Else If ch is lowercase THEN
            Convert to uppercase and print
        Else
            print ch as it is
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Converts character case if alphabet, else prints as it is
// Input            :   char
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   20/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c\n", ch + 32);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("%c\n", ch - 32);
    }
    else
    {
        printf("%c\n", ch);
    }
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