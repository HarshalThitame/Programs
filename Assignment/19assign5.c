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
 int Minimum(PNODE head)
 {
    int iCnt = 0,iMin = head->data;
    while(head != NULL)
    {
      if(iMin > (head -> data))
      {
        iMin = head -> data;
      }
      head = head -> next;
    }
    return iMin;
 }
int main()
{
    int iRet = 0,ivalue = 0;
    PNODE first= NULL;

    InsertFirst(&first,110);
    InsertFirst(&first,230);
    InsertFirst(&first,20);
    InsertFirst(&first,320);
    InsertFirst(&first,240);

    iRet = Minimum(first);
    printf("Addition of nodes : %d\n",iRet);
    return 0;
}