/*
    Algorithum  

    START
        Accept file name from user
        Create File object for given file
        Check if both files exists
                If not
                    Dispaly error message
                Else
                    Open file in read mode
                    Open total size of file
                    Calculate half size
                    Create two new files (First.txt and second.txt)
                    Read data from original file
                        Write first half data into First.txt
                        Write remaining data into second.txt
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
// Function Name    :   SplitFile
// Description      :   Split file into two halves
// Input            :   String (File name)
// Output           :   Creates two files (First.txt, Second.txt)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment61_5
{
    public static void SplitFile(String fname)
    {
        File fobj = new File(fname);

        if(fobj.exists())
        {
            try
            {
                FileInputStream fis = new FileInputStream(fobj);            

                int fileSize = (int) fobj.length();
                int half = fileSize / 2;

                FileOutputStream fos1 = new FileOutputStream("First.txt");
                FileOutputStream fos2 = new FileOutputStream("Second.txt");

                byte buffer[] = new byte[1024];
                int bytesRead = 0;
                int totalRead = 0;

                while((bytesRead = fis.read(buffer)) != -1)
                {
                    if(totalRead + bytesRead <= half)
                    {
                        fos1.write(buffer, 0, bytesRead);
                    }
                    else
                    {
                        int firstPart = half - totalRead;

                        if(firstPart > 0)
                        {
                            fos1.write(buffer, 0, firstPart);
                        }

                        fos2.write(buffer, firstPart, bytesRead - firstPart);
                    }

                    totalRead += bytesRead;
                }

                fis.close();
                fos1.close();
                fos2.close();

                System.out.println("File split successfully into First.txt and Second.txt");
            }
            catch(Exception e)
            {
                System.out.println("Error while splitting file");
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
        
        SplitFile(fname);                // Function call

        sobj.close();
    }
}