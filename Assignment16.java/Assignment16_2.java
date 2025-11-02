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
        Accept a number num
        If num % 2 == 0;
            Print"Even number"
        Else:
            print"Odd number"
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   checkEvenOdd
// Description      :   This Function checks if a given number is even or odd             
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   31/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkEvenOdd(int num)
    {
        if(num % 2 == 0)
        {
            System.out.println(num + " is an Even number");
        }
        else
        {
           System.out.println(num + " is an Odd number");     
        }
    }
}

class Assignment16_2
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.checkEvenOdd(7);
    }
}