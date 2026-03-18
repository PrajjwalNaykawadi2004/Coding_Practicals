// Input  :  11
// Output :  3

/*
    Algorithum  

    START
        Accept number and position from user
        Initialize counter to 0
        While number is greater than 0
            Check last bit using (iNo & 1)
            If it is 1
                Increment counter
            Shift number right by 1
        Return counter
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
// Function Name    :   CountOnBits
// Description      :   Counts number of ON (1) bits
// Input            :   int (Number)
// Output           :   int (Count)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class BitLogic
{
    public int CountOnBits(int iNo)
    {
        int iCount = 0;

        while(iNo != 0)
        {
            if((iNo & 1) == 1)
            {
                iCount++;
            }
            iNo = iNo >> 1;
        }          

        return iCount;
    }
}

//////////////////////////////////////////////////////////////////////////////////////
//
//      Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////

class Assignment67_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        BitLogic bobj = new BitLogic();

        int iRet = bobj.CountOnBits(iValue);

        System.out.println("Number of ON bits is: " + iRet);
    }
}