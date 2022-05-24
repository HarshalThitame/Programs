/*4. Accept N numbers from user and accept Range,
 Display all elements from that range*/

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iNo1,int iNo2)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iNo1) && (Arr[iCnt] <= iNo2))
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iCnt = 0,iSize = 0,iValue1 = 0,iValue2 =0,iRet = 0;
    int *ptr = NULL;

    printf("Enter number of Elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of Array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter second number : ");
    scanf("%d",&iValue2);

    Range(ptr,iSize,iValue1,iValue2);

    free(ptr);
    return 0;
}