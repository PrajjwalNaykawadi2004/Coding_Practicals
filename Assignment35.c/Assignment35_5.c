// Input:   "MarvellouS"

// Output:   "SuollevraM"

/*
    Algorithum  

    START
        Accept string from user
        Find length till '\0'
        Displays characters in reverse order
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Reverse
// Description      :   Dispalys string in reverse order
// Input            :   char*
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   20/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Reverse(char *str)
{
    int iLength = 0, i = 0;

    // Fileter
    while(str[i] != '\0')
    {
        iLength++;
        i++;
    }
    
    for(i = iLength-1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
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

    Reverse(arr);

    return 0;
}