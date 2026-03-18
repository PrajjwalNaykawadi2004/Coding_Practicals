// Input  :  79
// Output :  15

/*
    Algorithum  

    START
        Accept number from user
        Create mask for 7th bit using hexadecimal
        Check if 7th bit is ON
        If ON
            Turn OFF the 7th bit using AND with NOT mask
            Return modified number
        Else
            Return original number
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
// Description      :   Turns OFF 7th bit if it is ON
// Input            :   int (Number)
// Output           :   int (Modified number)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class BitLogic
{
    public int OffBit(int iNo)
    {
        int iMask = 0x00000040;                // 7th bit

        if((iNo & iMask) == iMask)
        {
            iNo = iNo & (~iMask);              // Turn OFF 7th bit
        }
        
        return iNo;
    }
}

//////////////////////////////////////////////////////////////////////////////////////
//
//      Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////

class Assignment65_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        BitLogic bobj = new BitLogic();

        int iRet = bobj.OffBit(iValue);

       System.out.println("Modified number is: " + iRet);
    }
}