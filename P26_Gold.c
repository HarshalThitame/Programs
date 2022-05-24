#include<stdio.h>
//1  4000
//2  8000
//5  20000
//10 40000

JewllersPortal(int iWeight)
{
    switch(iWeight)
    {
        case 1:
            printf("your bill amount is 4000\n");
            break;

        case 2:
            printf("your bill amount is 8000\n");
            break;

        case 5:
            printf("your bill amount is 10000\n");
            break;

        case 10:
            printf("your bill amount is 20000\n");
            break;


        default:
            printf("Invalid Weight\n");
            break;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the gold coin size you want to purchase\n");
    scanf("%d",&iValue);

    JewllersPortal(iValue);

    return 0;
}