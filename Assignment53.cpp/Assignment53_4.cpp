/*
    Algorithum  

    START
        Accept number of elements (n) 
        Accept n elements in array
        Assume first two element as minimum and second minimum
        If first > second, swap them
        For each element from index 2 to n-1
            If element < minimum
                secondMin = minimum
                minimum = element
        Else if element > secondMin AND element != minimum
                secondMin = element
        Return secondMin
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
// Function Name    :   SecondMin
// Description      :   Returns second smallest element from array
// Input            :   T* (Array), int (Size)
// Output           :   T
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   10/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
T SecondMin(T *arr, int iSize)
{
    if(iSize < 2)
    {
        return arr[0];
    }

    T min, secondMin;

    if(arr[0] < arr[1])
    {
        min = arr[0];
        secondMin = arr[1];
    }
    else
    {
        min = arr[1];
        secondMin = arr[0];
    }

    for(int i = 2; i < iSize; i++)
    {
        if(arr[i] < min)
        {
            secondMin = min;
            min = arr[i];
        }
        else if(arr[i] < secondMin && arr[i] != min)
        {
            secondMin = arr[i];
        }
    }

    return secondMin;
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

    int iRet = SecondMin(arr, iSize);
    cout << "Second smallest integer element is : " << iRet << endl;

    delete[] arr;

    cout << "\nEnter number of float elements : ";
    cin >> iSize;

    float *brr = new float[iSize];

    cout << "Enter float elements : " << endl;
    for(int i = 0; i < iSize; i++)
    {
        cin >> brr[i];
    }
    
    float fRet = SecondMin(brr, iSize);
    cout << "Second smallest float element is : " << fRet << endl;

    delete[] brr;

    return 0;
}