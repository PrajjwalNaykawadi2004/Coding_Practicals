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
        Accept int i
        initialize the value of i = 5
        print numbers from 5 to 1
    STOP    
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   DivisiblityCheck
// Description      :   Used to check Divisibilty
// Input            :   Integer
// Output           :   Boolean
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

function Check(iNo)
{
    if((iNo % 5) ==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

function main()
{
    let iValue = 25;
    let bRet = false;

    bRet = Check(iValue);

    if(bRet == true)
    {
        console.log("Divisible by 5");
    }
    else
    {
        console.log("Not Divisible by 5");
    }
}

main();

