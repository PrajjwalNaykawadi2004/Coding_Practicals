// Input  : 9
// Output : Nine

// Input  : -3
// Output : Three

// Input  : 12
// Output : Invalid Number

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
        Accept one integer from user
        If number is between 0 and 9 or -9 to 9,print its word
        Otherwise,print"Invalid Number"
    STOP   PP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
//      Required Header Files
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display 
// Description      :   Take a number and prints its word if it is a single digit,
//                      Otherwise prints"Invalid Number"
// Input            :   int
// Output           :   Void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   29/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo >= 0 && iNo <= 9)
    {
        switch(iNo)
        {
            case 0: printf("Zero\n");
            break;

            case 1: printf("One\n");
            break;

            case 2: printf("Two\n");
            break;

            case 3: printf("Three\n");
            break;

            case 4: printf("Four\n");
            break;

            case 5: printf("Five\n");
            break;

            case 6: printf("Six\n");
            break;

            case 7: printf("Seven\n");
            break;

            case 8: printf("Eight\n");
            break;

            case 9: printf("Nine\n");
            break;
        }
    }
    else
    {
        printf("Invalid Number\n");
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

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

// Time Complexity : 0(1)