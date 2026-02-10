/*
    Algorithum  

    START
        Accept number of elements (n)
        Accept n values from user
        Assume first element as minimum
        For each element from 1 to n-1
            If current element < minimum
                Update minimum
        Return minimum
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
// Function Name    :   Min
// Description      :   Returns smallest value from N elements (Generic Function)
// Input            :   T * (Array), int (Size)
// Output           :   T
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   10/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Min(T *arr, int iSize)
{
    T min = arr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
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

    int iMin = Min(arr, iSize);
    cout << "Smallest integer elements : " << iMin << endl;

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

    float fMin = Min(brr, iSize);
    cout << "Smallest float elements : " << fMin << endl;

    delete[] brr;

    return 0;
}