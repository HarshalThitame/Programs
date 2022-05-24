#include<stdio.h>

void DispalyClass(float fNo)
{
    if((fNo >= 0.0) && (fNo < 35.0))
    {
        printf("Fail\n");
    }
    else if((fNo >= 35.0) &&(fNo < 50.0))
    {
        printf("Pass Class\n");
    }
    else if((fNo >= 50.0) && (fNo < 60.0))
    {
        printf("Second Class\n");
    }
    else if((fNo >= 60.0) && (fNo < 70.0))
    {
        printf("First Class\n");
    }
    else if((fNo >= 70.0) && (fNo < 100.0))
    {
        printf("First Class with Distinction\n");
    }
    else
    {
        printf("Enter Valid Percentage\n");
    }

}
int main()
{
    float fValue = 0.0;

    printf("Enter Your Percentage : ");
    scanf("%f",&fValue);

    DispalyClass(fValue);

    return 0;
}
