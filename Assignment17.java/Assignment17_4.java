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
        Accept three numbers from the user
        If a is smaller than b and a is smaller than c
            Display a is minimum
        Else if b is smaller than c
            Display b is minimum
        Else
            Display c is minimum
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   findMin
// Description      :   Compares three integers and prints the minimum value       
// Input            :   int, int, int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   31/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void findMin(int a,int b, int c)
    {
        if(a < b && a < c)
        {
            System.out.println(a + " is minimum");
        }
        else if(b < c)
        {
            System.out.println(b + " is minimum");
        }
        else
        {
            System.out.println(c + " is minimum");
        }
    }
        
}

class Assignment17_4
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.findMin(3, 7, 2);
    }
}