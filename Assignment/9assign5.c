#include<stdio.h>
#include<stdlib.h>

int Count(int Arr[],int iLength,int iNo)
{
    int iCnt = 0,iCount = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
            if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
   return iCount;
}

int main()
{
    int iCnt = 0,iSize = 0,iValue = 0,iRet = 0;
    int *ptr = NULL;

    printf("Enter number of Elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of Array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Count(ptr,iSize,iValue);
    printf("%d\n",iRet);
    return 0;
}