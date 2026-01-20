// Input:   "MarvellouS"

// Output:   6   (8-2)

/*
    Algorithum  

    START
        Accept string from user
        Traverse string till '\0'
        If character between 'a' to 'z => increment small
        Else if character between 'A' to 'Z' => increment capital
        Return (small - capital)
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Difference
// Description      :   Returns difference between frequency of small and capital chars
// Input            :   char*
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   20/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Difference(char *str)
{
    int iSmall = 0, iCapital = 0;

    // Fileter
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapital++;
        }
        str++;
    }
    return (iSmall - iCapital);
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

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}