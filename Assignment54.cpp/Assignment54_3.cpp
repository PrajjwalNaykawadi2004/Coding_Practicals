/*
    Algorithum  

    START
        Accept number of elements (n) 
        Accept n elements in array
        Initialize sum = 0
        For each element from 0 to n-1
            If element % 2 == 0
                Add element to sum
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
// Function Name    :   SumOdd
// Description      :   Returns sum of all odd elements from array
// Input            :   T* (Array), int (Size)
// Output           :   T (sum of even elements)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   10/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
T SumOdd(T *arr, int iSize)
{
    T sum = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] % 2 != 0)
        {
            sum = sum + arr[i];
        }
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
    int iRet = 0;

    cout << "Enter number of integer elements : ";
    cin >> iSize;

    int *arr = new int[iSize];

    cout << "Enter integer elements : " << endl;
    for(int i = 0; i < iSize; i++)
    {
        cin >> arr[i];
    }

    iRet = SumOdd(arr, iSize);

    cout << "Sum of odd element is : " << iRet << endl;
    
    delete[] arr;

    return 0;
}