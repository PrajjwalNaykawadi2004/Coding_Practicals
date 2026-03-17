/*
    Algorithum  

    START
        Accept source file name from user
        Accept destination file name from user
        Create File object for source file
        Check if source file exists
                If not
                    Dispaly error message
                Else
                    Open source file in read mode
                    Create/Open destination file in write mode
                    Read one byte from source file
                    While not end of file
                        Write byte into destination file
                    Close both files
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
// Function Name    :   CopyFile
// Description      :   Copies data from source file to destination file (byte by byte)     
// Input            :   String (Source file), String(Destination File)
// Output           :   Creates destination file with copied data
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment61_1
{
    public static void CopyFile(String src, String dest)
    {
        File source = new File(src);

        if(source.exists())
        {
            try
            {
                FileInputStream fis = new FileInputStream(source);
                FileOutputStream fos = new FileOutputStream(dest);

                int data = 0;

                // Byte by byte copy
                while((data = fis.read()) != -1)
                {
                    fos.write(data);
                }

                fis.close();
                fos.close();

                System.out.println("Data copied successfully");
            }
            catch(Exception e)
            {
                System.out.println("Error while copying file");
            }
        }     
        else
        {
            System.out.println("Source file does not exist");
        }
    }
    
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter source file name : ");
        String src = sobj.nextLine();

        System.out.print("Enter destination file name : ");
        String dest = sobj.nextLine();

        CopyFile(src, dest);                // Function call

        sobj.close();
    }
}