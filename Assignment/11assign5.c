/*3. Accept N numbers from user and display summation of digit of each number.*/

#include<stdio.h>
#include<stdlib.h>

void Sum(int Arr[],int iLength)
{
    int iCnt = 0,iDigit = 0,iSum = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        while(Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt] /10;
        }
        printf("%d\n",iSum);
        iSum = 0;
    }
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


    Sum(ptr,iSize);

    free(ptr);
    return 0;
}
