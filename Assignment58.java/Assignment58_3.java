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
                        If regular file
                        Open file
                        Read data
                        Write data into Marvellous.txt
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
// Function Name    :   MergeFileData
// Description      :   Write data of all files names from given directory into newly
//                      created file Marvellous.txt
// Input            :   String (Directory name)
// Output           :   Creates Marvellous.txt with merged file names
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   23/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment58_3
{
    public static void MergeFileData(String dirname)
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
                        FileInputStream fis = new FileInputStream(file);

                        int data = 0;
                        while((data = fis.read()) != -1)
                        {
                            fos.write(data);
                        }

                        fis.close();
                    }
                }

                fos.close();
                System.out.println("Data merged successfully into Marvellous.txt");
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

        MergeFileData(dirname);      // Function call

        sobj.close();
    }
}