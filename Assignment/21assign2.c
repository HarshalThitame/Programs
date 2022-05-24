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
void Palindrome(PNODE head)
 {
    int iSum = 0,iDigit =0;
    while(head != NULL)
    {
        int no = head -> data;
        while(no > 0)
        {
            iDigit = no % 10;
            iSum = (iSum * 10 )+ iDigit;
            no = no /10;
        }
        if(head->data == iSum)
        {
            printf("%d\n",iSum);
        }
      iSum = 0;
     head = head->next;
    }
 }
int main()
{
    int iRet = 0,ivalue = 0;
    PNODE first= NULL;

    InsertFirst(&first,121);
    InsertFirst(&first,28);
    InsertFirst(&first,6);
    InsertFirst(&first,17);

    Palindrome(first);
    return 0;
}