#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
    //Allocate memory for node(dynamically)
    //Initialize that node

    //check whether LL is empty or not
    //if LL is empty then new node is the first node so update its address in first pointer thr head

    //if LL is not empty the store the address of first node in the next pointer of our new node
    //update the first pointer thr head
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)       //LL is empty
    {
        *head = newn;
    }
    else                    //LL containt atleast one node
    {
        newn -> next = *head;
        *head = newn;
    }
}


void Display(PNODE head)
{
    printf("Elements from linked lis are : \n");

    while(head != NULL)
    {
        printf("| %d | -> ",head->data);
        head = head -> next;
    }
    printf("NULL\n");
}

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

void InsertLast(PPNODE head,int no)
{
    //Allocate memory for node(dynamically)
    //Initialize that node

    //check whether LL is empty or not
    //if LL is empty then new node is the first node so update its address in first pointer thr head

    //if LL is not empty then
    //travel till last node of LL
    //store address of new node in the next pointer of last node
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)       //LL is empty
    {
        *head = newn;
    }
    else                    //LL containt atleast one node
    {
        //travel till last node
        // store address of new
        temp = *head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp -> next = newn;
    }
}



void DeleteFirst(PPNODE head)
{
    // if LL is empty then return
    // if LL contains at least one node then
    // store the address of sencond node in the first pointer through head
    // and delete the first node
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    else    // LL contains atleast one node
    {
        temp = *head;
        *head = temp -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{
    // if LL is empty then  return
    // if LL contains one node then delete that node and return
    //if LL contains more than one node then travel till second las node and delete last node
    PNODE temp = NULL;

    if(*head == NULL)   //LL is empty
    {
        return;
    }
    else if((*head)->next == NULL)    //LL contains one node
    {
        free(*head);
        *head = NULL;
    }
    else    //LL contains more than one node
    {
        temp = *head;
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp -> next = NULL;
    }

}

void InsertAtPos(PPNODE head,int no,int pos)
{
    // if position is invalid then return directly;
    // if position is one then call InsertFirst
    // if position is N+1 then call InsertLast

    int size = 0,iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    size = Count(*head);

    if((pos < 1) || (pos > (size + 1)))     //position is invalid
    {
        printf("Position is invalid\n");
        return;
    }

    else if(pos == 1)   //position is one
    {
        InsertFirst(head,no);
    }

    else if(pos == (size + 1))  //position is N+1
    {
        InsertLast(head,no);
    }

    else    //logic
    {
        newn = NULL;

        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        temp = *head;
        
        for(iCnt = 1;iCnt < (pos - 1);iCnt++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next = newn;
    }

}

void DeleteAtPos(PPNODE head,int pos)
{
     // consider no of node are 4
    // if position is invalid then return directly;( < 1 OR > 4)
    // if position is one then call DeleteFirst
    // if position is N then call DeleteLast (Position is 4)

    int size = 0,iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;
    PNODE tempDelete = NULL;

    size = Count(*head);

    if((pos < 1) || (pos > (size)))     //position is invalid
    {
        printf("Position is invalid\n");
        return;
    }

    else if(pos == 1)   //position is one
    {
        DeleteFirst(head);
    }

    else if(pos == size)  //position is N+1
    {
        DeleteLast(head);
    }

    else    //logic
    {
        temp = *head;

        for(iCnt = 1;iCnt < (pos - 1);iCnt++)
        {
            temp = temp -> next;
        }
         tempDelete = temp -> next;
         temp -> next = temp -> next -> next;
         free(tempDelete);
    }

}

int main()
{
    int iRet = 0;
    PNODE first = NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertAtPos(&first,75,3);
    DeleteAtPos(&first,3);

    Display(first);

    iRet = Count(first);
    printf("Number of node are : %d\n",iRet);

    InsertFirst(&first,1);
    Display(first);

    iRet = Count(first);
    printf("Number of node are : %d\n",iRet);

    InsertLast(&first,111);
    InsertLast(&first,121);
    Display(first);

    iRet = Count(first);
    printf("Number of node are : %d\n",iRet);

    DeleteFirst(&first);
    DeleteFirst(&first);
    Display(first);

    iRet = Count(first);
    printf("Number of node are : %d\n",iRet);

    DeleteLast(&first);
    Display(first);

    iRet = Count(first);
    printf("Number of node are : %d\n",iRet);


    return 0 ;
}