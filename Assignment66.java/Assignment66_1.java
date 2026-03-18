// Input  :  10     2
// Output :  TRUE

/*
    Algorithum  

    START
        Accept number and position from user
        Create mask using (1 << (position - 1))
        Perform AND operation with number and mask
        If result is equal to mask
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
// Description      :   Checks whether bit at given position is ON or OFF
// Input            :   int (Number), int (Position)
// Output           :   boolean (true if ON, false if OFF)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class BitLogic
{
    public boolean CheckBit(int iNo, int iPos)
    {
        int iMask = 1 << (iPos - 1);                

        if((iNo & iMask) == iMask)
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

class Assignment66_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iPos = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter position : ");
        iPos = sobj.nextInt();

        BitLogic bobj = new BitLogic();

        bRet = bobj.CheckBit(iValue, iPos);

        if(bRet == true)
        {
            System.out.println("Bit is ON");
        }
        else
        {
            System.out.println("Bit is OFF");
        }
    }
}