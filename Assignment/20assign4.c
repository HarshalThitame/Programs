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

int Count(PNODE head)
{
    int iCnt = 0;
    while(head != NULL)
    {
        iCnt++;
        head = head -> next;
    }
    return iCnt;
}

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
 int SecondMax(PNODE head)
 {
    int iMax = 0,iMax2 = 0;
    int size = 0;
    size = Count(head);
    while(head != NULL)
    {
        if(head->data > iMax)
        {
            iMax2 = iMax;
            iMax  = head->data;
        }
        else if(head -> data > iMax2 && head->data != iMax )
        {
            iMax2 = head->data;
        }
        head = head -> next;
    }
    return iMax2;
 }
int main()
{
    int iRet = 0,ivalue = 0;
    PNODE first= NULL;

    InsertFirst(&first,9);
    InsertFirst(&first,93);
    InsertFirst(&first,92);
    InsertFirst(&first,19);
    InsertFirst(&first,39);
    InsertFirst(&first,54);
    InsertFirst(&first,98);


    iRet = SecondMax(first);
    printf("second maximum is : %d\n",iRet);
    return 0;
}