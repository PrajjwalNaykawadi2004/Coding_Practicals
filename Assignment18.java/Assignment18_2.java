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
        Input number n
        Repeat steps while i <= n
            If i % 2 == 0,print i
            Increment i by 1
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   printEvenNumbers
// Description      :   Prints all even numbers from 1 up to N     
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   01/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void printEvenNumbers(int n)
    {
        int i;
        for(i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                System.out.println(i);
            }
        }
         
    }    
        
}

class Assignment18_2
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }
}