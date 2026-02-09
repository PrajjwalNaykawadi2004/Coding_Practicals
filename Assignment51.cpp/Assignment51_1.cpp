//  Input :  M   7

//  Output : M   M   M   M   M   M   M

// Input :   11  3

// Output :  11  11  11

// Input :   3.7  6

// Output :  3.7 3.7 3.7 3.7 3.7 3.7

/*
    Algorithum  

    START
       Define a generic function Display(value, size)

       Inside Display function:
            Initialize counter i = 1
            Repeat until i <= size
                Print the value
                Increment i
        End loop
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
// Function Name    :   Display
// Description      :   Prints given value specified number of times
// Input            :   T (value), int (iSize)
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   09/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
void Display(T value, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << value << "\t";
    }
    cout << endl;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7, 6);

    return 0;
}