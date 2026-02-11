/*
    Algorithum  

    START
        Accept number of elements (n) 
        Accept n elements in array
        Accept old value and new value
        For each element from 0 to n-1
            If element == old value
                Replace it with new value
        Display updated array
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
// Function Name    :   Replace
// Description      :   Replaces all occurrences of old value with new value
// Input            :   T* (Array), int (Size), T (Old value), T (New value)
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   10/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
void Replace(T *arr, int iSize, T oldVal, T newVal)
{
    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == oldVal)
        {
            arr[i] = newVal;
        }
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

    cout << "Enter integer elements : " << endl;
    for(int i = 0; i < iSize; i++)
    {
        cin >> arr[i];
    }

    int oldVal, newVal; 
    cout << "Enter value to replace : ";
    cin >> oldVal;
    cout << "Enter new value : ";
    cin >> newVal;

    Replace(arr, iSize, oldVal, newVal);

    cout << "Updated integer array : ";
    for(int i = 0; i < iSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    cout << "\nEnter number of float elements : ";
    cin >> iSize;

    float *brr = new float[iSize];

    cout << "Enter float elements : " << endl;
    for(int i = 0; i < iSize; i++)
    {
        cin >> brr[i];
    }
    
    float fOld, fNew;
    cout << "Enter value to replace : ";
    cin >> fOld;
    cout << "Enter new value : ";
    cin >> fNew;

    Replace(brr, iSize, fOld, fNew);

    cout << "Updated float array : ";
    for(int i = 0; i < iSize; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    delete[] brr;

    return 0;
}