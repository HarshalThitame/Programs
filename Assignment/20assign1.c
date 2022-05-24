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
 void Perfect(PNODE head)
 {
    int iCnt = 0,iSum = 0;
    while(head != NULL)
    {
        for(iCnt = 1; iCnt < (head->data); iCnt++)
        {
            if(((head->data) % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == (head->data))
        {
            printf("%d\t",head->data);
        }
     iSum = 0;
     head = head->next;
    }
 }
int main()
{
    int iRet = 0,ivalue = 0;
    PNODE first= NULL;

    InsertFirst(&first,6);
    InsertFirst(&first,28);
    InsertFirst(&first,17);
    InsertFirst(&first,6);
    InsertFirst(&first,20);

    Perfect(first);
    //printf("Perfect nodes : %d\n",iRet);
    return 0;
}