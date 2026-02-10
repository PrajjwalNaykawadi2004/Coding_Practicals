/*
    Algorithum  

    START
        Accept two numbers
        Multiply first number with second number
        Return the result
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
// Function Name    :   Multiply
// Description      :   Multiplies two values (Generic Function)
// Input            :   T,  T
// Output           :   T
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   10/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;
    return ans;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = Multiply(10,20);
    cout << "Multiplication of integers : " << iRet << endl;

    float fRet = Multiply(10.0f,20.0f);
    cout << "Multiplication of floats : " << fRet << endl;

    return 0;
}