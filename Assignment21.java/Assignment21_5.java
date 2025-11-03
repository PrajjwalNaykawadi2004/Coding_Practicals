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
        Accept a number from the user
        Run loop from 1 to n
        If number is divisible by both 2 and 3,print it
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   printDivisibleBy2and3
// Description      :   Prints all numbers between 1 and n that are divisible by both 
//                      2 and 3
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   03/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void printDivisibleBy2and3(int n)
    {
        int i = 0;

        for(i = 1; i <= n; i++)
        {
            if(i % 2 == 0 && i % 3 == 0)
            {
                System.out.println(i);
            }
        }
    }     
}

class Assignment21_5
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);
    }
}