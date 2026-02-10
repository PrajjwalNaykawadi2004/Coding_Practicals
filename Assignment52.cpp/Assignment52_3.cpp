/*
    Algorithum  

    START
        Accept number of elements (n)
        Accept n values from user
        Initialize sum = 0
        For each element from 0 to n-1
            Add element into sum
        Return sum
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
// Function Name    :   AddN
// Description      :   Returns addition of N elements (Generic Function)
// Input            :   T * (Array), int (Size)
// Output           :   T
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   10/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
T AddN(T *arr, int iSize)
{
    T sum = 0;

    int i = 0;

    // Filter
    for(i = 0; i < iSize; i++)
    {
        sum = sum + arr[i];
    }

    return sum; 
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;

    // Integer section
    cout << "Enter number of integer elements : ";
    cin >> iSize;

    int *arr = new int[iSize];

    cout << "Enter integer elements : " << endl;
    for(int i = 0; i < iSize; i++)
    {
        cin >> arr[i];
    }

    int iSum = AddN(arr, iSize);
    cout << "Addition of integer elements : " << iSum << endl;

    delete[] arr;

    // Float section
    cout << "\nEnter number of float elements : ";
    cin >> iSize;

    float *brr = new float[iSize];

    cout << "Enter float elements : " << endl;
    for(int i = 0; i < iSize; i++)
    {
        cin >> brr[i];
    }

    float fSum = AddN(brr, iSize);
    cout << "Addition of float elements : " << fSum << endl;

    delete[] brr;

    return 0;
}