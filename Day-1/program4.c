#include<stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=n; i!=0; i=i/10)
    {
        count++;
    }
    printf("the number of digit in %d = %d",n,count);
    return 0;
}