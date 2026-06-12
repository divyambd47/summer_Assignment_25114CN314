#include<stdio.h>
int main()
{
    int n,i,sum=0,total=0,missing;

    printf("Enter n:");
    scanf("%d",&n);

    int arr[n-1];

    printf("Enter %d elements:\n",n-1);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    total = n*(n+1)/2;
    missing = total - sum;

    printf("Missing Number = %d",missing);

    return 0;
}