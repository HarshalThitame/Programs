#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE
typedef struct node * PNODE
int main()
{
    NODE obj;    //Static memory allocation

    PNODE ptr = (PNODE)malloc(sizeof(NODE));    //Dynamic memory allocation

    obj.data = 11;
    obj.next = NULL;

    ptr -> data = 11;   //Indirect accessing operator
    ptr -> next = NULL;

    return 0;
}