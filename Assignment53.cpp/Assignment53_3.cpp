/*
    Algorithum  

    START
        Accept number of elements (n) 
        Accept n elements in array
        Assume first element as maximum and second maximum
        If second element > first, swap them
        For each element from index to n-1
            If element > maximum
                secondMax = maximum
                maximum = element
        Else if element > secondMax AND element != maximum
                secondMax = element
        Return secondMax
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
// Function Name    :   SecondMax
// Description      :   Returns second largest element from array
// Input            :   T* (Array), int (Size)
// Output           :   T
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   10/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
T SecondMax(T *arr, int iSize)
{
    if(iSize < 2)
    {
        return arr[0];
    }

    T max, secondMax;

    if(arr[0] > arr[1])
    {
        max = arr[0];
        secondMax = arr[1];
    }
    else
    {
        max = arr[1];
        secondMax = arr[0];
    }

    for(int i = 2; i < iSize; i++)
    {
        if(arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if(arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }

    return secondMax;
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

    int iRet = SecondMax(arr, iSize);
    cout << "Second largest integer element is : " << iRet << endl;

    delete[] arr;

    cout << "\nEnter number of float elements : ";
    cin >> iSize;

    float *brr = new float[iSize];

    cout << "Enter float elements : " << endl;
    for(int i = 0; i < iSize; i++)
    {
        cin >> brr[i];
    }
    
    float fRet = SecondMax(brr, iSize);
    cout << "Second largest float element is : " << fRet << endl;

    delete[] brr;

    return 0;
}