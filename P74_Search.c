#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int iCnt1 = 0;
    bool bFlag = false;
    for(iCnt = 0; iCnt < iLength\2; iCnt++)
     {
            if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iCnt = 0,iSize = 0,iValue = 0;
    bool bRet = 0;
    int *ptr = NULL;

    printf("Enter number of Elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of Array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the number to Search : ");
    scanf("%d",&iValue);

    bRet = Search(ptr,iSize,iValue);
    if(bRet == true)
    {
        printf("%d is Present\n",iValue);
    }
    else
    {
        printf("%d is not Present\n",iValue);
    }
    return 0;
}