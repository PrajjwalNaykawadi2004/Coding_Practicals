/*
    Algorithum  

    START
        Accept number of elements (n) 
        Accept n elements in array
        Accept value to search
        For each element from 0 to n-1
            If element == value
                Return true
        If not found
            Return false
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
// Function Name    :   Search
// Description      :   Searches a value in the array
// Input            :   T* (Array), int (Size), T (Value to search)
// Output           :   bool (true if found, false otherwise)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   10/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
bool Search(T *arr, int iSize, T value)
{
    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == value)
        {
            return true;
        }
    }
    return false;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    bool bRet = false;

    cout << "Enter number of integer elements : ";
    cin >> iSize;

    int *arr = new int[iSize];

    cout << "Enter integer elements : " << endl;
    for(int i = 0; i < iSize; i++)
    {
        cin >> arr[i];
    }

    int iValue;
    cout << "Enter value to search : ";
    cin >> iValue;

    bRet = Search(arr, iSize, iValue);

    if(bRet == true)
    {
        cout << "Element found in integer array\n";
    }
    else
    {
        cout << "Element not found in integer array\n";
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

    float fValue;
    cout << "Enter value to search : ";
    cin >> fValue;

    bRet = Search(brr, iSize, fValue);

    if(bRet == true)
    {
        cout << "Element found in float array\n";
    }
    else
    {
        cout << "Element not found in float array\n";
    }

    delete[] brr;

    return 0;
}