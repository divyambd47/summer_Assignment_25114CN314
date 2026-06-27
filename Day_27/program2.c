#include<stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n=0,choice,i,id,found;

    while (1)
    {
        printf("\n----- Employee Management -----\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("Search Employee\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
            {
                printf("Enter Employee ID: ");
                scanf("%d",&e[n].id);

                printf("Enter Name: ");
                scanf("%[^\n]",e[n].name);

                printf("Enter Salary: ");
                scanf("%f",&e[n].salary);

                n++;
                break;
            }

            case 2:
            {
                for(i=0;i<n;i++)
                {
                    printf("\nID: %d",e[i].id);
                    printf("\nName: %s",e[i].name);
                    printf("\nSalary: .2f\n",e[i].salary);
                }
                break;
            }

            case 3:
            {
                found =0;

                printf("Enter Employee ID: ");
                scanf("%d",&id);

                for(i=0;i<n;i++)
                {
                    if(e[i].id == id)
                    {
                        printf("\nID: %d",e[i].id);
                        printf("\nName: %s",e[i].name);
                        printf("\nSalary: .2%f\n",e[i].salary);
                        found = 1;
                    }
                }

                if (!found)
                {
                    printf("Employee Not Found\n");
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