// Input:   "Marvellous"

// Output:   9

/*
    Algorithum  

    START
        Accept string from user
        Traverse string till '\0'
        If character between 'a' to 'z
            Increment counter
        Return counter
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CountSmall
// Description      :   Counts number of small alphabets in string
// Input            :   char*
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   20/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    // Fileter
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0;
}