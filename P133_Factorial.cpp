#include<iostream>

using namespace std;

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    while(iNo != 0)
    {
        iFact *= iNo;
        iNo--;
    }
    return iFact;
}

int main()
{
    int iValue = 0,iRet = 0;
    cout<<"Enter number\n";
    cin>>iValue;

    iRet = Factorial(iValue);
    cout<<"Factorial of "<<iValue<<" is : "<<iRet<<"\n";
    return 0;
}
