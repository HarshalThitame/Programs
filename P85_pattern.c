
#include<stdio.h>

void Display(int iNo)
{
    register int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
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