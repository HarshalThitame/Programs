#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0,count = 0;
    for(int i = 0;i <= iNo; i++)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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
    iRet = CountTwo(iValue);
    printf(" Freq of 2 : %d\n",iRet);
}