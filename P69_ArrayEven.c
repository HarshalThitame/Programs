#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[],int iLength)
{
    int iCnt = 0;
    printf("Even Element in Array\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) ==0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iCnt = 0,iSize = 0;
    int *ptr = NULL;

    printf("Enter number of Elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of Array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    DisplayEven(ptr,iSize);
    return 0;
}