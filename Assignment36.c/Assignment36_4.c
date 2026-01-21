//  Input:   "Marve89llous121"

//  Output:  89121

//  Input:   "Demo"

//  Output: 

/*
    Algorithum  

    START
        Accept string from user
        Traverse string till '\0'
        If characters between '0' to '9'
            Print that character
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   DisplayDigit
// Description      :   Displays only digits from the string
// Input            :   char*
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
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

    DisplayDigit(arr);

    return 0;
}