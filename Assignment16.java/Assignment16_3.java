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
        Accept a number num
        Initialize a variable fact with value 1
        Repeat steps 4 and 5 for i = 1 to num
        Multiply fact by i and store the result back in fact
        Increment i by 1
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   findFactorial
// Description      :   Calculates the factorial of a given number using a for loop           
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   31/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void findFactorial(int num)
    {
        int fact = 1;

        for(int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }

        System.out.println("Factorial of " + num + " is: " + fact);
    }
}

class Assignment16_3
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.findFactorial(5);
    }
}