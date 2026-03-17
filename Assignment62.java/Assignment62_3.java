/*
    Algorithum  

    START
        Accept file name from user
        Accept integer N from user
        Create File object for given file
        Check if files exists
                If not
                    Dispaly error message
                Else
                    Get total size of file
                    If N > file size
                        Set N = file size
                    Open file in read mode
                    Skip (file size - N) bytes
                    Create new file (Output.txt) in write mode
                    Read remaining bytes
                    Write into Output.txt
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
// Function Name    :   CopyLastNBytes
// Description      :   Copy last N bytes from file into new file
// Input            :   String (File name), int (Number of bytes)
// Output           :   Creates Output.txt
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment62_3
{
    public static void CopyLastNBytes(String fname, int N)
    {
        File fobj = new File(fname);

        if(fobj.exists())
        {
            try
            {
                long fileSize = fobj.length();

                if(N > fileSize)
                {
                    N = (int)fileSize;
                }

                FileInputStream fis = new FileInputStream(fobj);   
                FileOutputStream fos = new FileOutputStream("Output.txt"); 

                // Skip inital bytes
                fis.skip(fileSize - N);

                byte buffer[] = new byte[1024];           
                int bytesRead = 0;

                while((bytesRead = fis.read(buffer)) != -1)
                {
                    fos.write(buffer, 0, bytesRead);
                }

                fis.close();
                fos.close();
                
                System.out.println("Last " + N + " bytes copied successfully into Output.txt");
            }
            catch(Exception e)
            {
                System.out.println("Error while copying file");
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
        String fname = sobj.next();

        System.out.print("Enter number of bytes : ");
        int N = sobj.nextInt();
        
        CopyLastNBytes(fname, N);                // Function call

        sobj.close();
    }
}