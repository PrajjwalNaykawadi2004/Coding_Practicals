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
// Date             :   23/01/2026
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
// Date             :   23/01/2026
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
// Date             :   23/01/2026
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
// Date             :   23/01/2026
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
// Date             :   23/01/2026
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
// Date             :   23/01/2026
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
// Date             :   23/01/2026
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
// Date             :   23/01/2026
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
// Function Name    :   SearchFirstOcc
// Description      :   Searches first Occurrence of given element in linked list
// Input            :   PNODE, int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   23/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

int SearchFirstOcc(PNODE Head, int no)
{
    int iPos = 1;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            return iPos;
        }
        Head = Head->Next;
        iPos++;
    }
    return -1;
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   SearchLastOcc
// Description      :   Searches last Occurrence of given element in linked list
// Input            :   PNODE, int
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   23/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

int SearchLastOcc(PNODE Head, int no)
{
    int iPos = 1;
    int iLastPos = -1;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            iLastPos = iPos;
        }
        Head = Head->Next;
        iPos++;
    }
    return iLastPos;
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Addition
// Description      :   Returns sum of all nodes in the linked list
// Input            :   PNODE
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   23/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

int Addition(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        iSum += Head->Data;
        Head = Head->Next;
    }

    return iSum;
}


/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Maximum
// Description      :   Returns maximum element in the linked list
// Input            :   PNODE
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   23/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

int Maximum(PNODE Head)
{
    if(Head == NULL)
    {
        printf("Linked list is empty.\n");
        return -1;
    }

    int iMax = Head->Data;

    while(Head != NULL)
    {
        if(Head->Data > iMax)
        {
            iMax = Head->Data;
        }
        Head = Head->Next;
    }
    return iMax;
}


/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Minimum
// Description      :   Returns minimum element in the linked list
// Input            :   PNODE
// Output           :   int
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   23/01/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

int Minimum(PNODE Head)
{
    if(Head == NULL)
    {
        printf("Linked list is empty.\n");
        return -1;
    }

    int iMin = Head->Data;

    while(Head != NULL)
    {
        if(Head->Data < iMin)
        {
            iMin = Head->Data;
        }
        Head = Head->Next;
    }

    return iMin;
}
int main()
{
    PNODE First = NULL;
    int iTotal = 0;
    int iMax = 0;
    int iMin = 0;
    int iRet = 0;

    InsertFirst(&First, 110);
    InsertFirst(&First, 230);
    InsertFirst(&First, 20);
    InsertFirst(&First, 240);

    Display(First);

    iRet = SearchFirstOcc(First, 30);
    printf("First occurrence at position : %d\n", iRet);

    iRet = SearchLastOcc(First, 30);
    printf("Last occurrence at position : %d\n", iRet);

    iTotal = Addition(First);
    printf("Sum of all elements is : %d\n", iTotal);

    iMax = Maximum(First);
    printf("Maximum element in the linked list is : %d\n", iMax);
    
    iMin = Minimum(First);
    printf("Minimum element in the linked list is : %d\n", iMin);

    InsertLast(&First, 101);
    InsertLast(&First, 111);
    InsertLast(&First, 121);

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

