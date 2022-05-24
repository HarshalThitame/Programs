#include<stdio.h>
void DigitDisplay(int iNo)
{
    int iDigit = 0,iRev = 0;
    for(int i = 0;i <= iNo; i++)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;

    }
    printf("%d\n",iRev);
}
int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    DigitDisplay(iValue);
}