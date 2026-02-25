/*
    Algorithum  

    START
        Accept path from user
        Accept File object for given path
        Check if path exists
                If not
                    Display "Path does not exist"
                Else
                    If it is a file
                        Display "It is a file"
                    Else if it is a directory
                        Display "It is a directory"
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
// Function Name    :   CheckPath
// Description      :   Check whether given path exists and determine its type      
// Input            :   String (Path)
// Output           :   Displays path status (File / Directory / Not Exists )
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   25/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment60_5
{
    public static void CheckPath(String path)
    {
        File fobj = new File(path);

        if(fobj.exists())
        {
            System.out.println("Path exists");

            if(fobj.isFile())
            {
                System.out.println("It is a File");
            }
            else if(fobj.isDirectory())
            {
                System.out.println("It is a Directory");
            }
        }     
        else
        {
            System.out.println("Path does not exist");
        }
    }
    
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String path = sobj.nextLine();
        
        CheckPath(path);      // Function call

        sobj.close();
    }
}