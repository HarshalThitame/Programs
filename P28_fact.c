#include<stdio.h>

int DisplayFactors(int iNo)
{
    int iCnt = 0,sum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
            sum = sum + iCnt;
        }
    }
      printf("\n");
    printf("Addition of factors : %d",sum);
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);
    DisplayFactors(iValue); 

    return 0;
}