#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : 5 to 1
// Description :   It is used to display 5 to 1 numbers on screen 
// Input :         Int, Integer
// Output :        Integer
// Author :        Prajjwal Dilip Naykawadi
// Date :          19/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    int i = 0;
    i = 5;

    while(i >= 1)
    {
        printf("%d",i);
        i--;
    }
}

int main()
{
    Display();
    return 0;
}
