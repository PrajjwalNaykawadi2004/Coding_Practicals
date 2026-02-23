/*
    Algorithum  

    START
        Accept directory name from user
        Create File object directory
        Check if directory exists and is directory
                If not 
                    Display error message
                Else
                    Create new file "Marvellous.txt"
                    Get list of files from directory
                    For each file
                        Write file name into Marvellous.txt
                    Close file
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
// Function Name    :   WriteFilesToMarvellous
// Description      :   Write all files names from given directory into newly created
//                      file Marvellous.txt
// Input            :   String (Directory name)
// Output           :   Creates Marvellous.txt with file names
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   23/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment58_2
{
    public static void WriteFilesToMarvellous(String dirname)
    {
        File dir = new File(dirname);

        if(dir.exists() && dir.isDirectory())
        {
            try
            {
                File[] fileList = dir.listFiles();

                FileWriter fw = new FileWriter("Marvellous.txt");
                BufferedWriter bw = new BufferedWriter(fw);

                for(File file : fileList)
                {
                    if(file.isFile())
                    {
                        bw.write(file.getName());
                        bw.newLine();
                    }
                }

                bw.close();
                System.out.println("File Marvellous.txt created successfully");
            }
            catch(Exception e)
            {
                System.out.println("Error while writing file");
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

        WriteFilesToMarvellous(dirname);      // Function call

        sobj.close();
    }
}