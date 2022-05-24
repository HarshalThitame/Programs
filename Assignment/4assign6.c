	#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0,count = 0;
    for(int i = 0;i <= iNo; i++)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
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
    iRet = CountFour(iValue);
    printf(" Freq of 4 : %d\n",iRet);
}
