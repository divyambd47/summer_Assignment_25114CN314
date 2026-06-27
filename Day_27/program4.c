#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    int m1,m2,m3,total;
    float per;
};

int main()
{
    struct Student s;

    printf("Enter roll no:");
    scanf("%d",&s.roll);

    printf("Enter Name: ");
    scanf("%[^\n]",s.name);

    printf("Enter Marks of 3 subjects: ");
    scanf("%d%d%d",&s.m1,&s.m2,&s.m3);

    s.total = s.m1 + s.m2 + s.m3;
    s.per = s.total / 3.0;

    printf("\n ----- Marksheet -----\n");
    printf("Roll No : %d\n",s.roll);
    printf("Name : %s\n",s.name);
    printf("Subject1: %d\n",s.m1);
    printf("Subject2: %d\n",s.m2);
    printf("Subject3: %d\n",s.m3);
    printf("Total: %d\n",s.total);
    printf("Percentage: %.2f\n",s.per);

    if(s.per >= 40)
    {
        printf("Result:Pass");
    }
    else
    {
        printf("Result:Fail");
    }

    return 0;
}