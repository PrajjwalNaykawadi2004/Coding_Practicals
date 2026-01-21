//  Input:  "abcd"

//  Output: "dcba"

//  Input:  "abba"

//  Output: "abba"

/*
    Algorithum  

    START
        Accept string
        Find length till '\0'
        Set start = 0, end = length-1
        While start < end
            Swap(str[start], str[end])
            start++, end--
        End loop
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   StrRevX
// Description      :   Reverse string in place
// Input            :   char*, char
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
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

    StrRevX(arr);

    printf("Modified string is %s\n",arr);

    return 0;
}