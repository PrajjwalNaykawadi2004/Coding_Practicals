#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Divisible by 5 
// Description :   It is used to check whether it is divisible by 5 or not
// Input :         Int, Integer
// Output :        Integer
// Author :        Prajjwal Dilip Naykawadi
// Date :          19/10/2025
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

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number");
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