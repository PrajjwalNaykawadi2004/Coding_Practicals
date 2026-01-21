//  Input:  "Marvel  lous Pyth  on"

//  Output: "MarvellousPython"

/*
    Algorithum  

    START
        Accept source string
        Initialize i = 0;
        For each character in source string
            If character is not space
                Copy to destination[i] and increment i
        END FOR
        Append '\0' to destination
        Display destination string
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   StrCpyX
// Description      :   Copies string into destination without spaces
// Input            :   char* (src), char* (dest)
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    int i = 0, j = 0;

    while(src[j] != '\0')
    {
        if(src[j] != ' ')
        {
            dest[i] = src[j];
            i++;
        }
        j++;
    }

    dest[i] = '\0';
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[30] = "Marvel  lous Pyth  on";
    char brr[30];             // Empty String

    StrCpyX(arr,brr);

    printf("%s\n",brr);      // MarvellousPython

    return 0;
}