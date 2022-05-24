#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0,count  = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        count++;
        iNo = iNo / 10;
    }
    return count;

}
int main()
{
    int iRet = 0;
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    iRet = CountEven(iValue);
    printf(" %d\n",iRet);
}