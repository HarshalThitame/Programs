#include<stdio.h>
#include<stdlib.h>

int SearchFirstOccurance(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
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

    printf("Enter the number to calculate Frequency : ");
    scanf("%d",&iValue);

    iRet = SearchFirstOccurance(ptr,iSize,iValue);
    printf("%d\n",iRet);
    return 0;
}