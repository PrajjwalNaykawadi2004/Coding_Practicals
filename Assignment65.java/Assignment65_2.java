// Input  :  577
// Output :  15

/*
    Algorithum  

    START
        Accept number from user
        Create mask for 7th and 10th bits using hexadecimal
        Turn OFF these bits using AND with NOT mask
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
// Function Name    :   OffBits
// Description      :   Turns OFF 7th and 10th bits
// Input            :   int (Number)
// Output           :   int (Modified number)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class BitLogic
{
    public int OffBits(int iNo)
    {
        int iMask = 0x00000240;                // 7th and 10th bits

        iNo = iNo & (~iMask);              // Turn OFF both bits
        
        return iNo;
    }
}

//////////////////////////////////////////////////////////////////////////////////////
//
//      Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////

class Assignment65_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        BitLogic bobj = new BitLogic();

        int iRet = bobj.OffBits(iValue);

       System.out.println("Modified number is: " + iRet);
    }
}