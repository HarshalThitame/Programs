#include<stdio.h>

int DisplayFactors(int iNo)
{
    int iCnt = 0,iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt < (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);
    iRet = DisplayFactors(iValue);
    printf("Addition of factors : %d\n",iRet);

    return 0;
}