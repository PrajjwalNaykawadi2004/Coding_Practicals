//  Input:  "Marvellous Python 2"

//  Output: "MARVELLOUS PYTHON 2"

/*
    Algorithum  

    START
        Accept source string
        Initialize i = 0;
        For each character in source string
            If character is between 'a' and 'z'
                Convert to uppercase and copy to destination[i]
            ELSE
                Copy character as it is to destination[i]
            END IF
            Increment i
        END WHILE
        Append '\0' to destination
        Display destination string
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   StrCpyCap
// Description      :   Copies string into destination converting lowercase to uppercase
// Input            :   char* (src), char* (dest)
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    int i = 0;

    while(src[i] != '\0')
    {
        if(src[i] >= 'a' && src[i] <= 'z')
        {
            dest[i] = src[i] - 32;
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

    StrCpyCap(arr,brr);

    printf("%s\n",brr);      // MARVELLOUS PYTHON 2

    return 0;
}