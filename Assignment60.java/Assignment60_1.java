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
                    Initialize totalSize = 0
                    For each file
                        If it is regular file
                            Add file length to totalSize
                        Display totalSize
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
// Function Name    :   CalculateTotalSize
// Description      :   Calculates total size of all regular files from given directory           
// Input            :   String (Directory name)
// Output           :   Total size in bytes
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   25/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment60_1
{
    public static void CalculateTotalSize(String dirname)
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

            long totalSize = 0;

            for(File file : fileList)
            {
                if(file.isFile())       
                {
                    totalSize = totalSize + file.length();
                }
            }

            System.out.println("\nTotal size of all files : " + totalSize + "bytes");
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

        CalculateTotalSize(dirname);      // Function call

        sobj.close();
    }
}