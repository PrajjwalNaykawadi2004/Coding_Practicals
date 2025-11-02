// Input  :  12             
// Onput  :  6      4       3       2       1  

// Input  : 13
// Output : 1

// Input  : 10      
// Output : 5       2       1

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
        Accept a number iNo from the user and convert to positive if needed
        Starts from iNo / 2 and go down to 1
        If the current number divides iNo completely, print it
        Continue until 1 is printed           
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
// Function Name    :   FactRev
// Description      :   Display all Factors of the given number in decreasing order
// Input            :   Int
// Output           :   Void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   27/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int i = 0;
    int iFact = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = iNo / 2 ; i >= 1; i--)
    {
        if(iNo % i == 0)
        {
            printf("%d ", i);
        }
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

    printf("Enter number:\n");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}