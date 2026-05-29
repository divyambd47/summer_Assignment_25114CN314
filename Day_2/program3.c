#include<stdio.h>
int main()
{
    int n,temp,prod=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        temp = n % 10;
        prod *= temp;
        n=n/10;
    }
    printf("product of digit of a %d = %d",n,prod);
    return 0;
}