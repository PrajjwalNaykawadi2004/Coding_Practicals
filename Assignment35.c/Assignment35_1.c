// Input:   "Marvellous Multi OS"

// Output:   4

/*
    Algorithum  

    START
        Accept string from user
        Traverse string till '\0'
        If character between 'A' to 'Z'
            Increment counter
        Return counter
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CountCapital
// Description      :   Counts number of captial alphabets in string
// Input            :   char*
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   20/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    // Fileter
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
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

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}