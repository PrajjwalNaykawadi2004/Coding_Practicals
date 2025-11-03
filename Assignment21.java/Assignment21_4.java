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
        Initialize count = 0
        Run a loop from 1 to num
        If num % i == 0,increment count
        Display total count
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   countFactors
// Description      :   Counts how many factors a given number has
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   03/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void countFactors(int num)
    {
        int count = 0;

        for(int i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                count++;
            }
        }
        System.out.println("Total number of factors are: " + count);
    }     
}

class Assignment21_4
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}