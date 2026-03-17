/*
    Algorithum  

    START
        Accept file name from user
        Try
            Create File object
            Open file in read mode
            Read file data
            Display file contents
            Close file
        Catch FileNotFoundException
            Display file not found message
        Catch IOException
            Display input/ouput error message
        Catch SecurityException
            Display permission denied message
        Catch Exception
            Display generic error message
        Finally
            Close resources if opened
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
// Function Name    :   HandleFile
// Description      :   Demonstrates handling of file-related exceptions
// Input            :   String (File name)
// Output           :   Displays file content or error messages
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment62_5
{
    public static void HandleFile(String fname)
    {
        FileInputStream fis = null;

        try
        {
            File fobj = new File(fname);

            fis = new FileInputStream(fobj);
            
            int data = 0;

            System.out.println("File contents are :\n");

            while((data = fis.read()) != -1)
            {
                System.out.println((char)data);
            }
        }
        catch(FileNotFoundException e)
        {
            System.out.println("Error : File not found");
        }
        catch(IOException e)
        {
            System.out.println("Error : Problem while reading file");
        }   
        catch(SecurityException e)
        {
            System.out.println("Error : Permission denied");
        }
        catch(Exception e)
        {
            System.out.println("Unknown error occurred");
        }
        finally
        {
            try
            {
                if(fis != null)
                {
                    fis.close();
                }
            }
            catch(IOException e)
            {
                System.out.println("Error while closing file");
            }
        }
    }
    
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fname = sobj.next();

        HandleFile(fname);                // Function call

        sobj.close();
    }
}