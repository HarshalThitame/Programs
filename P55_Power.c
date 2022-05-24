
/*

    START
        accept one number as no1
        Accept another number as no2

        Create one variable as Mult
        set the value 1 in the variable Mult

        Create one counter as cnt
        Set counter to 1

        Iterate till the counter is less than or equal to no2
         Mult = Mult * no1
         increment the counter by one
        continue

        Display the value of mult
    END
*/

#include<stdio.h>
typedef  unsigned long int ULONG;

ULONG Power(int iNo1,int iNo2)
{
    register int iCnt = 0;
    ULONG lMult = 1;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        lMult = lMult * iNo1;
    }
    return lMult;
}
int main()
{
    auto int iValue1 = 0,iValue2 = 0;
    auto ULONG lRet = 0;

    printf("Enter base : ");
    scanf("%d",&iValue1);

    printf("Enter power : ");
    scanf("%d",&iValue2);

    lRet = Power(iValue1,iValue2);
    printf("Result is : %ld\n",lRet);

    return 0;
}