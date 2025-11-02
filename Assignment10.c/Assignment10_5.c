// Input  : 5
// Output : 0.464515

// Input  : 7
// Output : 0.650321

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
        Accept area in square feet from the user
        Convert it into square meters using formula: 
            square_meter = square_feet * 0.0929
        Display the result
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
// Function Name    :   SquareMeter  
// Description      :   Converts given area from square feet to square meters                                                          
// Input            :   int
// Output           :   double
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   30/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dMeter = 0.0;

    dMeter = iValue * 0.0929;

    return dMeter;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is: %lf\n", dRet);

    return 0;
}

// Time Complexity : 0(1)