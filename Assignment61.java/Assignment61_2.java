/*
    Algorithum  

    START
        Accept source file name from user
        Accept destination file name from user
        Create File object for source file
        Check if source file exists
                If not
                    Dispaly error message
                Else
                    Open source file in read mode
                    Open destination file in write mode
                    Create byte array buffer
                    Read data from source file into buffer
                    Write buffer data into destination file
                    Repeat until end of file
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
// Function Name    :   CopyFileBuffer
// Description      :   Copies data from source file to destination file using byte buffer     
// Input            :   String (Source file), String(Destination File)
// Output           :   Message(Success / Failure)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment61_2
{
    public static void CopyFileBuffer(String src, String dest)
    {
        File source = new File(src);

        if(source.exists())
        {
            try
            {
                FileInputStream fis = new FileInputStream(source);
                FileOutputStream fos = new FileOutputStream(dest);

                byte buffer[] = new byte[1024];                 // Buffer of 1KB
                int bytesRead = 0;

                // Byte by byte copy
                while((bytesRead = fis.read(buffer)) != -1)
                {
                    fos.write(buffer, 0, bytesRead);
                }

                fis.close();
                fos.close();

                System.out.println("File copied successfully using buffer");
            }
            catch(Exception e)
            {
                System.out.println("Error while copying file");
            }
        }     
        else
        {
            System.out.println("Source file does not exist");
        }
    }
    
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter source file name : ");
        String src = sobj.nextLine();

        System.out.print("Enter destination file name : ");
        String dest = sobj.nextLine();

        CopyFileBuffer(src, dest);                // Function call

        sobj.close();
    }
}