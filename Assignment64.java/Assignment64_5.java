/*
    Algorithum  

    START
        Accept number from user
        Create mask for 1st and 32nd bit using hexadecimal
        Perform AND operation between number and mask
        If result is equal to mask
            Display"1st and 32nd bits are ON"
        Else
            Display "1st and 32nd bits are OFF"
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
// Function Name    :   CheckBits
// Description      :   Checks whether 1st and 32nd bits are ON or OFF
// Input            :   int (Number)
// Output           :   boolean (true if both ON, false otherwise)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class BitLogic
{
    public boolean CheckBits(int iNo)
    {
        int iMask = 0x80000001;                // 1st bit + 32nd bit

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

class Assignment64_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        BitLogic bobj = new BitLogic();

        boolean bRet = bobj.CheckBits(iValue);

        if(bRet == true)
        {
            System.out.println("1st and 32nd bits are ON");
        }
        else
        {
            System.out.println("1st and 32nd bits are OFF");
        }
    }
}