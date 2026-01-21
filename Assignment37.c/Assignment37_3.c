//  Input:  "Marvellous Multi OS"
//           M

//  Output: 0

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
        Set index = 0
        Traverse string till '\0'
            If character matches
                Return index
            Increment index
        End loop
        Return -1
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   FirstChar
// Description      :   Returns index of first occurrence of a given character
// Input            :   char*, char
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iPos = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iPos;
        }
        iPos++;
        str++;
    }
    
    return -1;
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

    iRet = FirstChar(arr, cValue);

    printf("Character location is : %d\n",iRet);

    return 0;
}