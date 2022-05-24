#include<stdio.h>

void Display(int Arr[])
{
    register int iCnt = 0;
    printf("Enter Elements are \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    register int iCnt = 0;
    auto int Brr[5];
    
    printf("Enter Element : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    Display(Brr);
    return 0;
}