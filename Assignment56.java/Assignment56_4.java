/*
    Algorithum  

    START
        Accept file name from user
        Call CreateFile function
            Check if file already exists
                If not exists
                    Create new file
                    Display success message
                Else
                    Display file already exists
        If exception occurs
            Display error message
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
//      Required Header Files
//
/////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CreateFile
// Description      :   Creates a new file if it does not exist
// Input            :   String (File name)
// Output           :   Message (Success / Already exists /Failure)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment56_4
{
    public static void CreateFile(String fname)
    {
        try
        {
            File fobj = new File(fname);

            if(fobj.createNewFile())
            {
                System.out.println("File successfully created");
            }
            else
            {
                System.out.println("File alreday exists");
            }
        }
        catch(IOException e)
        {
            System.out.println("Unable to create file");
        }
    }

    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fname = sobj.nextLine();

        CreateFile(fname);      // Function call

        sobj.close();
    }
}