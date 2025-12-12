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
        reapeat for each number 
            Check if the number contains digit "11"
            If yes 
                Return true
        End loop

        Return false
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Check
// Description      :   Checks whether any given number contains the digits "11"
// Input            :   int
// Output           :   bool
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   02/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;       
        }
    }
    return false;               
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    bool bRet = false;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

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

    bRet = Check(p, iSize);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
}