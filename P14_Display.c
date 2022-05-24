//Program to display 5 times Hello on screen

#include<stdio.h>

//Demonstration of SEQUENCE
void Display(int no)
{
   int i=0;
   while(no>i)
   {
        printf("Hello\n");
         i++;
   }

}
int main()
{
    int Disp;
    printf("Enter no : ");
    scanf("%d",&Disp);
    
   Display(Disp);

    return 0;
}