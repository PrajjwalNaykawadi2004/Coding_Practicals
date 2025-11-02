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
        Initialize a variable rev = 0
        Display the reversed number rev
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   reverseNumber
// Description      :   The function reverses the digits of the given number          
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   31/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void reverseNumber(int num)
    {
        int rev = 0, digit;

        while(num != 0)
        {
            digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }

        System.out.println("Reversed number is: " + rev);
    }
}

class Assignment16_4
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.reverseNumber(1234);
    }
}