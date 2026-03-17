/*
    Algorithum  

    START
        Accept source directory name from user
        Accept destination directory name from user
        Create File object for both directories
        Check if source files exists and is directory
                If not
                    Dispaly error message
                Else
                    Check destination directory exists
                        If not
                            Create destination directory
                    Get list of files from source directory
                    For each file
                        If it is regular file
                        Open source file in read mode
                        Create file in destination directory
                        Copy data using buffer
                        Close files
                    Display success message
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
// Function Name    :   CopyDirectory
// Description      :   Copy all files from source directory to destination directory
// Input            :   String (Source directory), String (Destination directory)
// Output           :   Message (success / Failure)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment63_3
{
    public static void CopyDirectory(String srcDir, String destDir)
    {
        File src = new File(srcDir);
        File dest = new File(destDir);

        if(src.exists() && src.isDirectory())
        {
            if(!dest.exists())
            {
                dest.mkdir();
            }

            File[] fileList = src.listFiles();

            try
            {
                for(File file : fileList)
                {
                    if(file.isFile())
                    {
                        FileInputStream fis = new FileInputStream(file);

                        File outFile = new File(dest, file.getName());
                        FileOutputStream fos = new FileOutputStream(outFile); 

                        byte buffer[] = new byte[1024];
                        int bytesRead = 0;

                        while((bytesRead = fis.read(buffer)) != -1)
                        {
                            fos.write(buffer, 0, bytesRead);
                        }

                        fis.close();
                        fos.close();
                    }
                }

                System.out.println("All files copied successfully");
            }
            catch(Exception e)
            {
                System.out.println("Error while copying directory");
            }
        } 
        else
        {
            System.out.println("Source directory does not exist");
        }    
    }
    
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter source directory : ");
        String srcDir = sobj.nextLine();

        System.out.print("Enter destination directory: ");
        String destDir = sobj.nextLine();

        CopyDirectory(srcDir, destDir);                // Function call

        sobj.close();
    }
}