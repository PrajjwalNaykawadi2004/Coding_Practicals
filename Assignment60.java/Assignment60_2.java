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
                    Initialize maxSize = 0
                    Initialize largestFile = null
                    For each file
                        If it is regular file
                            If file size > maxSize
                                Update maxSize
                                Store file reference
                        Display largest file name and its size
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
// Function Name    :   FindLargestFile
// Description      :   Displays name of the largest regular file from given directory          
// Input            :   String (Directory name)
// Output           :   Largest file name with size
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   25/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment60_2
{
    public static void FindLargestFile(String dirname)
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

            long maxSize = 0;
            File largestFile = null;

            for(File file : fileList)
            {
                if(file.isFile())       
                {
                    if(file.length() > maxSize)
                    {
                        maxSize = file.length();
                        largestFile = file;
                    }
                }
            }

            if(largestFile != null)
            {
                System.out.println("\nLargest File : " + largestFile.getName());
                System.out.println("Size : " + maxSize + "bytes");
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

        FindLargestFile(dirname);      // Function call

        sobj.close();
    }
}