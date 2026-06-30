#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,choice,roll[100],found;
    char name[100][50];
    float marks[100];

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Roll No: ");
        scanf("%d",&roll[i]);
        printf("Name: ");
        scanf("%s",name[i]);
        printf("Marks: ");
        scanf("%f",&marks[i]);
    }

    printf("\nStudent Records:\n");
    printf("Roll\tName\tMarks\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%.2f\n",roll[i],name[i],marks[i]);
    }

    printf("\nEnter Roll Number to Search: ");
    scanf("%d",&choice);

    found = 0;
    for(i=0;i<n;i++)
    {
        if(roll[i] == choice)
        {
            printf("\nRecord Found\n");
            printf("Roll: %d\n",roll[i]);
            printf("Name: %s\n",name[i]);
            printf("Marks: %.2f\n",marks[i]);
            found = 1;
            break;
        }
    }

    if(found==0)
    {
        printf("Record Not Found");
    }

    return 0;
}