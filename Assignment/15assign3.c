#include<stdio.h>

void Display(int iRow,int iCol)
{
   int i = 0,j = 0;
   char ch = '\0';
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,ch = 'a'; j <= iCol; j++,ch++)
        {
        if(i %2 == 0 )
        {
            printf("%d\t",j);
        }
        else
        {
            printf("%c\t",ch);
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