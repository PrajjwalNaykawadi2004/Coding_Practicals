// Input:   g

// Output:  TRUE

//  Input:  D

//  Output: FALSE

/*
    Algorithum  

    START
        Accept a character from user
        If character is between 'a' to 'z'
            Return TRUE
        Else
            Return FALSE
        End If
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   ChkSmall
// Description      :   Checks whether the input character is a small letter (a-z)
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

BOOL ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character\n");
    }
    else
    {
        printf("It is not a Small case Character\n");
    }

    return 0;
}