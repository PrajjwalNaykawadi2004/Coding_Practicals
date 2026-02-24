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
                        Display absolute path of that file
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
// Function Name    :   DisplayFileWithAbsolutePath
// Description      :   Displays file names along with their absolute paths from 
//                      given directory
// Input            :   String (Directory name)
// Output           :   File name with absolute path
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment59_5
{
    public static void DisplayFileWithAbsolutePath(String dirname)
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

            System.out.println("\nFiles with absolute paths are :\n");

            for(File file : fileList)
            {
                if(file.isFile())       
                {
                    System.out.println("File Name : " + file.getName());
                    System.out.println("Absolute Path : " + file.getAbsolutePath());
                    System.out.println("----------------------------------");
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

        DisplayFileWithAbsolutePath(dirname);      // Function call

        sobj.close();
    }
}