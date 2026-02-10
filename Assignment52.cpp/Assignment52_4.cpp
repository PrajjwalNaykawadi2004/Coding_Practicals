/*
    Algorithum  

    START
        Accept number of elements (n)
        Accept n values from user
        Assume first element as maximum
        For each element from 1 to n-1
            If current element > maximum
                Update maximum
        Return maximum
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
// Function Name    :   Max
// Description      :   Returns largest value from N elements (Generic Function)
// Input            :   T * (Array), int (Size)
// Output           :   T
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   10/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Max(T *arr, int iSize)
{
    T max = arr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
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

    int iMax = Max(arr, iSize);
    cout << "Largest integer elements : " << iMax << endl;

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

    float fMax = Max(brr, iSize);
    cout << "Largest float elements : " << fMax << endl;

    delete[] brr;

    return 0;
}