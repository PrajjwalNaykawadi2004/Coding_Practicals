// Input  :  137
// Output :  201

/*
    Algorithum  

    START
        Accept number from user
        Create mask for 7th bit
        Toggle the 7th bit using XOR operation
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
// Function Name    :   ToggleBit
// Description      :   Toggles 7th bit
// Input            :   int (Number)
// Output           :   int (Modified number)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class BitLogic
{
    public int ToggleBit(int iNo)
    {
        int iMask = 0x00000040;                // 7th bit

        iNo = iNo ^ iMask;                    //  Toggle 7th bit
        
        return iNo;
    }
}

//////////////////////////////////////////////////////////////////////////////////////
//
//      Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////

class Assignment65_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        BitLogic bobj = new BitLogic();

        int iRet = bobj.ToggleBit(iValue);

       System.out.println("Modified number is: " + iRet);
    }
}