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
        Accept a number n
        Initialize variable sum = 0
        Reapeat for i = 1 to N:
            sum = sum + i;
        Print the value of sum
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   calculateSum
// Description      :   This function calculates the sum of the first N natural 
//                      numbers and prints the result             
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   31/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void calculateSum(int n)
    {
        int sum = 0;

        for(int i = 1; i <= n; i++)
        {
            sum = sum + i;
        }

        System.out.println("Sum of first " + n + " natural numbers is: " + sum);
    }
}

class Assignment16_1
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.calculateSum(10);
    }
}