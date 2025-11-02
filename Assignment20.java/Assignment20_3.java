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
        Accept an number from the user
        Initialize sum = 0
        Reapeat from i = 1 to num/2
            If num % i == 0 then add i to sum
        If sum == num
            Print"Perfect Number"
        Else
            Print"NOT a Perfect Number"
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   checkPerfect
// Description      :   To check whether a given number ia a perfect number or not 
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   02/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkPerfect(int num)
    {
        int sum = 0;

        for(int i = 1; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == num)
        {
            System.out.println(num + " is a Perfect Number");
        }
        else
        {
            System.out.println(num + " is NOT a perfect Number");
        }
    }     
}

class Assignment20_3
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
}