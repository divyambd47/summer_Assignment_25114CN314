#include<stdio.h>
#include<math.h>
int main()
{
    int num,n,start,end,temp,rem,sum;
    printf("Enter start and end of range:");
    scanf("%d %d",&start,&end);
    for(num=start;num<=end;num++)
    {
        temp=num;
        n=0;
        sum=0;
    }
    while(temp!=0)
    {
        n++;
        temp/=10;
    }
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum+=pow(rem,n);
        temp/=10;
    }
    if (sum==num)
    {
        printf("%d",num);
    }
    return 0;
}