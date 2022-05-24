/*3. Accept N numbers from user and return the difference
between largest and smallest number.*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0,iMax = Arr[0],iMin = Arr[0],iDff = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }

        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    iDff = iMax - iMin;
    return iDff;
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


    iRet = Difference(ptr,iSize);
    printf("%d\n",iRet);

    free(ptr);
    return 0;
}