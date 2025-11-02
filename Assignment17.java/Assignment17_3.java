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
        Accept first number from the user
        Accept second number from user
        If a is greater than b
            Display a is maximum
        Else
            Display b is maximum
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   findMax
// Description      :   Compares two numbers and prints the maximum       
// Input            :   int,int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   31/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void findMax(int a,int b)
    {
        if(a > b)
        {
            System.out.println(a + " is maximum");
        }
        else
        {
            System.out.println(b + " is maximum");
   
        }
    }
        
}

class Assignment17_3
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.findMax(20, 15);
    }
}