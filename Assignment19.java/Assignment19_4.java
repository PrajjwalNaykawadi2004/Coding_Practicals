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
        Accept number from user
        Repeat until number > 0
        Extract digit = num % 10
        Print digit
        num = num / 10
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   checkDivisible
// Description      :   This function checks if a given year is a leap year or not and 
//                      prints the result
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   02/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void printDigits(int num)
    {
        while(num > 0)
        {
            int digit = num % 10;
            System.out.println(digit);
            num = num / 10;
        }
    }     
}

class Assignment19_4
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.printDigits(9876);
    }
}