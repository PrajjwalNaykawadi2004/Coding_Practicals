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
        Run loop from 1 to 10
        Multiply number with loop counter and print result
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   printTable
// Description      :   Accept a number from user and prints its multiplication table      
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   31/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void printTable(int num)
    {
        for(int i = 1; i <= 10; i++)
        {
            System.out.println(num + " * " + i + " = " + (num * i));
        }
    }
        
}

class Assignment17_5
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }
}