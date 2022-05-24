#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0,count = 0;
    for(int i = 0;i <= iNo; i++)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            count++;
        }
        iNo = iNo / 10;
    }
    return count;

}
int main()
{
    int iRet;
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    iRet = Count(iValue);
    printf(" no less than 6 : %d\n",iRet);
}