#include<stdio.h>
int main()
{
    int n,temp, rev=0, digit;
    printf("Enter a number:");
    scanf("%d",&n);
    temp =n;
    while(n!=0)
    {
        digit = n % 10;
        rev = rev*10+digit;
        n=n/10;
    }
    if(rev==temp)
    {
        printf("the given number %d is palindrome");
    }    
    else
    {
        printf("the given number %d is not palindrome");
    }
    return 0;
}