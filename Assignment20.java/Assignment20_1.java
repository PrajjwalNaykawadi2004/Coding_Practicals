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
        Accept a number N from the user
        Initialize sum = 0
        Using loop from 1 to N
        Check if number is even
        If even,add it to sum
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   sumEvenNumbers
// Description      :   To find sum of all even numbers up to N
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   02/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void sumEvenNumbers(int n)
    {
        int sum = 0;

        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                sum = sum + i;
            }
        }
 
        System.out.println("Sum of even numbers up to " + n + " is : "  + sum);
    }     
}

class Assignment20_1
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);
    }
}