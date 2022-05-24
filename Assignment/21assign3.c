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
void MultDigit(PNODE head)
 {
    int iMult = 1,iDigit =0;
    while(head != NULL)
    {
        iMult = 1;
        while(head->data > 0)
        {
            iDigit = head->data % 10;
            iMult = iMult * iDigit;
            head->data = head->data /10;
        }
      printf("%d\n",iMult);
     head = head->next;
    }
 }
int main()
{
    int iRet = 0,ivalue = 0;
    PNODE first= NULL;

    InsertFirst(&first,11);
    InsertFirst(&first,28);
    InsertFirst(&first,6);
    InsertFirst(&first,17);

    MultDigit(first);
    return 0;
}