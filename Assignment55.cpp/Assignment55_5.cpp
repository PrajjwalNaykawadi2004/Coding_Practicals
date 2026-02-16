/*
    Algorithum  

    START
        Accept four values
        Assume first value as maximum
        If second value > max, update max
        If third value > max, update max
        If fourth value > max, update max
        Return max
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
// Function Name    :   Max
// Description      :   Returns maximum of four values
// Input            :   T (four values)
// Output           :   T (Maximum value)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   16/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Max(T a, T b, T c, T d)
{
    T max = a;

    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }
    if(d > max)
    {
        max = d;
    }

    return max;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = Max(10, 40, 30, 20);
    cout <<"Maximum integer value is : " << iRet << "\n"; 

    float fRet = Max(10.5f, 40.2f, 30.8f, 20.1f);
    cout << "Maximum float value is : " << fRet << "\n";

    return 0;
}