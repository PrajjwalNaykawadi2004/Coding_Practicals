// Input  : Prajjwal Naykawadi
// Output : Prajjwal Naykawadi 

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
        Declare a character array Name[30] to store users name
        Display the message "Please enter full name"
        Accept the full name from th user            
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
// Function Name    :   main()  
// Description      :   This program accepts a users full name and prints it on the 
//                      screen
// Input            :   char
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   28/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Name[30];

    printf("Please enter full name:");
    scanf("%[^\n]", Name);

    printf("Your name is %s", Name);

    return 0;
}

// Time Complexity = O(N)