#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   InsertFirst
// Description      :   Insert node at beginning
// Input            :   PPNODE, int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = NULL;

    if(*Head == NULL)
    {
        (*Head) = newn;
    }
    else
    {
        newn->Next = *Head;
        (*Head) = newn;
    }  
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   InsertLast
// Description      :   Insert node at end
// Input            :   PPNODE, int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE Head, int no)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = NULL;

    if(*Head == NULL)
    {
        (*Head) = newn;
    }
    else
    {
        temp = *Head;

        while(temp->Next != NULL)
        {
            temp = temp->Next;
        }
        temp->Next = newn;
    }  
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   DeleteFirst
// Description      :   Delete first node
// Input            :   PPNODE
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE Head)
{
    PNODE temp = NULL;

    if((*Head) == NULL)
    {
        return;
    }
    else if((*Head)->Next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        temp = *Head;
        *Head = (*Head)->Next;
        free(temp);
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   DeleteLast
// Description      :   Delete last node
// Input            :   PPNODE, int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE Head)
{
    PNODE temp = NULL;

    if((*Head) == NULL)
    {
        return;
    }
    else if((*Head)->Next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        temp = *Head;

        while(temp->Next->Next != NULL)
        {
            temp = temp->Next;
        }

        free(temp->Next);
        temp->Next = NULL;
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Display Linked List of all functions
// Input            :   PPNODE
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d |->",Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Count
// Description      :   Count number of nodes
// Input            :   PPNODE
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

int Count(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head = Head->Next;
    }
    return iCount;
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   InsertAtPos
// Description      :   Insert node at given position
// Input            :   PPNODE
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE Head, int no, int pos)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    int iCnt = 0;
    int iSize = 0;
    iSize = Count(*Head);

    if((pos < 1 ) || (pos > iSize + 1) )          
    {
        printf("Invalid position\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(Head,no);
    }
    else if(pos == iSize + 1)
    {
        InsertLast(Head,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->Data = no;
        newn->Next = NULL;

        temp = *Head;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp ->Next;
        }

        newn->Next = temp ->Next;  
        temp->Next = newn;         
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   DeleteAtPos
// Description      :   Delete node at given position
// Input            :   PPNODE, int
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE Head, int pos)
{
    int iSize = 0;
    int iCnt = 0;

    PNODE temp = NULL;
    PNODE target = NULL;
    
    iSize = Count(*Head);

    if((pos < 1 ) || (pos > iSize))          
    {
        printf("Invalid position\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(Head);
    }
    else if(pos == iSize)
    {
        DeleteLast(Head);
    }
    else
    {
        temp = *Head;

        for(iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp->Next;
        }

        target = temp->Next;
        temp->Next = target->Next;
        free(target);
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   DisplayPerfect
// Description      :   DIsplays all perfect numbers from linked list
// Input            :   PPNODE
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

int DisplayPerfect(PNODE Head)
{
    int iNo = 0, iSum = 0, iCnt = 0;
    int iCountPerfect = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;
        iSum = 0;

        for(iCnt = 1; iCnt <= iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iNo)
        {
            printf("%d\t", iNo);
            iCountPerfect++;
        }

        Head = Head->Next;
    }

    return iCountPerfect;
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   DisplayPrime
// Description      :   DIsplays all prime numbers from linked list
// Input            :   PPNODE
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

int DisplayPrime(PNODE Head)
{
    int iNo = 0, iCnt = 0;
    int iPrimeCount = 0;
    BOOL bPrime = TRUE;

    while(Head != NULL)
    {
        iNo = Head->Data;

        if(iNo < 2)
        {
            Head = Head->Next;
            continue;
        }

        bPrime = TRUE;

        for(iCnt = 2; iCnt <= iNo / 2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                bPrime = FALSE;
                break;
            }
        }

        if(bPrime == TRUE)
        {
            printf("%d\t", iNo);
            iPrimeCount++;      
        }

        Head = Head->Next;
    }

    printf("\n");
    return iPrimeCount;
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   AdditionEven
// Description      :   Returns addition of all even elements from linked list
// Input            :   PNODE
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

int AdditionEven(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        if((Head->Data % 2) == 0)
        {
            iSum = iSum + Head->Data;
        }
        Head = Head->Next;
    }

    return iSum;
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   SecMaximum
// Description      :   Returns second maximum element from linked list
// Input            :   PNODE
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   24/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

int SecMaximum(PNODE Head)
{
    int iMax = -1;
    int iSecMax = -1;

    if(Head == NULL || Head->Next == NULL)
    {
        printf("Not enough elements\n");
        return -1;
    }

    while(Head != NULL)
    {
        if(Head->Data > iMax)
        {
            iSecMax = iMax;
            iMax = Head->Data;
        }
        else if((Head->Data > iSecMax) && (Head->Data < iMax))
        {
            iSecMax = Head->Data;
        }

        Head = Head->Next;
    }

    return iSecMax;
}
    
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 11);
    InsertFirst(&First, 20);
    InsertFirst(&First, 32);
    InsertFirst(&First, 41);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    iRet = AdditionEven(First);
    printf("Addition of even elements is : %d\n", iRet);

    InsertLast(&First, 110);
    InsertLast(&First, 230);
    InsertLast(&First, 320);
    InsertLast(&First, 240);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    printf("Perfect numbers are : ");
    iRet = DisplayPerfect(First);
    printf("\n");

    printf("Prime numbers are : ");
    iRet = DisplayPrime(First);

    iRet = SecMaximum(First);
    printf("Second maximum element is : %d\n", iRet);

    DeleteFirst(&First);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    DeleteLast(&First);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    InsertAtPos(&First,105,3);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    DeleteAtPos(&First,3);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    return 0;
}

