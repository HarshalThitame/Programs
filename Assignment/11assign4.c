/*4. Accept N numbers from user and display
 all such numbers which contains 3 digits in it.*/

#include<stdio.h>
#include<stdlib.h>

void Digit(int Arr[],int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > 99 && Arr[iCnt] <1000)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iCnt = 0,iSize = 0;
    int *ptr = NULL;

    printf("Enter number of Elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of Array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


    Digit(ptr,iSize);

    free(ptr);
    return 0;
}