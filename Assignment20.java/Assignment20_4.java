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
        Accept an number from the user
        Initialize largest = 0
        Repeat till num > 0
            digit = num % 10
            If digit > largest then largest = digit
            num = num / 10
        Print largest digit
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   findLargestDigit
// Description      :   This function extracts each digit from the given number,
//                      compares them,and prints the largest digit present number
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   02/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void findLargestDigit(int num)
    {
        int largest = 0;

        while(num > 0)
        {
            int digit = num % 10;

            if(digit > largest)
            {
                largest = digit;
            }
            num = num / 10;
        }

        System.out.println("Largest digit is : " + largest);
    }     
}

class Assignment20_4
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
}