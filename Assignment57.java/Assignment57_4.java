/*
    Algorithum  

    START
        Accept file name from user
        Call CheckSumFile function
            Check whether file exists
                If not exists
                    Display error message
                Else
                    Open file in binary read mode
                    Read file byte by byte
                    Add each byte value into sum
                    Display checksum value
        If exception occurs
            Display error message
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
// Function Name    :   CheckSumFile
// Description      :   Calculates checksum (sum of bytes) of a file
// Input            :   String (File name)
// Output           :   Integer (Checksum value)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment57_4
{
    public static void CheckSumFile(String fname)
    {
        File fobj = new File(fname);

        if(!fobj.exists())
        {
            System.out.println("File does not exist");
            return;
        }
        
        int sum = 0;

        try
        {
            FileInputStream fis = new FileInputStream(fobj);
            int data;

            // Read file byte by byte
            while((data = fis.read()) != -1)
            {
                sum = sum + data;
            }

            fis.close();

            System.out.println("Checksum of file is : " + sum);
        }
        catch(IOException e)
        {
            System.out.println("Unable to read file");
        }
    }

    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fname = sobj.nextLine();

        CheckSumFile(fname);      // Function call

        sobj.close();
    }
}