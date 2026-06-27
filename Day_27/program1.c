#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n=0,choice,i,roll,found;

    while (1)
    {
        printf("\n----- Student Record Management-----\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);


        switch (choice)
        {
            case 1:
            {
                printf("Enter Roll No: ");
                scanf("%d",&s[n].roll);

                printf("Enter Name: ");
                scanf("%[^\n]",s[n].name);

                printf("Enter Marks: ");
                scanf("%f",&s[n].marks);

                n++;
                break;
            }

            case 2:
            {
                for(i=0;i<n;i++)
                {
                    printf("\nRoll: %d",s[i].roll);
                    printf("\nName: %s",s[i].name);
                    printf("\nMarks: %.2f\n",s[i].marks);
                }
                break;
            }

            case 3:
            {
                found = 0;
                printf("Enter Roll No: ");
                scanf("%d",&roll);

                for(i=0;i<n;i++)
                {
                    if(s[i].roll == roll)
                    {
                        printf("\nRoll: %d",s[i].roll);
                        printf("\nName: %s",s[i].name);
                        printf("\nMarks: %.2f\n",s[i].marks);
                        found = 1;
                    }
                }

                if (!found)
                {
                    printf("Student Not Found\n");
                }
                break;
            }

            case 4:
            {
                return 0;
            }

            default:
            {
                printf("Invalid Choice");
            }
        }
    }
}