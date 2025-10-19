#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : "*" 
// Description :   Display * on screen
// Input :         Int, Integer
// Output :        Integer
// Author :        Prajjwal Dilip Naykawadi
// Date :          19/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}
