// Input:   C

// Output:  Your exam at 9.20 AM

//  Input:  d

//  Output: Your exam at 10.30 AM

/*
    Algorithum  

    START
        Accept a division character from user
        If character is between 'A' to 'a'
            Print "Your exam at 7.00 AM"
        Else If character is 'B' to 'b'
            print "Your exam at 8.30 AM"
        Else If character is 'C' to 'c'
            print "Your exam at 9.20 AM"
        Else If character is 'D' to 'd'
            print "Your exam at 10.30 AM"
        Else
            Print "Invalid Division"
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   DisplaySchedule
// Description      :   Displays exam schedule based on division character
// Input            :   char
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   20/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7.00 AM\n");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10.30 AM\n");
    }
    else
    {
        printf("Invalid Division\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the division : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}