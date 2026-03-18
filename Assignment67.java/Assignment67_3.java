// Input  :  257
// Output :  TRUE

/*
    Algorithum  

    START
        Accept number from user
        Create mask for 9th and 12th bits
        Perform AND operation with number
        If result is not 0
            Return true
        Else
            Return false
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
//      Required Header Files
//
/////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CheckBit
// Description      :   Checks whether 9th or 12th bit is ON
// Input            :   int (Number)
// Output           :   boolean
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class BitLogic
{
    public boolean CheckBit(int iNo)
    {
        int iMask = 256 | 2048;                 // 9th and 12th bits               

        if((iNo & iMask) != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////
//
//      Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////

class Assignment67_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        BitLogic bobj = new BitLogic();

        bRet = bobj.CheckBit(iValue);

        System.out.println(bRet);
    }
}