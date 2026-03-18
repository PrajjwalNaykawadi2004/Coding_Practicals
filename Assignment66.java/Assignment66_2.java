// Input  :  10     2
// Output :  8

/*
    Algorithum  

    START
        Accept number and position from user
        Create mask using (1 << (position - 1))
        Create inverse mask using NOT (~)
        Perform AND operation with number and inverse mask
        Return modified number
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
// Function Name    :   OffBit
// Description      :   Turns OFF bit at given position
// Input            :   int (Number), int (Position)
// Output           :   int (Modified number)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class BitLogic
{
    public int OffBit(int iNo, int iPos)
    {
        int iMask = 1 << (iPos - 1);                

        iMask = ~iMask;

        iNo = iNo & iMask;
        
        return iNo;
    }
}

//////////////////////////////////////////////////////////////////////////////////////
//
//      Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////

class Assignment66_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iPos = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter position : ");
        iPos = sobj.nextInt();

        BitLogic bobj = new BitLogic();

        int iRet = bobj.OffBit(iValue, iPos);

        System.out.println("Modified number is: " + iRet);
    }
}