// Input:   "Marvellous Multi OS"
//           e

// Output:  TRUE

//  Input:  "Marvellous Multi OS"
//           W

//  Output: FALSE

/*
    Algorithum  

    START
        Accept string from user
        Accept character from user
        Traverse string till '\0'
            If character matches input character
                Return TRUE
        End loop
        Return FALSE
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   ChkChar
// Description      :   Checks whether the input character is present in the string
// Input            :   char*, char
// Output           :   BOOL
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}