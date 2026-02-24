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
                    Initialize fileCount = 0 and dirCount = 0
                    For each file
                        If it is a regular file
                            Increment fileCount
                        If it is a directory
                            Increment dirCount
                        Display total file and total directories
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
// Function Name    :   CountFilesAndFolders
// Description      :   Counts total regular files and subdirectories from given 
//                      directory
// Input            :   String (Directory name)
// Output           :   Count of files and directories
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment59_4
{
    public static void CountFilesAndFolders(String dirname)
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

            int fileCount = 0;
            int dirCount = 0;

            for(File file : fileList)
            {
                if(file.isFile())       // Only regular file
                {
                    fileCount++;
                }
                else if(file.isDirectory())
                {
                    dirCount++;
                }
            }

            System.out.println("\nTotal files: " + fileCount);
            System.out.println("\nTotal folders : " + dirCount);
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

        CountFilesAndFolders(dirname);      // Function call

        sobj.close();
    }
}