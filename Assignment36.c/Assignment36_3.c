// Input:   "Marvellous Multi OS"

// Output:  mARVELLOUS mULTI os

/*
    Algorithum  

    START
        Accept string from user
        Traverse string till '\0'
        If characters between 'a' to 'z'
            Convert to Upper case
        Else if character between 'A' to 'Z'
            Convert to lower case
        Display modified string
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   strtogglex
// Description      :   Toggles the case of each character in string
// Input            :   char*
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    strtogglex(arr);

    printf("Modified string is %s\n",arr);

    return 0;
}