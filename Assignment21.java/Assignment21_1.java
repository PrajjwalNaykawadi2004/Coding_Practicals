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
        Extract each digit using % 10
        Multiply it into product,and divide the number by 10
        Continue until the number becomes 0
        Print the final product 
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   productOfDigits
// Description      :   Calculates and prints the product of all digits in a given 
//                      number
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   03/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void productOfDigits(int num)
    {
        int product = 1, digit;

        while(num != 0)
        {
            digit = num % 10;
            product = product * digit;
            num = num / 10;
        }

        System.out.println("Product of digits: " + product);
    }     
}

class Assignment21_1
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.productOfDigits(234);
    }
}