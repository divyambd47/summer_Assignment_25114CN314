#include <stdio.h>

int roll[100], n;
char name[100][50];
float marks[100];

void add()
{
    int i;
    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Roll: ");
        scanf("%d",&roll[i]);
        printf("Name: ");
        scanf("%s",name[i]);
        printf("Marks: ");
        scanf("%f",&marks[i]);
    }
}

void display()
{
    int i;
    printf("\nRoll\tName\tMarks\n");

    for(i=0;i<n;i++)
        printf("%d\t%s\t%.2f\n",roll[i],name[i],marks[i]);
}

void search()
{
    int i,r;

    printf("Enter Roll Number: ");
    scanf("%d",&r);

    for(i=0;i<n;i++)
    {
        if(roll[i]==r)
        {
            printf("Record Found\n");
            printf("%d %s %.2f\n",roll[i],name[i],marks[i]);
            return;
        }
    }

    printf("Record Not Found");
}

int main()
{
    int ch;

    do
    {
        printf("\n1.Add Student");
        printf("\n2.Display Students");
        printf("\n3.Search Student");
        printf("\n4.Exit");
        printf("\nEnter Choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: add(); break;
            case 2: display(); break;
            case 3: search(); break;
            case 4: break;
            default: printf("Invalid Choice");
        }

    }while(ch!=4);

    return 0;
}