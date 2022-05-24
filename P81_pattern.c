
#include<stdio.h>

void Display(int iNo)
{
    register int iCnt = 0;
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*\t");
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