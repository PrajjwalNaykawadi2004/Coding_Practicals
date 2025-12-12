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
        Accept value of n from the user
        Accept n numbers from the user
        Initialize evencount = 0
        Repeat for each number
            If number % 2 == 0
                Increment evenCount
        Print evenCount
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   countEvenNumbers
// Description      :   This function accepts n mubers from the user,checks each 
//                      number, and returns the frequency of even numbers
// Input            :   int,int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   02/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the elements: \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}