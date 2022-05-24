#include<iostream>

using namespace std;
int Addition(int iNo1,int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
}

float Addition(float iNo1,float iNo2)
{
    float iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
}
int main()
{
    int x = 10,y = 11,ret =0;
    ret =  Addition(x,y);
    cout<<"Addition is"<<ret<<"\n";

    float a = 10.8,b = 11.5,fret =0.0;
    fret =  Addition(a,b);
    cout<<"Addition is"<<fret<<"\n";

    return 0;
}