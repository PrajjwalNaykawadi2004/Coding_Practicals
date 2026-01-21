//  Input:  "Marvellous Multi OS"
//           M

//  Output: 11

//  Input:  "Marvellous Multi OS"
//           W

//  Output: -1

//  Input:  "Marvellous Multi OS"
//           e

//  Output: 4

/*
    Algorithum  

    START
        Accept string and a character
        Set lastIndex = -1
        Set index = 0
        While string not end
            If character matches
                lastIndes = index
            Increment index
        End loop
        Return lastIndex
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   LastChar
// Description      :   Returns index of Last occurrence of a given character
// Input            :   char*, char
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iPos = 0;
    int iLastIndex = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLastIndex = iPos;
        }
        iPos++;
        str++;
    }
    
    return iLastIndex;
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is : %d\n",iRet);

    return 0;
}