/*
    Algorithum  

    START
        Accept first number
        Accept second number
        Subtract second number from first
        Return result
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
// Function Name    :   Sub
// Description      :   Returns subraction of two numbers
// Input            :   T* (First number), int (Second number)
// Output           :   T (Result)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   16/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Sub(T no1, T no2)
{
    T Ans;
    Ans = no1 - no2;
    return Ans;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = Sub(20, 10);
    cout<<iRet<<"\n";

    float fRet = Sub(20.3f, 10.5f);
    cout<<fRet<<"\n";

    return 0;
}