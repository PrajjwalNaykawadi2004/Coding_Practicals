/*
    Algorithum  

    START
        Accept directory name from user
        Create File object for given directory
        Check if directory exists and is directory
                If not
                    Display error message
                Else
                    Get list of files from directory
                    For each file
                        Display file name
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
// Function Name    :   DisplayFileNames
// Description      :   Displays names of files from given directory
// Input            :   String (Directory name)
// Output           :   File names
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment59_1
{
    public static void DisplayFileNames(String dirname)
    {
        File fobj = new File(dirname);

        if(fobj.exists() && fobj.isDirectory())
        {
            File[] fileList = fobj.listFiles();

            if(fileList == null)
            {
                System.out.println("Unable to read directory");
                return;
            }

            for(File file : fileList)
            {
                System.out.println(file.getName());
            }
        }     
        else
        {
            System.out.println("Directory does not exist");
        }
    }
    
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String dirname = sobj.nextLine();

        DisplayFileNames(dirname);      // Function call

        sobj.close();
    }
}