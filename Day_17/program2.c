#include<stdio.h>
int main()
{
    int a[]={1,2,3,4};
    int b[]={3,4,5,6};

    int n1=4,n2=4;
    int i,j,found;

    printf("Union:");

    for(i=0;i<n1;i++)
    {
        printf("%d",a[i]);
    }

    for(i=0;i<n2;i++)
    {
        found = 0;

        for(j=0;j<n1;j++)
        {
            if(b[i] == a[j])
            {
                found = 1;
                break;
            }
        }

        if(!found)
        {
            printf("%d",b[i]);
        }
    }

    return 0;
}