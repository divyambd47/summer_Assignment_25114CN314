#include<stdio.h>
int main()
{
    int id[100],n,i,search,found=0;
    char name[100][50];
    float salary[100];

    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);
        printf("ID: ");
        printf("%d",&id[i]);
        printf("Name: ");
        scanf("%s",name[i]);
        printf("Salary: ");
        scanf("%f",&salary[i]);
    }

    printf("\nEmployee Details\n");
    printf("ID\tName\tSalary\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%.2f\n",id[i],name[i],salary[i]);
    }

    printf("\nEnter Employee ID to Search: ");
    scanf("%d",&search);

    for(i=0;i<n;i++)
    {
        if(id[i] == search)
        {
            printf("\nEmployee Found\n");
            printf("ID: %d\n",id[i]);
            printf("Name: %s\n",name[i]);
            printf("Salary: %.2f\n",salary[i]);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Employee Not Found");
    }

    return 0;
}