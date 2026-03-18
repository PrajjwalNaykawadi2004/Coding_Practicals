// Input  :  10     15              (1010       1111)
// Output :  2      4

/*
    Algorithum  

    START
        Accept two numbers from user
        Perform AND operation to get common bits
        Initialize position counter to 1
        While result is not 0
            Check last bit using (result & 1)
            If it is 1
                Display position
            Shift result right by 1
            Increment position
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
// Function Name    :   CommonBits
// Description      :   Displays positions of common ON bits
// Input            :   int, int
// Output           :   void (prints positions)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   18/03/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

class BitLogic
{
    public void CommonBits(int iNo1, int iNo2)
    {
        int iResult = iNo1 & iNo2;
        int iPos = 1;               

        while(iResult != 0)
        {
            if((iResult & 1) == 1)
            {
                System.out.print(iPos + " ");
            }

            iResult = iResult >> 1;
            iPos++;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////
//
//      Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////

class Assignment67_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
 
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter first number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = sobj.nextInt();

        BitLogic bobj = new BitLogic();

        System.out.println("Common ON bit positions are:");
        bobj.CommonBits(iValue1, iValue2);
    }
}