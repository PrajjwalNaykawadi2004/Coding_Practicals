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
        Accept a number as input
        Initialize a count = 0
        Repeat while number is not 0
            Increment count by 1
            Divide number by 10
        Display the count
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   countDigits
// Description      :   Counts the total number of digits in a given integer         
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   31/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void countDigits(int num)
    {
        int count = 0;

        while(num != 0)
        {
            count++;
            num = num / 10;
        }

        System.out.println("Number of digits are: " + count);
    }
}

class Assignment16_5
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.countDigits(7865);
    }
}