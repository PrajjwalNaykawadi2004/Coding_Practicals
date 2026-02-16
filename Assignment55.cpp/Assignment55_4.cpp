/*
    Algorithum  

    START
        Accept two values
        Store first value in temp
        Assign second value to first
        Assign temp to second
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
// Function Name    :   Swap
// Description      :   Swaps two values
// Input            :   T& (First value), T& (Second value)
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   16/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
void Swap(T &no1, T &no2)
{
    T temp;
    temp = no1;
    no1 = no2;
    no2 = temp;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int a = 10, b = 20;
    cout << "Before : "<< a <<" " << b << "\n"; 
    Swap(a, b);
    cout << "After : "<< a << " " << b << "\n";

    float x= 3.5f, y = 7.8f;
    cout << "Before : " << x << " " << y << "\n";
    Swap(x,y);
    cout << "After : " << x << " " << y << "\n";

    return 0;
}