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
// Date             :   04/02/2026
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
// Date             :   04/02/2026
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
// Date             :   04/02/2026
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
// Date             :   04/02/2026
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
// Date             :   04/02/2026
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
// Date             :   04/02/2026
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
// Date             :   04/02/2026
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
// Date             :   04/02/2026
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
// Function Name    :   Difference
// Description      :   Calculate difference between maximum and minimum element
// Input            :   PNODE
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   04/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

int Difference(PNODE Head)
{
    int iMax = 0;
    int iMin = 0;

    if(Head == NULL)
    {
        return 0;
    }

    iMax = Head->Data;
    iMin = Head->Data;

    while(Head != NULL)
    {
        if(Head->Data > iMax)
        {
            iMax = Head->Data;
        }

        if(Head->Data < iMin)
        {
            iMin = Head->Data;
        }

        Head = Head->Next;
    }

    return(iMax - iMin);
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    BOOL bRet = FALSE;

    InsertFirst(&First, 101);
    InsertFirst(&First, 40);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    InsertLast(&First, 101);
    InsertLast(&First, 111);
    InsertLast(&First, 12);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    DeleteFirst(&First);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    DeleteLast(&First);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    InsertAtPos(&First,10,3);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    DeleteAtPos(&First,3);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    printf("Before replacing even elements:\n");
    Display(First);

    iRet =  Difference(First);
    printf("Difference between maximium and minimum is : %d\n", iRet);

    return 0;
}
