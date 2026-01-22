//  Input:    879

//  Output:   24   

/*
    Algorithum  

    START
        Accept number N from user
        Call SumDigits(N)
        Function DisplayRecursive(N)
            If N == 0 THEN
                Return 
            END IF
            RETURN (N % 10) + SumDigits(N / 10)
        End Function
        Display the returned sum
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Sum
// Description      :   Recursively calculates the summation of digits of a number
// Input            :   int 
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   22/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumDigits(int iNo)   
{
    if(iNo == 0)
    {
        return 0;  
    }

    return (iNo % 10) + SumDigits(iNo / 10);
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumDigits(iValue);

    printf("%d\n", iRet);

    return 0;
}