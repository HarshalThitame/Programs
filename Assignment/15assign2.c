#include<stdio.h>

void Display(int iRow,int iCol)
{
   int i = 0,j = 0,temp1 = 1,temp2 = 2;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
        if(temp1,temp2 >= iCol*2+1)
        {
            temp2 = 2;
            temp1 = 1;
        }
         if(i % 2 == 0)
         {
            printf("%d\t",temp1);
            temp1 = temp1 + 2;
         }
         else
         {
            printf("%d\t",temp2);
            temp2 = temp2 + 2;
         }

         }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter Row  :");
    scanf("%d",&iValue1);

     printf("Enter Column : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}