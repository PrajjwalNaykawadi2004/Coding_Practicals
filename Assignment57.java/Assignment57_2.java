/*
    Algorithum  

    START
        Accept file name from user
        Call CheckFile function
            Create File object
            Check whether file exists
                If not exists
                    Display error message
                Else
                    Check whether it is a regular file
                        If yes
                            Display "It is a regular file"
                        Else
                            Display "It is not a regular file"
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
// Function Name    :   CheckFile
// Description      :   Checks whether given file is a regular file or not
// Input            :   String (File name)
// Output           :   Message
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment57_2
{
    public static void CheckFile(String fname)
    {
        File fobj = new File(fname);

        if(!fobj.exists())
        {
            System.out.println("File does not exist");
            return;
        }

        if(fobj.isFile())
        {
            System.out.println("It is a regular file");
        }
        else
        {
            System.out.println("It is not a regular file (It may be a directory)");
        }
    }

    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String fname = sobj.nextLine();

        CheckFile(fname);      // Function call

        sobj.close();
    }
}