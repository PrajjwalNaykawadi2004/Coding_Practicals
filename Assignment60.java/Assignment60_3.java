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
                    Initialize minSize = very large value
                    Initialize smallestFile = null
                    For each file
                        If it is regular file
                            If file size < minSize
                                Update minSize
                                Store file reference
                            If smallestFile exists
                                Display smallest file name and its size
                            Else
                                Display no files message
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
// Function Name    :   FindSmallestFile
// Description      :   Displays name of the smallest regular file from given directory          
// Input            :   String (Directory name)
// Output           :   Smallest file name with size
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   25/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment60_3
{
    public static void FindSmallestFile(String dirname)
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

            long minSize = Long.MAX_VALUE;
            File smallestFile = null;

            for(File file : fileList)
            {
                if(file.isFile())       
                {
                    if(file.length() < minSize)
                    {
                        minSize = file.length();
                        smallestFile = file;
                    }
                }
            }

            if(smallestFile != null)
            {
                System.out.println("\nSmallest File : " + smallestFile.getName());
                System.out.println("Size : " + minSize + "bytes");
            }
            else
            {
                System.out.println("No regular files found in directory");
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

        FindSmallestFile(dirname);      // Function call

        sobj.close();
    }
}