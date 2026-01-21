// Input:   "Marvellous Multi OS"

// Output:  MARVELLOUS MULTI OS

/*
    Algorithum  

    START
        Accept string from user
        Traverse string till '\0'
        If characters between 'a' to 'z'
            Convert to Upper case
        Display modified string
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   struprx
// Description      :   Dispalys string to upper case
// Input            :   char*
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
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

    struprx(arr);

    printf("Modified string is %s\n",arr);

    return 0;
}