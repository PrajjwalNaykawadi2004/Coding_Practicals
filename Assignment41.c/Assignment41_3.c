//  Input:    Hello

//  Output:   5  

/*
    Algorithum  

    START
        Accept string STR from user
        Call Strlen(STR)
        Function Strlen(STR)
            If STR points to '\0' THEN
                Return 0
            END IF
            RETURN 1 + Strlen(STR + 1)
        End Function
        Display the returned count
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Strlen
// Description      :   Recursively counts number of characters in a string
// Input            :   char* 
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   22/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Strlen(char * str)   
{
    if(*str == '\0')
    {
        return 0;
    }

    return 1 + Strlen(str + 1);
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string : ");
    scanf("%s", arr);

    iRet = Strlen(arr);

    printf("%d\n", iRet);

    return 0;
}