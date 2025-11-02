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
        Check if number is divisible by both 5 and 11
        If condition true
            Display "Number is divisible by 5 and 11"
        Else
            Display "Number is NOT divisible by 5 and 11"
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
    void checkDivisible(int num)
    {
        if((num % 5 == 0) && num % 11 == 0)
        {
            System.out.println(num + " is divisible by 5 and 11");
        }
        else
        {
            System.out.println(num + " is NOT divisible by 5 and 11");
        }
    }     
}

class Assignment19_3
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.checkDivisible(55);
    }
}