
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int iCnt = 0,jCnt = 0;
    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
       for(jCnt = 1; jCnt <= iCol; jCnt++)
       {
            printf("*\t");
       }
       printf("\n");
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Please Enter rows : ");
    scanf("%d",&iValue1);

    printf("Please Enter column : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);


    return 0;
}