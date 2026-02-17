/*
    Algorithum  

    START
        Accept directory name from user
        Call ListFiles function
            Create File object for directory
            Check if directory exists
                If not exists
                    Display error message
                Else
                    Get list of files from directory
                    Display all file names
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
// Function Name    :   ListFiles
// Description      :   Displays all file names from given directory
// Input            :   String (File name)
// Output           :   Names of files
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment56_5
{
    public static void ListFiles(String dirname)
    {
        File fobj = new File(dirname);

        if(fobj.exists() && fobj.isDirectory())
        {
            String[] fileList = fobj.list();

            System.out.println("Files in directory are :\n");

            for(String name : fileList)
            {
                System.out.println(name);
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

        ListFiles(dirname);      // Function call

        sobj.close();
    }
}