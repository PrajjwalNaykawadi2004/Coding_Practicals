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
        Initialize the integer
        Print "Marvellous" 5 times
    STOP    
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   used to print Marvellous 5 times   
// Input            :   none
// Output           :   Marvellous
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

function Display()
{
    let i = 0;

    for (i = 1; i <= 5; i++)
    {
        console.log("Marvellous");
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
