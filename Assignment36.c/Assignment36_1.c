// Input:   "Marvellous Multi OS"

// Output:  marvellous multi os

/*
    Algorithum  

    START
        Accept string from user
        Traverse string till '\0'
        If characters between 'A' to 'Z'
            Convert to lower case
        Display modified string
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   strlwx
// Description      :   Dispalys string to lower case
// Input            :   char*
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    strlwrx(arr);

    printf("Modified string is %s\n",arr);

    return 0;
}