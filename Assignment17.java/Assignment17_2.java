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
        If iNo is less than 0
            Convert it to positive(iNo = -iNo)
        Repeat below steps iNo times
            If current positin is odd
                Print $
            else
                Print *
        Display sum
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   checkPalindrome
// Description      :   Checks if the given number reads the same forward and
//                      backward and prints whether it is palindrome or not       
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   31/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkPalindrome(int num)
    {
        int original = num;
        int reverse = 0;

        if(num < 0)
        {
            num = -num;
        }

        while(num != 0)
        {
            int digit = num % 10;
            reverse = reverse + digit;
            reverse = reverse * 10;

            num = num / 10;
        }

        reverse = reverse /10;

        if(original == reverse)
        {
            System.out.println(original + " is Palindrome");
        }
        else
        {
            System.out.println(original + " is Not Palindrome");
        }

    }
}

class Assignment17_2
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}