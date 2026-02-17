/*
    Algorithum  

    START
        Accept file name from user
        Create File object
        Try to create/open file
            If file created successfully
                Display success message
            Else
                Display file already exists
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
// Function Name    :   CreateFile
// Description      :   Accept file name from user and create/open that file
// Input            :   String (File name)
// Output           :   Message (Success / Failure)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment56_1
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fname = sobj.nextLine();

        File fobj = new File(fname);

        try
        {
            if(fobj.createNewFile())
            {
                System.out.println("File successfully created");
            }
            else
            {
                System.out.println("File already exists (opened successfully)");
            }
        }
        catch(IOException e)
        {
            System.out.println("Unable to create/open file");
        }

        sobj.close();
    }
}