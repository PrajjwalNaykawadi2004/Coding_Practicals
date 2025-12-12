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
        Accept NO from the user
        Initialize count = 0
        Reapeat for each number
            If number == NO
                Increment count
        End loop

        Print count
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Frequency
// Description      :   Returns the frequency of No from the given n numbers
// Input            :   int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   02/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount++;
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter the number : ");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p,iSize,iValue);

    printf("%d",iRet);

    free(p);

    return 0;
}