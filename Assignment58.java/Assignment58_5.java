/*
    Algorithum  

    START
        Accept directory name from user
        Create File object for directory
        Check if directory exists and is directory
                If not
                    Display error message
                Else
                    Create new file "Marvellous.txt"
                    Get list of files from directory
                    For each file
                        If it is regular file and not Marvellous.txt
                            Write file name into Marvellous.txt
                            Open file
                            Read its data
                            Write data into Marvellous.txt
                            Write separator line
                    Close all files
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
// Function Name    :   MergeFileDataWithSize
// Description      :   Write data of all files along with their names and sizes from 
//                      given directory into newly created file Marvellous.txt
// Input            :   String (Directory name)
// Output           :   Creates Marvellous.txt with file name, size and data
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   23/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment58_5
{
    public static void MergeFileDataWithSize(String dirname)
    {
        File dir = new File(dirname);

        if(dir.exists() && dir.isDirectory())
        {
            try
            {
                File[] fileList = dir.listFiles();

                if(fileList == null)
                {
                    System.out.println("Unable to read directory");
                    return;
                }

                FileOutputStream fos = new FileOutputStream("Marvellous.txt");

                for(File file : fileList)
                {
                    if(file.isFile() && !file.getName().equals("Marvellous.txt"))
                    {
                        // Write file name
                        String header = "\n===== File Name : " + file.getName() + " | size : " + file.length() + " bytes =====\n";
                        fos.write(header.getBytes());

                        // Read file data using buffer
                        FileInputStream fis = new FileInputStream(file);

                        byte buffer[] = new byte[1024];
                        int bytesRead = 0;

                        while((bytesRead = fis.read(buffer)) != -1)
                        {
                            fos.write(buffer, 0, bytesRead);
                        }

                        fis.close();

                        // Separator
                        String footer = "\n========================================\n";
                        fos.write(footer.getBytes());
                    }
                }

                fos.close();
                System.out.println("All file data merged successfully into Marvellous.txt");
            }
            catch(Exception e)
            {
                System.out.println("Error while merging file");
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

        MergeFileDataWithSize(dirname);      // Function call

        sobj.close();
    }
}