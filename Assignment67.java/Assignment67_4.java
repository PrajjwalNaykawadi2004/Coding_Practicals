// Input  :  10     3       7
// Output :  TRUE

/*
    Algorithum  

    START
        Accept number and two positions from user
        Create mask for both positions
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
// Description      :   Checks whether bit at given positions is ON
// Input            :   int (Number), int (Pos1), int (Pos2)
// Output           :   boolean
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class BitLogic
{
    public boolean CheckBit(int iNo, int iPos1, int iPos2)
    {
        int iMask1 = 1 << (iPos1 - 1);
        int iMask2 = 1 << (iPos2 - 1);

        int iMask = iMask1 | iMask2;             

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

class Assignment67_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iPos1 = 0, iPos2 = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter first position : ");
        iPos1 = sobj.nextInt();

        System.out.println("Enter second position : ");
        iPos2 = sobj.nextInt();

        BitLogic bobj = new BitLogic();

        bRet = bobj.CheckBit(iValue, iPos1, iPos2);

        System.out.println(bRet);
    }
}