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
        Set i = 1
        Reapeat steps until i <= num
        If num % i == 0,then display i
        Increment i by 1  
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   displayFactors
// Description      :   Displays all the factors of a given number
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   03/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void displayFactors(int num)
    {
        for(int i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                System.out.println(i);
            }
        }
    }     
}

class Assignment21_3
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.displayFactors(12);
    }
}