/*
    Algorithum  

    START
        Accept directory name from user
        Accept File extension from user
        Create File object for given directory
        Check if directory exists and is directory
                If not
                    Display error message
                Else
                    Get list of files from directory
                    Initialize flag as false
                    For each file in directory
                        If it is regular file
                            If file name ends with given extension
                                Display file name
                                Set flag as true
                            If flag is false
                                Display "No files found with given extension"
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
// Function Name    :   DisplayFilesByExtension
// Description      :   Accept directory name and file extension from user and display
//                      only files having that extension         
// Input            :   Directory name, File extension
// Output           :   Names of files matching the extension
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   25/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment60_4
{
    public static void DisplayFilesByExtension(String dirname, String extension)
    {
        File fobj = new File(dirname);

        // Check directory
        if(fobj.exists() && fobj.isDirectory())
        {
            File[] fileList = fobj.listFiles();

            if(fileList == null)
            {
                System.out.println("Unable to read directory");
                return;
            }

            System.out.println("\nFiles with ." + extension + "extension :");
            boolean flag = false;

            for(File file : fileList)
            {
                if(file.isFile() && file.getName().toLowerCase().endsWith("." + extension.toLowerCase()))       
                {
                    System.out.println(file.getName());
                    flag = true;
                }
            }

            if(flag == false)
            {
                System.out.println("No files found with given extension");
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

        System.out.print("Enter file extension (without dot) : ");
        String extension = sobj.nextLine();

        DisplayFilesByExtension(dirname, extension);      // Function call

        sobj.close();
    }
}