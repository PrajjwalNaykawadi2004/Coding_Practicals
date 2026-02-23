/*
    Algorithum  

    START
        Accept directory name from user
        Call DisplayRegularFiles function
            Create File object for given directory
            Check if directory exists and is directory
                If not 
                    Display error message
                Else
                    Get list of files
                    For each file
                        If file is regular file
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
// Description      :   Displays names of regular files from given directory
// Input            :   String (Directory name)
// Output           :   Names of regular files
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   23/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment58_1
{
    public static void DisplayRegularFiles(String dirname)
    {
        File fobj = new File(dirname);

        if(fobj.exists() && fobj.isDirectory())
        {
            File[] fileList = fobj.listFiles();

            System.out.println("\nRegular Files in directory are :\n");
            
            for(File file : fileList)
            {
                if(file.isFile())       // Checks for regular files
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