/*
    Algorithum  

    START
        Accept number of elements (n) 
        Accept n elements in array
        Set min = arr[0]
        For each element from 1 to n-1
            If arr[i] < min
                min = arr[i]
        Return min
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
// Description      :   Reverse smallest element from the array
// Input            :   T* (Array), int (Size)
// Output           :   T (Minimum element)
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
    int iRet = 0;

    cout << "Enter number of integer elements : ";
    cin >> iSize;

    int *arr = new int[iSize];

    cout << "Enter integer elements : " << endl;
    for(int i = 0; i < iSize; i++)
    {
        cin >> arr[i];
    }

    iRet = Min(arr, iSize);

    cout << "Smallest element is : " << iRet << endl;
    
    delete[] arr;

    return 0;
}