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
        Print stars
    STOP    
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Accept
// Description      :   Used to print stars
// Input            :   Integer
// Output           :   Number of *
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

function Accept(iNo)
{
    let iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        process.stdout.write("*");
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

function main()
{
    let iValue = 5;   // value directly given in code

    Accept(iValue);
}

// Call to main function
main();
