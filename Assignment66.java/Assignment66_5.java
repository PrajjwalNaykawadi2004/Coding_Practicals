/*
    Algorithum  

    START
        Accept number from user
        Create mask for first and last nibble
        Toggle bits using XOR operation
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
// Function Name    :   ToggleNibble
// Description      :   Toggles first and last nibble
// Input            :   int (Number)
// Output           :   int (Modified number)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class BitLogic
{
    public int ToggleNibble(int iNo)
    {
        int iMask = 0xF000000F;              

        iNo = iNo ^ iMask;
        
        return iNo;
    }
}

//////////////////////////////////////////////////////////////////////////////////////
//
//      Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////

class Assignment66_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        
        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        BitLogic bobj = new BitLogic();

        int iRet = bobj.ToggleNibble(iValue);

        System.out.println("Modified number is: " + iRet);
    }
}