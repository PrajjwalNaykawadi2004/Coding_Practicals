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
        Accept int i
        initialize the value of i = 5
        print numbers from 5 to 1
    STOP    
*/

/////////////////////////////////////////////////////////////////////////////////////
//
//      Required Header Files
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   DivisiblityCheck
// Description      :   Used to check Divisibilty
// Input            :   Integer
// Output           :   Boolean
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   19/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

bool Check(int iNo)
{
    if((iNo % 5) ==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;

}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//  Test Case 1:
//  Input   :   5 , 12
//  Output  :   Divisible by 5 
//
//  Test Case 2:
//  Input   :   8 , 9
//  Output  :   Not Divisible by 5    
//
/////////////////////////////////////////////////////////////////////////////////////
