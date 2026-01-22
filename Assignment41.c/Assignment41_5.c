//  Input:    523

//  Output:   30

/*
    Algorithum  

    START
        Accept number N from user
        Call Mult(N)
        Function Mult(N)
            If N == 0 THEN
                Return 1
            END IF
            RETURN (N % 10) * Mult(N / 10)
        End Function
        Display the returned product
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Mult
// Description      :   Recursively calculates the product of digits of a number
// Input            :   int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   22/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Mult(int iNo)   
{
    if(iNo == 0)
    {
        return 1;
    }

    return (iNo % 10) * Mult(iNo / 10);
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("%d\n", iRet);

    return 0;
}