#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn -> next = *head;
        *head = newn;
    }
}
 int AdditionEven(PNODE head)
 {
    int iCnt = 0,iSum = 0;
    while(head != NULL)
    {
        if(head->data % 2 == 0)
        {
            iSum = iSum + head->data;
        }
     head = head->next;
    }
    return iSum;
 }
int main()
{
    int iRet = 0,ivalue = 0;
    PNODE first= NULL;

    InsertFirst(&first,11);
    InsertFirst(&first,28);
    InsertFirst(&first,6);
    InsertFirst(&first,17);

    iRet = AdditionEven(first);
    printf("%d\n",iRet);
    return 0;
}