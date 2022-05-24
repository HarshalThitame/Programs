#include<stdio.h>
#include<stdbool.h>

int Power(int iNo1,int iNo2)
{
    register int iCnt = 0;
    int lMult = 1;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        lMult = lMult * iNo1;
    }
    return lMult;
}

bool chkArmstrong(int iNo)
{
    int iTemp = 0,iDigCnt = 0,iDigit = 0,iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iTemp = iNo;

    //check number of digit

    while(iNo != 0)
    {
       iDigCnt++;
       iNo = iNo / 10;
    }

    iNo = iTemp;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + Power(iDigit,iDigCnt);
        iNo = iNo / 10;
    }

    if(iSum == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }


}
int main()
{
    int iValue = 0;
    bool bRet;
    printf("Enter base : ");
    scanf("%d",&iValue);

    bRet = chkArmstrong(iValue);
    if(bRet == true)
    {
        printf("%d is Armstrong Number \n",iValue);
    }
    else
    {
        printf("%d is Armstrong Not Number \n",iValue);
    }
    return 0;
}