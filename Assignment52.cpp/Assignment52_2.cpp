/*
    Algorithum  

    START
        Accept three numbers
        Compare first number with second and third
        If first is greater, return first
        Else if second is greater than third, return second
        Else return third
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
// Description      :   Finds largest number among three values (Generic Function)
// Input            :   T, T, T
// Output           :   T
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   10/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Max(T no1, T no2, T no3)
{
    T ans;

    if((no1 >= no2) && (no1 >= no3))
    {
        ans = no1;
    }
    else if((no2 >= no1) && (no2 >= no3))
    {
        ans = no2;
    }
    else
    {
        ans = no3;
    }

    return ans;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = Max(10, 20, 30);
    cout << "Largest among integers : " << iRet << endl;

    float fRet = Max(10.5f, 20.7f, 15.2f);
    cout << "Largest among floats : " << fRet << endl;
    
    return 0;
}