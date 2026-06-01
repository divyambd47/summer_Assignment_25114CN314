#include<stdio.h>
int main()
{
    int n,i,largestpf=-1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            largestpf=i;
            n=n/i;
        }
    }
    printf("Largest Prime Factor =%d",largestpf);
    return 0;
}