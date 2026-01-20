// Input:   F

// Output:  TRUE

//  Input:  d

//  Output: FALSE

/*
    Algorithum  

    START
        Accept a character from user
        If character is between 'A' to 'Z'
            Return TRUE
        Else
            Return FALSE
        End If
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   ChkCapital
// Description      :   Checks whether the input character is a capital letter (A-Z)
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

BOOL ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character\n");
    }
    else
    {
        printf("It is not a Capital Character\n");
    }

    return 0;
}