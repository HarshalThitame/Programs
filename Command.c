#include<stdio.h>

int main(int argc,char *argv[])
{
    int ans = 0;
    printf("Name of executable is: %s\n",argv[0]);
    printf("Number of command line argument are : %d\n",argc);

    ans = atoi(argv[1]) + atoi(argv[2]);
    printf("Additon is %d\n",ans);

    return 0;

}