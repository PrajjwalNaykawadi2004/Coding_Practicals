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
        Start a loop from 1 to n
        Check if the current number is odd
        If yes,print the number
        Continue until loop reaches n
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   printOddNumbers
// Description      :   Prints all odd numbers from 1 up to N     
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   02/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void printOddNumbers(int n)
    {
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 != 0)
            {
                System.out.println(i + " ");
            }
        }
         
    }    
        
}

class Assignment18_3
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.printOddNumbers(20);
    }
}