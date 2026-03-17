/*
    Algorithum  

    START
        Accept first input file name from user
        Accept second input file name from user
        Accept output file name from user
        Create File object for both input files
        Check if both files exists
                If not
                    Dispaly error message
                Else
                    Open first file in read mode
                    Open second file in read mode
                    Open output file in write mode
                    Create byte buffer
                    Read first file data and write into output file
                    Read second file data and write into output file
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
// Function Name    :   MergeFiles
// Description      :   Merge two files into third file   
// Input            :   String, String, String (file names)
// Output           :   Message(Success / Failure)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment61_4
{
    public static void MergeFiles(String file1, String file2, String outFile)
    {
        File f1 = new File(file1);
        File f2 = new File(file2);

        if(f1.exists() && f2.exists())
        {
            try
            {
                FileInputStream fis1 = new FileInputStream(f1);
                FileInputStream fis2 = new FileInputStream(f2);
                FileOutputStream fos = new FileOutputStream(outFile);              

                byte buffer[] = new byte[1024];
                int bytesRead = 0;

                // Copy first file
                while((bytesRead = fis1.read(buffer)) != -1)
                {
                    fos.write(buffer, 0, bytesRead);
                }

                // Copy second file
                while((bytesRead = fis2.read(buffer)) != -1)
                {
                    fos.write(buffer, 0, bytesRead);
                }

                fis1.close();
                fis2.close();
                fos.close();

                System.out.println("Files merged successfully");
            }
            catch(Exception e)
            {
                System.out.println("Error while merging files");
            }
        }     
        else
        {
            System.out.println("One or both input files do not exist");
        }
    }
    
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter first file name : ");
        String file1 = sobj.next();

        System.out.print("Enter second file name : ");
        String file2 = sobj.next();

        System.out.print("Enter output file name : ");
        String outFile = sobj.next();

        MergeFiles(file1, file2, outFile);                // Function call

        sobj.close();
    }
}