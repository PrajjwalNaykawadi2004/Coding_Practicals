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
        If the number < 1 it is not prime
        Repeat from 1 = 2 to num / 2
            If num % i == 0,then the number is not prime
        If no divisor found,the number is prime
        Display result
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   checkPrime
// Description      :   Checks whether a given number is prime or not     
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   01/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkPrime(int num)
    {
        int i, flag = 0;

        if (num <= 1)
        {
            System.out.println(num + " is not a prime number");
            return;
        }
        for(i = 2; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            System.out.println(num + " is a prime number");
        else
            System.out.println(num + " is not a prime number");
    }
        
}

class Assignment18_1
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}