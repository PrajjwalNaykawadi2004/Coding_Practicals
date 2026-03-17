/*
    Algorithum  

    START
        Accept source file name from user
        Accept destination file name from user
        Create File object for source file
        Check if source files exists
                If not
                    Dispaly error message
                Else
                    Open source file using BufferedInputStream
                    Open backup file using BufferedOutputStream
                    Create byte buffer
                    Read data from source file
                    Write data into destination file
                    Repeat until end of file
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
// Function Name    :   CopyFileBuffered
// Description      :   Copy file using BufferedInputStream and BufferedOutputStream
// Input            :   String (Source), String (Destination)
// Output           :   Message (success / Failure)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment63_1
{
    public static void CopyFileBuffered(String src, String dest)
    {
        File source = new File(src);

        if(source.exists())
        {
            try
            {
                FileInputStream fis = new FileInputStream(source);
                BufferedInputStream bis = new BufferedInputStream(fis);

                FileOutputStream fos = new FileOutputStream(dest); 
                BufferedOutputStream bos = new BufferedOutputStream(fos); 

                byte buffer[] = new byte[1024];           
                int bytesRead = 0;

                while((bytesRead = bis.read(buffer)) != -1)
                {
                    fos.write(buffer, 0, bytesRead);
                }

                bis.close();
                bos.close();
                
                System.out.println("File copied successfully using buffered streams");
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
        String src = sobj.next();

        System.out.print("Enter destination file name : ");
        String dest = sobj.next();

        CopyFileBuffered(src, dest);                // Function call

        sobj.close();
    }
}