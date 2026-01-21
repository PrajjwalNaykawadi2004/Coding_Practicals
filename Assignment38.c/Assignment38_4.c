//  Input:  "Marvellous Python 2"

//  Output: "marvellous python 2"

/*
    Algorithum  

    START
        Accept source string
        Initialize index i = 0
        WHILE source[i] != '\0'
            IF source[i] is uppercase 'A' and 'Z'
                Convert to lowercase and copy to destination[i]
            ELSE
                Copy source[i] to destination[i] as it is
            END IF
            Increment i
        END WHILE
        Append '\0' to destination
        Display destination string
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   StrCpySmall
// Description      :   Copies string into destination converting uppercase to lowercase
// Input            :   char* (src), char* (dest)
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    int i = 0;

    while(src[i] != '\0')
    {
        if(src[i] >= 'A' && src[i] <= 'Z')
        {
            dest[i] = src[i] + 32;
        }
        else
        {
            dest[i] = src[i];
        }
        i++;
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
    char arr[30] = "Marvellous Python 2";
    char brr[30];             // Empty String

    StrCpySmall(arr,brr);

    printf("%s\n",brr);      // marvellous python 2

    return 0;
}