//  Input:  "Marvellous Python"

//  Output: "nohtyP suollevraM"

/*
    Algorithum  

    START
        Accept source string
        Initialize index i = 0;
        Find length of source string till '\0'
        Decrement length to get last character index
        While length >= 0
            Copy src[length] to dest[i]
            Increment i
            Decrement lebgth
        End WHILE
        Append '\0' at dest[i]
        Display destination string
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   StrCpyRev
// Description      :   Copies string into destination in reverse order
// Input            :   char* (src), char* (dest)
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    int length = 0;
    int i = 0;

    while(src[length] != '\0')
    {
        length++;
    }
    length--;

    while(length >= 0)
    {
        dest[i] = src[length];
        i++;
        length--;
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
    char arr[30] = "Marvellous Python";
    char brr[30];             // Empty String

    StrCpyRev(arr,brr);

    printf("%s\n",brr);        // nohtyP suollevraM

    return 0;
}