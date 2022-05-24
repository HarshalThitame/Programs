#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
            if(Arr[iCnt] == 11)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int iCnt = 0,iSize = 0;
    bool bRet;
    int *ptr = NULL;

    printf("Enter number of Elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of Array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    bRet = Check(ptr,iSize);
    if(bRet == true)
    {
        printf("11 is Present. \n");
    }
    else
    {
        printf("11 is not Present. \n");
    }
    free(ptr);
    return 0;
}
