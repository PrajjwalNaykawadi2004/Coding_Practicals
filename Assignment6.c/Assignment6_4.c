// Input  : 5       4       7
// Output : 140

// Input  : 5       0       7 
// Output : 35

// Input  : 5       0        0
// Output : 5

// Input  : 0       0        0
// Output : 0

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
        Accept three integer numbers from the user
        Multiply all three numbers and return the result           
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
// Function Name    :   Multiply 
// Description      :   This function three integers and return there multiplication,
//                      treating zero as neutral
// Input            :   int,int,int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   28/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    if (iNo1 == 0) iNo1 = 0;
    if (iNo2 == 0) iNo2 = 0;
    if (iNo3 == 0) iNo3 = 0;

    return iNo1 * iNo2 * iNo3;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is : %d", iRet);

    return 0;
}

// Time Complexity : 0(1)