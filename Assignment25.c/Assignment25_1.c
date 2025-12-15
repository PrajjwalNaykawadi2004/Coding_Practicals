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
        Accept value of n
        Accept n numbers into array 
        Set EvenSum = 0
        Set OddSum = 0
        Repeat for each element
            If element is even
                EvenSum = EvenSum + element
            Else
                OddSum = OddSum + element
        End loop(EvenSum - OddSum)
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Difference
// Description      :   Returns Difference between summation of even and odd elements.
// Input            :   int,int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   15/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    return(iEvenSum - iOddSum);
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}