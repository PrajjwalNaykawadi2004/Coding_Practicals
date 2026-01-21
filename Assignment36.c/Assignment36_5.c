//  Input:  "MarvellouS"

//  Output: 0

//  Input:  "MarvellouS Infosystems"

//  Output: 1

//  Input:  "MarvellouS Infosystems by Piyush Manohar Khairnnar"

//  Output: 5

/*
    Algorithum  

    START
        Accept string from user
        Initialise counter as 0
        Traverse string till '\0'
            If characters is space ' '
                Increment counter
        Print counter
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CountWhite
// Description      :   Counts number of white spaces in the string
// Input            :   char*
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   21/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces are : %d\n",iRet);

    return 0;
}