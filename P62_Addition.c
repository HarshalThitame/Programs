#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iLength)
{
    int iCnt = 0,iCount = 0,iSum = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
          iSum = iSum + Arr[iCnt];
    }
   return iSum;
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
    iRet = Addition(ptr,iSize);
    printf("%d\n",iRet);
    
    free(ptr);
    return 0;
}