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
        Perform division of iValue1 and iValue2
        Display Division on the screen
    STOP    
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Divide
// Description      :   It is used to perform division   
// Input            :   number, number
// Output           :   number
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

function Divide(iNo1, iNo2)
{
    let iAns = 0;

    if (iNo2 < 1)
    {
        return -1;
    }

    iAns = Math.floor(iNo1 / iNo2);

    return iAns;
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

function main()
{
    let iValue1 = 15;
    let iValue2 = 5;
    let iRet = 0;

    iRet = Divide(iValue1, iValue2);

    console.log("Division is", iRet);
}

// Call to main function
main();
