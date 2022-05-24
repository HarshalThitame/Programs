
#include<stdio.h>

void Display(int iRow,int iCol)
{
  if(iRow != iCol)
  {
    printf("Invalid input\n");
    return;
  }
 int i = 0, j = 0;
 char ch = '\0';
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,ch = 'a';j <= i;j++,ch++ )
        {
                printf("%c\t",ch);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Please Enter rows : ");
    scanf("%d",&iValue1);

    printf("Please Enter column : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);


    return 0;
}