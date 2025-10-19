#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DivisionTwoNumbers
// Description :   It is used to perform division   
// Input :         Int, Integer
// Output :        Integer
// Author :        Prajjwal Dilip Naykawadi
// Date :          18/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2 == 0)
    {
        return -1;
    }
    
    iAns = iNo1 / iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is %d",iRet);

    return 0;
}