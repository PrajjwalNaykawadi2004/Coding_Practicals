/*
Step 1 : Understand the problem statement
Step 2 : Write the Algorithum
Step 3 : Decide the programing language
Step 4 : Write the program
Step 5 : Test the program
*/

/*
    Algorithum  

    START
        Accept three numbers as input x,y,z
        If x is greater than or equal both y and z
            Then x is the largest  
        Else if y is greater than or equal to both x and z
            Then y is the largest
        Else
            z is the largest          
    STOP    
*/

/////////////////////////////////////////////////////////////////////////////////////
//
//      Required Header Files
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   FindLargest
// Description      :   Returns the largest among three given numbers
// Input            :   int x,int y, int z
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   28/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

int FindLargest(int x, int y, int z)
{
    if(x >= y && x >= z)
    {
        return x;
    }
    else if(y >= x && y >= z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int a, b, c, result;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    result = FindLargest(a, b, c);

    printf("Largest number is %d\n",result);

    return 0;
}