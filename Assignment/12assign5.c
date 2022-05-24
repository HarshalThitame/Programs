#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo*4; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}