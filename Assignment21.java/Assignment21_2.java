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
        Use a loop from 1 to N
        If a number is even
            increase evenCount
        Otherwise
            increase oddCount
        Print the total even and odd counts
        
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   countEvenOddRange
// Description      :   Counts total even and odd numbers between 1 and N
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   03/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void countEvenOddRange(int n)
    {
        int evenCount = 0, oddCount = 0;

        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }

        System.out.println("Even numbers: " + evenCount);
        System.out.println("Odd numbers: " + oddCount);
    }     
}

class Assignment21_2
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}