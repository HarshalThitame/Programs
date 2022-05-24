//Program to display 5 times Hello on screen

#include<stdio.h>

//Demonstration of ITERATION

void Display(int iNo)
{
   int iCnt = 0;
//1 Initialization
//2 Condition
//3 Displacement
//4 Loop Body

    //      1          2        3
   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
    printf("Hello\n");      //4
   }
}
int main()
{
    int iValue;
    printf("Enter no : ");
    scanf("%d",&iValue);
    
   Display(iValue);   //Function call

    return 0;
}