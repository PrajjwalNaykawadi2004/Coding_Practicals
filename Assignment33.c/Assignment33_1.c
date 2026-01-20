// Input:   F

// Output:  TRUE

//  Input:  &

//  Output: FALSE

/*
    Algorithum  

    START
        Accept a character from user
        If character is between 'A' to 'Z' OR 'a' to 'z'
            Return TRUE
        Else
            Return FALSE
        End If
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   ChkAlpha
// Description      :   Checks whether the input character is an alphabet (A-Z / a-z)
// Input            :   char
// Output           :   BOOL
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   20/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
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
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not a Character\n");
    }

    return 0;
}