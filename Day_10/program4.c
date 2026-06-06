#include<stdio.h>
int main()
{
    int i,j,k,l,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<i;k++)
        {
            printf("%c",'A' + k);
        }
        for(l=i-2;l>=0;l--)
        {
            printf("%c",'A' + l);
        }
        printf("\n");
    }
    return 0;
}