
#include<stdio.h>

void Forward(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("%d\n",icnt);
    }
}
void Backward(int iNo)
{
    int icnt = 0;

    for(icnt = iNo; icnt >= 1; icnt--)
    {
        printf("%d\n",icnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);
    printf("Forward Display\n");
    Forward(iValue);
    printf("Backward Display\n");
    Backward(iValue);
    return 0;
}