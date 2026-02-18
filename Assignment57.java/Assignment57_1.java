/*
    Algorithum  

    START
        Accept source file name from user
        Accept destination file name from user
        Call CopyFile function
            Check whether source file exists
                If not exists
                    Display error message
                Else
                    Open source file in read mode
                    Create destination file in write mode
                    Read data from source file
                    Write data into destination file
                    Close both files
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
// Function Name    :   CopyFile
// Description      :   Copies data from source file to destination file
// Input            :   String (Source file), String (Destination file)
// Output           :   Message
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment57_1
{
    public static void CopyFile(String src, String dest)
    {
        File fsrc = new File(src);

        if(!fsrc.exists())
        {
            System.out.println("Source file does not exist");
            return;
        }

        try
        {
            FileReader fr = new FileReader(fsrc);
            BufferedReader br = new BufferedReader(fr);

            FileWriter fw = new FileWriter(dest);

            String line;

            while((line = br.readLine()) != null)
            {
                fw.write(line);
                fw.write("\n");
            }

            br.close();
            fw.close();

            System.out.println("File copied successfully");
        }
        catch(IOException e)
        {
            System.out.println("Unable to copy file");
        }
    }

    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter source file name : ");
        String src = sobj.nextLine();

        System.out.print("Enter destination file name : ");
        String dest = sobj.nextLine();

        CopyFile(src, dest);      // Function call

        sobj.close();
    }
}