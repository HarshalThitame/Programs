#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = iNo;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    if(iRev == iTemp)
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
    printf("Enter number : ");
    scanf("%d",&iValue);

   bRet = CheckPalindrome(iValue);
   if(bRet == true)
   {
        printf("%d Number is Palindrome\n",iValue);
   }
   else
   {
        printf("%d Number is not a Palindrome\n",iValue);
   }
    return 0;
}