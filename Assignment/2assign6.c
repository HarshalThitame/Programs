#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CkZero(int iNo)
{
    int iDigit = 0;
    BOOL flag = 0;
    for(int i = 0;i <= iNo; i++)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            flag = 1;
            break;
        }
        iNo = iNo / 10;
    }
    return flag;

}
int main()
{
    int bRet;
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    bRet = CkZero(iValue);
    if(bRet == 1)
    {
        printf(" it contains zero");
    }
    else
    {
        printf("not zero");
    }
}