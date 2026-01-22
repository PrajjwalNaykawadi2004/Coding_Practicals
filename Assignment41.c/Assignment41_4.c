//  Input:    5

//  Output:   120 

/*
    Algorithum  

    START
        Accept number N from user
        Call Fact(N)
        Function Fact(N)
            If N == 0 OR N == 1 THEN
                Return 1
            END IF
            RETURN N * Fact(N - 1)
        End Function
        Display the returned factorial
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Fact
// Description      :   Recursively calculates the factorial of a number
// Input            :   int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   22/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Fact(int iNo)   
{
    if(iNo == 0 || iNo == 1)
    {
        return 1;
    }

    return iNo * Fact(iNo - 1);
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

    iRet = Fact(iValue);

    printf("%d\n", iRet);

    return 0;
}