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
        Accept an integer number n from the user
        Initialize a counter variable i with value n
        Reapeat while i >=1
            Print the value of i
            Decrement i by 1(i = i - 1)
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   printReverse
// Description      :   This function accepts an integer and prints numbers from that
//                      integer down to 1 in reverse order
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   02/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void printReverse(int n)
    {
        for(int i = n; i >= 1; i--)
        {
            System.out.println(i + " ");  
        }
 
        System.out.println();
    }     
}

class Assignment20_2
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.printReverse(10);
    }
}