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
        Repeat for each element
            If element % 2 == 0 AND element % 5 == 0
                Display element
        End loop
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Display all elements which are even and divisible by 5
// Input            :   int,int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   15/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigit = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2 == 0) && (Arr[iCnt] % 5 == 0))
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

    Display(p,iSize);

    free(p);

    return 0;
}