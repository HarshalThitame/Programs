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
 int SearchFirstOcc(PNODE head,int no)
 {
    int iCnt = 0;
    while(head != NULL)
    {
        iCnt++;
        if(head -> data == no)
        {
        return iCnt;
        }
        head = head -> next;
    }
 }
int main()
{
    int iRet = 0,ivalue = 0;
    PNODE first= NULL;

    InsertFirst(&first,70);
    InsertFirst(&first,60);
    InsertFirst(&first,50);
    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    iRet = SearchFirstOcc(first,30);
    printf("element occur at position : %d\t",iRet);
    return 0;
}