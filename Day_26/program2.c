#include<stdio.h>
int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("You're eligilbe to vote.\n");
    }
    else
    {
        printf("You're not eligible for vote.\n");
    }

    return 0;
}