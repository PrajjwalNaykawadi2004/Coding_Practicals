/*
    Algorithum  

    START
        Accept file name from user
        Create File object for given file
        Check if files exists
                If not
                    Dispaly error message
                Else
                    Open file in read mode
                    Initialize counter = 0
                    Read file data byte by byte
                        Increment counter for each byte
                    Close file
                    Display total number of bytes
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
// Function Name    :   CountBytes
// Description      :   Count total number of bytes in file
// Input            :   String (File name)
// Output           :   Integer (Total bytes)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment62_1
{
    public static int CountBytes(String fname)
    {
        File fobj = new File(fname);

        if(fobj.exists())
        {
            try
            {
                FileInputStream fis = new FileInputStream(fobj);            

                int count = 0;
                int data = 0;

                while((data = fis.read()) != -1)
                {
                    count++;
                }

                fis.close();
                return count;
            }
            catch(Exception e)
            {
                System.out.println("Error while reading file");
                return -1;
            }
        }     
        else
        {
            System.out.println("File does not exist");
            return -1;
        }
    }
    
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fname = sobj.next();
        
        int iRet = CountBytes(fname);                // Function call

        if(iRet != -1)
        {
            System.out.print("Total number of bytes : " + iRet);
        }

        sobj.close();
    }
}