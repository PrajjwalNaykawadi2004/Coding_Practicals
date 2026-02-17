/*
    Algorithum  

    START
        Accept file name from user
        Create File object
        Check whether file exists
            If file does not exist
                Display error message
            Else
                Open file using FileReader
                Read file contents
                Display contents on screen
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
// Function Name    :   DisplayFile
// Description      :   Accept file name and display its contents
// Input            :   String (File name)
// Output           :   File data on screen
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment56_2
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fname = sobj.nextLine();

        File fobj = new File(fname);

        if(!fobj.exists())
        {
            System.out.println("File does not exist");
            return;
        }

        try
        {
            BufferedReader bobj = new BufferedReader(new FileReader(fobj));
            String line;

            System.out.println("Contents of file are :\n");

            while((line = bobj.readLine()) != null)
            {
                System.out.println(line);
            }

            bobj.close();
        }
        catch(IOException e)
        {
            System.out.println("Unable to read file");
        }

        sobj.close();
    }
}