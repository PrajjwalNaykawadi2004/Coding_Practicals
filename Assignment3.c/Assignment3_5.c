// Input :  E             Output: TRUE

// Input :  d             Output: FALSE           

/*
Step 1 : Understand the problem statement
Step 2 : Write the Algorithum
Step 3 : Decide the programing language
Step 4 : Write the program
Step 5 : Test the program
*/

/*
    Algorithum

    START
        Accept a character CValue from the user
        Check if it is one of these:a, e, i, o, u or A, E, I, O, u
        If it matches any of them
            return TRUE
        Otherwise
            return FALSE         
    STOP    
*/

/////////////////////////////////////////////////////////////////////////////////////
//
//      Required Header Files
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   ChkVowel
// Description      :   Check whether the given character is a vowel or not
// Input            :   Char
// Output           :   BOOL
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   27/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if(CValue=='a' || CValue=='e' || CValue=='i' || CValue=='o' || CValue=='u' || 
       CValue=='A' || CValue=='E' || CValue=='I' || CValue=='O' || CValue=='U') 
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }   
    
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}
