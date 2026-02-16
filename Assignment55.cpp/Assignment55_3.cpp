/*
    Algorithum  

    START
        Accept first number
        Accept second number
        If second number is 0
            Display error
        Else
            Divide first number by second
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
// Function Name    :   Div
// Description      :   Returns division of two numbers
// Input            :   T* (First number), int (Second number)
// Output           :   T (Result)
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   16/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Div(T no1, T no2)
{
    if(no2 == 0)
    {
        cout<< "Error : Division by zero is not allowed\n";
        return 0;
    }

    return no1 / no2;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = Div(20, 5);
    cout<<iRet<<"\n";

    float fRet = Div(20.5f, 2.0f);
    cout<<fRet<<"\n";

    return 0;
}