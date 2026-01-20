// Input:   Q

// Output:  Q   R   S   T   U   V   W   X   Y   Z

//  Input:  m

//  Output: m   l   k   j   i   h   g   f   e   d   c   b   a

//  Input:  8

//  Output: 

/*
    Algorithum  

    START
        Accept a division character from user
        IF ch is uppercase THEN
            FOR c from ch 'Z'
                Print c
        Else If ch is lowercase THEN
            FOR c from ch down to 'a'
                Print c
        Else
            RETURN
    END
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Prints letters from input to 'Z' if capital, or to 'a' if small
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
        for(char c = ch; c <= 'Z'; c++)
        {
            printf("%c\t", c);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(char c = ch; c >= 'a'; c--)
        {
            printf("%c\t", c);
        }
    }
    printf("\n");
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