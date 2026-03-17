/*
    Algorithum  

    START
        Accept file name from user
        Accept string from user
        Create File object for given file
        Check if file exists
                If not
                    Dispaly error message
                Else
                    Open file in append mode
                    Convert string into bytes
                    Write data at end of file
                    Close file
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
// Function Name    :   AppendString
// Description      :   Append given string at the end of file     
// Input            :   String (File name), String(Data))
// Output           :   Message(Success / Failure)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment61_3
{
    public static void AppendString(String fname, String str)
    {
        File fobj = new File(fname);

        if(fobj.exists())
        {
            try
            {
                FileOutputStream fos = new FileOutputStream(fobj, true);              

                byte data[] = str.getBytes();

                fos.write(data);

                fos.close();

                System.out.println("String appended successfully");
            }
            catch(Exception e)
            {
                System.out.println("Error while writing to file");
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
        String fname = sobj.nextLine();

        System.out.print("Enter string to append : ");
        String str = sobj.nextLine();

        AppendString(fname, str);                // Function call

        sobj.close();
    }
}