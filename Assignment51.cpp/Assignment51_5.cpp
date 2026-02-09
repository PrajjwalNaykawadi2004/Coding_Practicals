//  Input :  10  20  30  10  30  40  10  40  10

// Output :  10  40  10  40  30  10  30  20  10

/*
    Algorithum  

    START
        Initialize start = 0 and end = iSize - 1
        Whie start < end
            Swap arr[start] and arr[end]
            Increment start
            Decrement end
        End While
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
// Description      :   Reverses the contents of array (Generic)
// Input            :   T * (array), int (iSize)
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   09/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
void Reverse(T * arr, int iSize)
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
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int i = 0;

    cout<< "Original array : ";
    for(i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    Reverse(arr, 9);

    cout<< "\nReversed array : ";
    for(i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}