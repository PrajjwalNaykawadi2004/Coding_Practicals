/*
    Algorithum  

    START
        Accept file name from user
        Create File object for given file
        Check if files exists
                If not
                    Dispaly error message
                Else
                    Extract file name and extension
                    Create new file name as original_backup.ext
                    Open source file in read mode
                    Open backup file in write mode
                    Create byte buffer
                    Read data from source file
                    Write data into backup file
                    Close all files
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
// Function Name    :   CreateBackup
// Description      :   Create backup copy of file with name original_backup.ext
// Input            :   String (File name)
// Output           :   Creates backup file
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   17/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class Assignment62_4
{
    public static void CreateBackup(String fname)
    {
        File source = new File(fname);

        if(source.exists())
        {
            try
            {
                String name = source.getName();

                int dotIndex = name.lastIndexOf('.');

                String baseName = "";
                String extension = "";

                if(dotIndex != -1)
                {
                    baseName = name.substring(0, dotIndex);
                    extension = name.substring(dotIndex);              // includes '.'
                }
                else
                {
                    baseName = name;
                }

                String backupName = baseName + "_bakup" + extension;

                FileInputStream fis = new FileInputStream(source);   
                FileOutputStream fos = new FileOutputStream(backupName); 

                byte buffer[] = new byte[1024];           
                int bytesRead = 0;

                while((bytesRead = fis.read(buffer)) != -1)
                {
                    fos.write(buffer, 0, bytesRead);
                }

                fis.close();
                fos.close();
                
                System.out.println("Backup created successfully as : " + backupName);
            }
            catch(Exception e)
            {
                System.out.println("Error while creating backup");
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
        String fname = sobj.next();

        CreateBackup(fname);                // Function call

        sobj.close();
    }
}