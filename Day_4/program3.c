#include<stdio.h>
#include<math.h>
int main()
{
    int num,temp,rem,n=0;
    int result=0;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        n++;
        temp/=10;
    }
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        result+=pow(rem,n);
        temp/=10;
    }
    if(result==num)
    {
        printf("%d is a armstrong number",num);
    }
    else
    {
        printf("%d is not a armstrong number",num);
    }
    return 0;
}