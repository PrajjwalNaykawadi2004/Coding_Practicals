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
        Set product = 1
        Set flag = 0
        Reapeat for each element 
            If element is odd
                product = product * element
                flag = 1
        End loop
        If flag == 0
            Return 0
        Else
            Return product
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Product
// Description      :   Returns product of all odd elements
// Input            :   int,int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   14/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iProduct = 1;
    int iFlag = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iProduct = iProduct * Arr[iCnt];
            iFlag = 1;
        } 
    }

    if(iFlag == 0)
    {
        return 0;
    }

    return iProduct;
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

    iRet = Product(p,iSize);

    printf("Product is %d",iRet);

    free(p);

    return 0;
}