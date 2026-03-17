/*
    Algorithum  

    START
        Accept directory name from user (Combined.bin)
        Create File object
        Check if file exists
                If not
                    Dispaly error message
                Else
                    Open file in read mode
                    Create new file Output.bin in write mode
                    Create byte buffer of size 1024 (1KB)
                    Read up to 1024 bytes from file
                    Write those bytes into Output.bin
                    Close both files
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
// Function Name    :   CopyFirstKB
// Description      :   Copy first 1KB data from file into Output.bin
// Input            :   String (File name)
// Output           :   Creates Output.bin
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment63_5
{
    public static void CopyFirstKB(String fname)
    {
        File fobj = new File(fname);

        if(fobj.exists())
        {
            try
            {
                FileInputStream fis = new FileInputStream(fobj);
                FileOutputStream fos = new FileOutputStream("Combined.bin");

                byte buffer[] = new byte[1024];

                int bytesRead = fis.read(buffer);

                if(bytesRead > 0)
                {
                    fos.write(buffer, 0, bytesRead);
                }

                fis.close();
                fos.close();

                System.out.println("First 1KB data copied successfully into Output.bin");
            }
            catch(Exception e)
            {
                System.out.println("Error while processing file");
            }
        } 
        else
        {
            System.out.println("File does not exist");
        }    
    }
    
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fname = sobj.nextLine().trim();

        CopyFirstKB(fname);                // Function call

        sobj.close();
    }
}