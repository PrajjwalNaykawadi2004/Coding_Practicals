// Input  : 5
// Output : 5000

// Input  : 12
// Output : 12000

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
        Accept distance in kilometer from user
        Calculate meter = kilometer * 1000
        Display the distance in meter
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
// Function Name    :   KMToMeter  
// Description      :   Converts a given distance in kilometers into meters                                                           
// Input            :   int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   30/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int KMToMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * 1000;
    return iMeter;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in Kilometer: ");
    scanf("%d", &iValue);

    iRet = KMToMeter(iValue);

    printf("Distance in meter is : %d", iRet);

    return 0;
}

// Time Complexity : 0(1)