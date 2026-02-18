/*
    Algorithum  

    START
        Accept directory name from user
        Call ListFilesWithSize function
            Create File object for directory
            Check if directory exists and is directory
                If not exists
                    Display error message
                Else
                    Get list of files
                    For each file
                        Display file name and its size
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
// Function Name    :   ListFilesWithSize
// Description      :   Displays file names and their sizes from given directory
// Input            :   String (Directory name)
// Output           :   Names of files and their sizes
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment57_5
{
    public static void ListFilesWithSize(String dirname)
    {
        File fobj = new File(dirname);

        if(fobj.exists() && fobj.isDirectory())
        {
            File[] fileList = fobj.listFiles();

            System.out.println("\nFiles and their sizes are :\n");
            
            for(File file : fileList)
            {
                if(file.isFile())
                {
                    System.out.println(file.getName() + " \t Size : " + file.length() + "bytes");
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

        System.out.print("Enter irectory name : ");
        String dirname = sobj.nextLine();

        ListFilesWithSize(dirname);      // Function call

        sobj.close();
    }
}