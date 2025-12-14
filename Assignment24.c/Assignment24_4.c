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
        Accept n numbers into array
        Set minimum = first element of array
        Set maximum = first element of array
        Repeat for remaining elements
            If element < minimum
                minimum = element
            If element > maximum
                maximum = element
        End loop
            Return difference
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Difference
// Description      :   Returns difference between largest and smallest elements
// Input            :   int,int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   14/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigit = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= 100 && Arr[iCnt] <= 999) || 
           (Arr[iCnt] <= -100 && Arr[iCnt] >= -999))
        {
            printf("%d\t",Arr[iCnt]);
        } 
        
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
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

    Digits(p,iSize);

    free(p);

    return 0;
}