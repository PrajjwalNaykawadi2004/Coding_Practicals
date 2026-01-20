// Input:   %

// Output:  TRUE

//  Input:  d

//  Output: FALSE

/*
    Algorithum  

    START
        Accept a character from user
       If character is any of (!, @, #, $, %, ^, &, *)
            Return TRUE
        Else
            Return FALSE
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   ChkSpecial
// Description      :   Checks whether the input character is a special symbol is any 
//                      this (!,@,#,$,%,^,&,*)
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

BOOL ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' ||
        ch == '%' || ch == '^' || ch == '&' || ch == '*')
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

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special Character\n");
    }
    else
    {
        printf("It is not a special Character\n");
    }

    return 0;
}