// Input  :  73
// Output :  79

/*
    Algorithum  

    START
        Accept number from user
        Create mask for first 4 bits
        Perform OR operation with number and mask
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
// Function Name    :   OnBits
// Description      :   Turns ON first four bits
// Input            :   int (Number)
// Output           :   int (Modified number)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class BitLogic
{
    public int OnBits(int iNo)
    {
        int iMask = 0x0000000F;                // First 4 bits

        iNo = iNo | iMask;                    //  Turn ON bits
        
        return iNo;
    }
}

//////////////////////////////////////////////////////////////////////////////////////
//
//      Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////

class Assignment65_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        BitLogic bobj = new BitLogic();

        int iRet = bobj.OnBits(iValue);

        System.out.println("Modified number is: " + iRet);
    }
}