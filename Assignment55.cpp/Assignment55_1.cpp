/*
    Algorithum  

    START
        Accept first number
        Accept second number
        Add both numbers
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
// Function Name    :   Add
// Description      :   Returns addition of two numbers
// Input            :   T* (First number), int (Second number)
// Output           :   T (Result)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   16/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Add(T no1, T no2)
{
    T Ans;
    Ans = no1 + no2;
    return Ans;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = Add(10, 20);
    cout<<iRet<<"\n";

    float fRet = Add(10.5f, 20.3f);
    cout<<fRet<<"\n";

    return 0;
}