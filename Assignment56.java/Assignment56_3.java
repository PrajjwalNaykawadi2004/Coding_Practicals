/*
    Algorithum  

    START
        Accept file name from user
        Accept data to write from user
        Open file in append mode
        Write data at the end of file
        Close the file
        Display success message
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
// Function Name    :   WriteFile
// Description      :   Accept file in write mode and append data at the end
// Input            :   String (File name), String (Data)
// Output           :   Message (Success / Failure)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment56_3
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fname = sobj.nextLine();

        System.out.print("Enter data to write : ");
        String data = sobj.nextLine();

        try
        {
            // true means append mode
            FileWriter fw = new FileWriter(fname, true);

            fw.write(data);
            fw.write("\n");    // move to next line     
            fw.close();

            System.out.println("Data successfully written at the end of file");
        }
        catch(IOException e)
        {
            System.out.println("Unable to write into file");
        }

        sobj.close();
    }
}