// Input  :  12             
// Onput  :  144         (1 * 2 * 3 * 4  *6)  

// Input  : 13
// Output : 1            (1)

// Input  : 10
// Output : 10           (1 * 2 * 5)

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
// Function Name    :   MultiFact
// Description      :   Returns the multiplication of all factors of the given number
// Input            :   Int
// Output           :   Int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   27/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int MultiFact(int iNo)
{
    int i = 0;
    int iMulti = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            iMulti = iMulti * i;
        }
    }
    return iMulti;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = MultiFact(iValue);

    printf("%d", iRet);

    return 0;
}