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
        Extract each digit using modulus and division
        If digit is even,add to evenSum;
        Otherwise add to oddSum
        Repeat until number becomes 0
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   sumEvenOddDigits
// Description      :   Separate digits of a number and print sum of even digits and 
//                      odd digits    
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   02/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void sumEvenOddDigits(int num)
    {
        int evenSum = 0, oddSum = 0, digit = 0;

        while(num != 0)
        {
            digit = num % 10;

            if(digit % 2 == 0)
            {
                evenSum += digit;
            }
            else
            {
                oddSum += digit;
            }

            num = num / 10;
        }

        System.out.println("Sum of even digits = " + evenSum);
        System.out.println("Sum of odd digits = " + oddSum);    
    }     
}

class Assignment18_4
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}