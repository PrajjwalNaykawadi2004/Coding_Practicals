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
// Date             :   02/02/2026
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
// Date             :   02/02/2026
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
// Date             :   02/02/2026
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
// Date             :   02/02/2026
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
// Date             :   02/02/2026
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
// Date             :   02/02/2026
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
// Date             :   02/02/2026
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
// Date             :   02/02/2026
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
// Function Name    :   DisplayReverse
// Description      :   Display linked list elements in reverse order
// Input            :   PNODE
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   02/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

void DisplayReverse(PNODE Head)
{
    if(Head == NULL)
    {
        return;
    }

    DisplayReverse(Head->Next);
    printf("| %d |->", Head->Data);
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CountDigits
// Description      :   Count digits of each node element
// Input            :   PNODE
// Output           :   void
// Author           :   Prajjwal Dilip Naykawadi
// Date             :   02/02/2026
// 
//////////////////////////////////////////////////////////////////////////////////////

void CountDigits(PNODE Head)
{
    int iDigit = 0;
    int iNo = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;
        iDigit = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        if(iNo == 0)
        {
            iDigit = 1;
        }

        else
        {
            while(iNo != 0)
            {
                iDigit++;
                iNo = iNo / 10;
            }
        }
        printf("%d -> %d digits\n", Head->Data, iDigit);
        Head = Head->Next;
    }   
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    BOOL bRet = FALSE;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

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

    printf("Linked list in reverse order : ");
    DisplayReverse(First);
    printf("NULL\n");

    printf("Count of digits of each node:\n");
    CountDigits(First);

    return 0;
}
