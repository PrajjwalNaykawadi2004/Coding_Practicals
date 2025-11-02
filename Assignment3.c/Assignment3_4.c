// Input :  a             Output: A

// Input :  D             Output: d           

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
        Accept a number iNo from the user
        Convert it to positive if it is negative          
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
// Function Name    :   DisplayConvert
// Description      :   Converts the given character to opposite case
// Input            :   Char
// Output           :   Void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   27/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    if((CValue >= 'a') && (CValue <= 'z'))
    {
        printf("%c", CValue - 32);
    }
    else if((CValue >= 'A') && (CValue <= 'Z'))
    {
        printf("%c", CValue + 32 );
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cvalue = '\0';

    printf("Enter character\n");
    scanf("%c", &cvalue);

    DisplayConvert(cvalue);

    return 0;
}