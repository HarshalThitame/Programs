
#include<stdio.h>

void Display(int iNo)
{
    register int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0 )
        {
            printf("%d\t",iCnt);
        }
        else
        {
            printf("*\t");
        }
    }

    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Please Enter the value : ");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}