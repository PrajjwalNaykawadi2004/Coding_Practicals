//  Input:  "Marvellous Multi OS"
//           M

//  Output: 2

//  Input:  "Marvellous Multi OS"
//           W

//  Output: 0

/*
    Algorithum  

    START
        Accept string and a character
        Set counter = 0
        Traverse string till '\0'
            If current character equals input character
                Increment counter
        Return counter
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CountChar
// Description      :   Counts frequency of given character in the string
// Input            :   char*, char
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    
    return iCnt++;
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

    iRet = CountChar(arr, cValue);

    printf("Character frequency is : %d\n",iRet);

    return 0;
}