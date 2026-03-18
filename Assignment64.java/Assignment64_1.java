/*
    Algorithum  

    START
        Accept number from user
        Create a mask with 15th bit ON (1 << 14)
        Perform AND operation between number and mask
        If result is equal to mask
            Display "15th bit is ON"
        Else
            Display "15th bit is OFF"
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
// Description      :   Checks whether 15th bit is ON or OFF
// Input            :   int (Number)
// Output           :   boolean (true if ON, false if OFF)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class BitLogic
{
    public boolean CheckBit(int iNo)
    {
        int iMask = 0x00004000;                // Hexadecimal mask from 15th bit

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

class Assignment64_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        BitLogic bobj = new BitLogic();

        boolean bRet = bobj.CheckBit(iValue);

        if(bRet == true)
        {
            System.out.println("15th bit is ON");
        }
        else
        {
            System.out.println("15th bit is OFF");
        }
    }
}