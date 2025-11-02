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
        Accept base and exponent
        Multiply base with itself in a loop exp times
        Display the final result and Stop
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   calculatepower
// Description      :   To calculate power of a number using loop
// Input            :   int, int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   02/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void calculatePower(int base, int exp)
    {
        int result = 1;

        for(int i = 1; i <= exp; i++)
        {
            result = result * base;
        }

        System.out.println("Power is : " + result);
    }     
}

class Assignment19_5
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.calculatePower(2, 5);
    }
}