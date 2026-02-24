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
                    If it is a regular file
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
// Function Name    :   DisplayRegularFiles
// Description      :   Displays only regular file names from given directory
// Input            :   String (Directory name)
// Output           :   Names of regular files
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment59_2
{
    public static void DisplayRegularFiles(String dirname)
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

            System.out.println("\nRegular files in directory are :\n");

            for(File file : fileList)
            {
                if(file.isFile())       // Only regular file
                {
                    System.out.println(file.getName());
                }
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

        DisplayRegularFiles(dirname);      // Function call

        sobj.close();
    }
}