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
        Accept year from user
        If year divisible by 400 OR divisible by 4 but not by 100 -> leap year
        Else not a leap year
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   checkLeapYear
// Description      :   This function checks if a given year is a leap year or not and 
//                      prints the result
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   02/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkLeapYear(int year)
    {
        if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0 ))
        {
            System.out.println(year + " is a leap Year");
        }
        else
        {
            System.out.println(year + " is not a leap year");
        }
    }     
}

class Assignment19_1
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }
}