#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-1;j++)
        {
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}