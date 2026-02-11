/*
    Algorithum  

    START
        Accept number of elements (n) 
        Accept n elements in array
        For each element from 0 to n-2
            If arr[i] > arr[i+1]
                Return false
        If no such case found
            Return true
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
// Function Name    :   CheckSorted
// Description      :   Checks whether array is sorted in ascending order
// Input            :   T* (Array), int (Size)
// Output           :   bool
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   10/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
bool CheckSorted(T *arr, int iSize)
{
    for(int i = 0; i < iSize - 1; i++)
    {
       if(arr[i] > arr[i + 1])
       {
            return false;
       }
    }
    return true;
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

    cout << "Enter integer elements : " << endl;
    for(int i = 0; i < iSize; i++)
    {
        cin >> arr[i];
    }

    if(CheckSorted(arr, iSize))
    {
        cout << "Integer array is sorted " << endl;
    }
    else
    {
        cout << "Integer array is not sorted " << endl;
    }

    delete[] arr;

    cout << "\nEnter number of float elements : ";
    cin >> iSize;

    float *brr = new float[iSize];

    cout << "Enter float elements : " << endl;
    for(int i = 0; i < iSize; i++)
    {
        cin >> brr[i];
    }
    
    if(CheckSorted(brr, iSize))
    {
        cout << "Float array is sorted " << endl;
    }
    else
    {
        cout << "Float array is not sorted " << endl;
    }

    return 0;
}