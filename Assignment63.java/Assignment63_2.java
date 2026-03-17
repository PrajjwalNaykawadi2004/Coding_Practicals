/*
    Algorithum  

    START
        Accept source file name from user
        Accept destination file name for both methods

        // Normal Copy
        Start timer
        Open source file using FileInputStream
        Open destination file using FileOutputStream
        Read data and write byte by byte
        Close files
        Stop timer
        Display time taken

        // Buffered Copy
        Open source file using BufferedInputStream
        Open destination file using BufferedOutputStream
        Read data using buffer and write
        Close files
        Stop timer
        Display time taken

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
// Function Name    :   CopyNormal
// Description      :   Copy file using normal FileInputstream and FileOutputStram
// Input            :   String (Source file), String (Destination file)
// Output           :   long (Time required in milliseconds)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment63_2
{
    public static long CopyNormal(String src, String dest)
    {
        long start = 0, end = 0;

        try
        {
            FileInputStream fis = new FileInputStream(src);
            FileOutputStream fos = new FileOutputStream(dest); 

            int data = 0; 

            start = System.currentTimeMillis();

            while((data = fis.read()) != -1)
            {
                fos.write(data);
            }

            end = System.currentTimeMillis();

            fis.close();
            fos.close();
        }
        catch(Exception e)
        {
            System.out.println("Error in normal copy");
        }   

        return (end - start);
    }

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CopyBuffered
// Description      :   Copy file using BufferedInputstream and BufferedOutputStream
// Input            :   String (Source file), String (Destination file)
// Output           :   long (Time required in milliseconds)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////


    public static long CopyBuffered(String src, String dest)
    {
        long start = 0, end = 0;

        try
        {
            FileInputStream fis = new FileInputStream(src);
            BufferedInputStream bis = new BufferedInputStream(fis);

            FileOutputStream fos = new FileOutputStream(dest); 
            BufferedOutputStream bos = new BufferedOutputStream(fos); 

            byte buffer[] = new byte[1024];
            int bytesRead = 0;

            start = System.currentTimeMillis();

            while((bytesRead = bis.read(buffer)) != -1)
            {
                bos.write(buffer, 0, bytesRead);
            }

            end = System.currentTimeMillis();

            bis.close();
            bos.close();
        }
        catch(Exception e)
        {
            System.out.println("Error in normal copy");
        }   

        return (end - start);
    }
    
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter source file name : ");
        String src = sobj.next();

        long normalTime = CopyNormal(src, "Normalcopy.txt");
        long bufferedTime = CopyBuffered(src, "BufferedCopy.txt");

        System.out.println("Time required using normal streams : " + normalTime + " ms");
        System.out.println("Time required using buffered streams : " + bufferedTime + " ms");

        sobj.close();
    }
}