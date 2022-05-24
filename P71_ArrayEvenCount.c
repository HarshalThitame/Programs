#include<stdio.h>
#include<stdlib.h>

int EvenCount(int Arr[],int iLength)
{
    int iCnt = 0,iEvenCnt = 0;
    printf("Even Element in Array\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) ==0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}

int main()
{
    int iCnt = 0,iSize = 0,iRet = 0;
    int *ptr = NULL;

    printf("Enter number of Elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of Array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet = EvenCount(ptr,iSize);
    printf("Number of even element are %d\n",iRet);
    return 0;
}