/*
    Algorithum  

    START
        Accept number of elements (n) 
        Accept n elements in array
        Set start = 0
        Set end = n-1
        While start < end
            Swap arr[start] and arr[end]
            Increment start
            Decrement end
        Display reversed array
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
// Function Name    :   Reverse
// Description      :   Reverse the elements of the array
// Input            :   T* (Array), int (Size)
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   10/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
void Reverse(T *arr, int iSize)
{
    int start = 0;
    int end = iSize - 1;
    T temp;

    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
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

    Reverse(arr, iSize);

    cout << "Reversed array is : ";
    for(int i = 0; i < iSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    delete[] arr;

    return 0;
}