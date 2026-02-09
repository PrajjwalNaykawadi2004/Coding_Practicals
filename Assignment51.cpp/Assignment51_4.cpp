//  Input :  10  20  30  10  30  40  10  40  10

//  Value to search : 40

//  Output : 6

/*
    Algorithum  

    START
        For i from 0 to iSize-1
            If arr[i] == iNo
                Return i + 1
        End For
            If element not found, return -1
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
// Function Name    :   SearchLast
// Description      :   Returns position of Last occurrenece of given element
// Input            :   T * (array), int (iSize), T (value to search)
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   09/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SearchLast(T * arr, int iSize, T iNo)
{
    int iCnt = 0;
    int iPos = -1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iPos = iCnt + 1;
        }
    }

    return iPos;
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

    iRet = SearchLast(arr, 9, 40);

    cout << iRet << endl;

    return 0;
}