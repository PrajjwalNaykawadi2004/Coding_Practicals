/*
    Algorithum  

    START
        Accept number of elements (n)
        Allocate source and destination arrays
        Accept n elements in source array
        For each element from 0 to n-1
            Copy source[i] into destination[i]
        Display destination array
        STOP
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
// Function Name    :   CopyArray
// Description      :   Copies elements from source array to destinaion array
// Input            :   T * (Source array), T* (Destination array), int (Size) 
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   10/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
void CopyArray(T *src, T *dest, int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        dest[i] = src[i];
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;

    cout << "Enter number of integer elements : ";
    cin >> iSize;

    int *arr = new int[iSize];
    int *brr = new int[iSize];

    cout << "Enter integer elements : " << endl;
    for(int i = 0; i < iSize; i++)
    {
        cin >> arr[i];
    }

    CopyArray(arr, brr, iSize);

    cout << "Copied integer array : ";
    for(int i = 0; i < iSize; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] brr;

    cout << "\nEnter number of float elements : ";
    cin >> iSize;

    float *crr = new float[iSize];
    float *drr = new float[iSize];

    cout << "Enter float elements : " << endl;
    for(int i = 0; i < iSize; i++)
    {
        cin >> crr[i];
    }

    CopyArray(crr, drr, iSize);

    cout << "Copied float array : ";
    for(int i = 0; i < iSize; i++)
    {
        cout << drr[i] << " ";
    }
    cout << endl;

    delete[] crr;
    delete[] drr;

    return 0;
}