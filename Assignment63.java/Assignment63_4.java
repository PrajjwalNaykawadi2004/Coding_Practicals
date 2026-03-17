/*
    Algorithum  

    START
        Accept directory name from user
        Create File object for directory
        Check if directory exists and is directory
                If not
                    Dispaly error message
                Else
                    Create new file "Combined.bin"
                    Get list of files from directory
                    For each file
                        If it is regular file
                            Open file in read mode
                            Read data using buffer
                            Write data into Combined.bin
                        Close file
                    Close output file
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
// Function Name    :   CombineFiles
// Description      :   Combine data of all files into Combined.bin
// Input            :   String (Directory name)
// Output           :   Creates Combined.bin
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment63_4
{
    public static void CombineFiles(String dirname)
    {
        File dir = new File(dirname);

        if(dir.exists() && dir.isDirectory())
        {
            try
            {
                File[] fileList = dir.listFiles();
                
                FileOutputStream fos = new FileOutputStream("Combined.bin");

                byte buffer[] = new byte[1024];
                int bytesRead = 0;

                for(File file : fileList)
                {
                    if(file.isFile() && !file.getName().equals("Combined.bin"))
                    {
                        FileInputStream fis = new FileInputStream(file);

                        while((bytesRead = fis.read(buffer)) != -1)
                        {
                            fos.write(buffer, 0, bytesRead);
                        }

                        fis.close();
                    }
                }

                fos.close();
                System.out.println("All files combined successfully into Combined.bin");
            }
            catch(Exception e)
            {
                System.out.println("Error while combining files");
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
        String dirname = sobj.nextLine().trim();

        CombineFiles(dirname);                // Function call

        sobj.close();
    }
}