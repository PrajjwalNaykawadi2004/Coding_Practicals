// Input  :  137
// Output :  713

/*
    Algorithum  

    START
        Accept number from user
        Create mask for 7th and 10th bits
        Toggle both bits using XOR operation
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
// Function Name    :   ToggleBits
// Description      :   Toggles 7th and 10th bits
// Input            :   int (Number)
// Output           :   int (Modified number)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class BitLogic
{
    public int ToggleBits(int iNo)
    {
        int iMask = 0x00000240;                // 7th and 10th bits

        iNo = iNo ^ iMask;                    //  Toggle both bits
        
        return iNo;
    }
}

//////////////////////////////////////////////////////////////////////////////////////
//
//      Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////

class Assignment65_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        BitLogic bobj = new BitLogic();

        int iRet = bobj.ToggleBits(iValue);

       System.out.println("Modified number is: " + iRet);
    }
}