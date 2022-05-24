#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int iCnt = 0,iCount = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
            if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
    }
   return iCount;
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
    iRet = CountEven(ptr,iSize);
    printf("%d\n",iRet);
    free(ptr);
    return 0;
}
