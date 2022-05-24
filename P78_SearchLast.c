#include<stdio.h>
#include<stdlib.h>

int SearchLastOccurance(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    for(iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    return iCnt;
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

    iRet = SearchLastOccurance(ptr,iSize,iValue);
    printf("%d\n",iRet);

    free(ptr);
    return 0;
}