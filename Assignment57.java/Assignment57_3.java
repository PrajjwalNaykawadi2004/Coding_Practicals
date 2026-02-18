/*
    Algorithum  

    START
        Accept directory name from user
        Call CreateDirectory function
            Create File object
            Check whether directory already exists
                If exists
                    Display "Directory already exists"
                Else
                    Create directory using mkdir()
                    If creation successfull
                        Display success message
                    Else
                        Display failure message
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
// Function Name    :   CreateDirectory
// Description      :   Creates a new directory with given name
// Input            :   String (Directory name)
// Output           :   Message
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment57_3
{
    public static void CreateDirectory(String dirname)
    {
        File fobj = new File(dirname);

        if(fobj.exists())
        {
            System.out.println("Directory already exists");
        }
        else
        {
            if(fobj.mkdir())
            {
                System.out.println("Directory successfully created");
            }
            else
            {
                System.out.println("Unable to create directory");
            }
        }
    }

    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String dirname = sobj.nextLine();

        CreateDirectory(dirname);      // Function call

        sobj.close();
    }
}