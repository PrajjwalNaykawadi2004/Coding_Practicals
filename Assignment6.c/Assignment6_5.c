// Input  : 1000     745
// Output : 74.5%

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
        Accept total marks and obtained marks from the user
        Check if total marks are 0
            If yes,return 0.0
        Calculate percentage using the formula:
            Percentage = (Obtained / Total) * 100          
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
// Function Name    :   Percentage 
// Description      :   This function Calculates the percentage of Obtained marks
//                      out of total marks
// Input            :   int,int
// Output           :   float
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   28/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iTotal, int iObtained)
{
    float fResult = 0.0;

    if (iTotal == 0)
    {
        return 0.0;
    }

    fResult = ((float)iObtained / (float)iTotal) * 100;

    return fResult;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet  = 0.0;

    printf("Please enter total marks=");
    scanf("%d", &iValue1);

    printf("Please enter Obtained marks");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is : %.2f%%", fRet);

    return 0;
}

// Time Complexity : 0(1)