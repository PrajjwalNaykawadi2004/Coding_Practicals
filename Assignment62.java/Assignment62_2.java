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
                    Open source file in read mode
                    Create new file (Output.txt) in write mode
                    Create byte buffer
                    Read data from file
                        Copy only first N bytes into new file
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
// Function Name    :   CopyFirstNBytes
// Description      :   Copy first N bytes from file into new file
// Input            :   String (File name), int (Number of bytes)
// Output           :   Creates Output.txt
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment62_2
{
    public static void CopyFirstNBytes(String fname, int N)
    {
        File fobj = new File(fname);

        if(fobj.exists())
        {
            try
            {
                FileInputStream fis = new FileInputStream(fobj);   
                FileOutputStream fos = new FileOutputStream("Output.txt"); 

                byte buffer[] = new byte[1024];           
                int bytesRead = 0;
                int totalRead = 0;

                while((bytesRead = fis.read(buffer)) != -1 && totalRead < N)
                {
                    if(totalRead + bytesRead <= N)
                    {
                        fos.write(buffer, 0, bytesRead);
                        totalRead += bytesRead;
                    }
                    else
                    {
                        int remaining = N - totalRead;
                        fos.write(buffer, 0, remaining);
                        totalRead += remaining;
                        break;
                    }
                }

                fis.close();
                fos.close();
                
                System.out.println("First " + N + " bytes copied successfully into Output.txt");
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
        
        CopyFirstNBytes(fname, N);                // Function call

        sobj.close();
    }
}