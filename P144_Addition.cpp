#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int iValue)
        {
            this->iSize = iValue;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter the Elements : ";
            for(iCnt = 0;iCnt < iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;
            for(iCnt = 0;iCnt < iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }

        int Addition()
        {
            int iCnt = 0,iSum = 0;
            for(iCnt = 0;iCnt < iSize;iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }
};

int main()
{
    ArrayX obj(5);
    int iRet = 0;

    obj.Accept();
    obj.Display();
    iRet = obj.Addition();
    cout<<"Addition is : "<<iRet<<endl;
    
    return 0;
}