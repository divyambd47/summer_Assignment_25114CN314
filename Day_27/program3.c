#include<stdio.h>

struct Salary
{
    int id;
    char name[50];
    float basic,hra,da,total;
};

int main()
{
    struct Salary s[100];
    int n=0,choice,i;

    while (1)
    {
        printf("\n----- Salary Management -----\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salary Details\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
            {
                printf("Enter Employee ID:");
                scanf("%d",&s[n].id);

                printf("Enter Name: ");
                scanf("%[^\n]",s[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f",&s[n].basic);

                s[n].hra = 0.20 * s[n].basic;
                s[n].da = 0.10 * s[n].basic;
                s[n].total = s[n].basic + s[n].hra + s[n].da;

                n++;
                break;
            }

            case 2:
            {
                for(i=0;i<n;i++)
                {
                    printf("\n Employeee Id: %d",s[i].id);
                    printf("\n Nmae : %s",s[i].name);
                    printf("\nBasic : %.2f",s[i].basic);
                    printf("\nhRA: %.2f",s[i].hra);
                    printf("\nDA : %.2f\n",s[i].total);
                }
                break;
            }

            case 3:
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