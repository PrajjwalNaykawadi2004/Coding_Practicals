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
        Input marks
        If marks <0 or >100
            Print invalid
        Check range and print grade using if-else ladder
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   displayGrade
// Description      :   This function displays the grade of a student based on marks
// Input            :   int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   02/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void displayGrade(int marks)
    {
        if(marks < 0 || marks > 100)
        {
            System.out.println("Invalid marks");
        }

        if(marks >= 90)
        {
            System.out.println("Grade : A+");
        }
        else if(marks >= 80)
        {
            System.out.println("Grade : A");
        }
        else if(marks >= 70)
        {
            System.out.println("Grade : B");
        }
        else if(marks >= 60)
        {
            System.out.println("Grade : C");
        }
        else if(marks >= 50)
        {
            System.out.println("Grade : D");
        }
        else
        {
            System.out.println("Grade Fail");
        }
    }     
}

class Assignment19_2
{
    public static void main(String args[ ])
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}