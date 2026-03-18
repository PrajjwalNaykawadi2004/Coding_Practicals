// Input : 897      9       13
// Toggle all bits from position 9 to 13 of input number ie 879

/*
    Algorithum  

    START
        Accept number and range (start, end)
        Create mask for given range
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
// Function Name    :   ToggleBitRange
// Description      :   Toggles bits in given range
// Input            :   int (Number), int (Start), int (End)
// Output           :   int (Modified number)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class BitLogic
{
    public int ToggleBitRange(int iNo, int iStart, int iEnd)
    {
        int iMask = ((1 << (iEnd - iStart + 1)) - 1) << (iStart - 1);          

        return iNo ^ iMask;
    }
}

//////////////////////////////////////////////////////////////////////////////////////
//
//      Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////

class Assignment67_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iStart = 0, iEnd = 0;
        
        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter start position : ");
        iStart = sobj.nextInt();

        System.out.println("Enter end position : ");
        iEnd = sobj.nextInt();

        BitLogic bobj = new BitLogic();

        int iRet = bobj.ToggleBitRange(iValue, iStart, iEnd);

        System.out.println("Modified number is: " + iRet);
    }
}