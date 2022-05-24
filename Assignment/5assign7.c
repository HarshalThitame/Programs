#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0,evenSum = 0,oddSum = 0,diff = 0;
   while(iNo>0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            evenSum = evenSum + iDigit;
        }
        if(iDigit % 2 != 0)
        {
            oddSum = oddSum + iDigit;
        }
        iNo = iNo / 10;
    }
      printf("%d\n",evenSum);
        printf("%d\n",oddSum);
    diff = evenSum - oddSum;
    return diff;

}
int main()
{
    int iRet = 0;
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    iRet = Count(iValue);
    printf(" %d\n",iRet);
}