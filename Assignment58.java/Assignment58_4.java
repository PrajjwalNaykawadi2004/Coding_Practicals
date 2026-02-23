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
// Function Name    :   MergeFileDataWithName
// Description      :   Write data of all files along with their names from given
//                      directory into newly created file Marvellous.txt
// Input            :   String (Directory name)
// Output           :   Creates Marvellous.txt with file names and their data
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   23/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment58_4
{
    public static void MergeFileDataWithName(String dirname)
    {
        File dir = new File(dirname);

        if(dir.exists() && dir.isDirectory())
        {
            try
            {
                File[] fileList = dir.listFiles();

                FileOutputStream fos = new FileOutputStream("Marvellous.txt");

                for(File file : fileList)
                {
                    if(file.isFile() && !file.getName().equals("Marvellous.txt"))
                    {
                        // Write file name
                        String header = "\n===== File Name : " + file.getName() + " =====\n";
                        fos.write(header.getBytes());

                        // Read file data
                        FileInputStream fis = new FileInputStream(file);

                        int data = 0;
                        while((data = fis.read()) != -1)
                        {
                            fos.write(data);
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

        MergeFileDataWithName(dirname);      // Function call

        sobj.close();
    }
}