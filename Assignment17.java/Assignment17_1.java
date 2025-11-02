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
        Initialize sum = 0
        Repeat until num becomes 0
        Display sum
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   sumofDigits
// Description      :   This function calculates and prints the sum of digits of the
//                      the given number        
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   31/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void sumofDigits(int num)
    {
        int sum = 0;
        int digit = 0;

        while(num != 0)
        {
            digit = num % 10;
            sum = sum + digit;
            num = num / 10;
        }

        System.out.println("Sum of digits is :  " + sum);
    }
}

class Assignment17_1
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.sumofDigits(1234);
    }
}