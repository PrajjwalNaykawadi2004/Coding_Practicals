//  Input :  10  20  30  10  30  40  10  40  10

//  Value to check frequency : 10

//  Output : 4

/*
    Algorithum  

    START
        Initialize counter iCount = 0
            For i from 0 to iSize-1
                If arr[i] is equal to iNo
                Increment iCount
        End For
        Return iCount
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
//      Required Header Files
//
/////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Frequency
// Description      :   Counts Frequency og given element from array (Generic)
// Input            :   T * (array), int (iSize), T (value to search)
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   09/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
int Frequency(T * arr, int iSize, T iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = 0;

    iRet = Frequency(arr, 9, 10);

    cout << iRet << endl;

    return 0;
}