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
        Initialize smallest = 9
        Repeat while num != 0
            Extract digit = num % 10
            If digit < smallest then smallest = digit
            num = num / 10
        Print smallest digit
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
    void findSmallestDigit(int num)
    {
        int smallest = 9;

        while(num != 0)
        {
            int digit = num % 10;

            if(digit < smallest)
            {
                smallest = digit;
            }
            num = num / 10;
        }

        System.out.println("Smallest digit is : " + smallest);
    }     
}

class Assignment20_5
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}