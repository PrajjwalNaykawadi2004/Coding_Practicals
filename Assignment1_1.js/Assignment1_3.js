/*
Step 1 : Understand the problem statement
Step 2 : Write the Algorithm
Step 3 : Decide the programming language
Step 4 : Write the program
Step 5 : Test the program
*/

/*
    Algorithm

    START
        Initialize i = 5
        Print numbers from 5 to 1
    STOP    
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Used to print numbers from 5 to 1
// Input            :   none
// Output           :   5 4 3 2 1
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

function Display()
{
    let i = 5;

    while (i >= 1)
    {
        console.log(i);
        i--;
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

function main()
{
    Display();
}

// Call to main function
main();

/////////////////////////////////////////////////////////////////////////////////////
//
// Test cases successfully handled by the application
// 5
// 4
// 3
// 2
// 1
//
/////////////////////////////////////////////////////////////////////////////////////
