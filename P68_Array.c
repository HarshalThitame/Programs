#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    register int iCnt = 0;
    printf("Enter Elements are \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    register int iCnt = 0;
    int *ptr = NULL;
    int iSize = 0;

    printf("Enter Size of Array : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize *sizeof(int));
    
    printf("Enter Element : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iSize);
    free(ptr);
    return 0;
}