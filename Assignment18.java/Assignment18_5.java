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
        If num > 0
            Display"Number is Positive"
        Else If num < 0
            Display "Number is Negative"
        Else
            Display "Number is Zero"
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   checkSign
// Description      :   This function compares an integer and prints whether it is 
//                      Positive,Negative, or Zero
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   02/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkSign(int num)
    {
        if(num > 0)
        {
            System.out.println("Number is Positive");
        }
        else if(num < 0)
        {
            System.out.println("Number is Negative");
        }
        else
        {
            System.out.println("Number is Zero");
        }
    }     
}

class Assignment18_5
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}