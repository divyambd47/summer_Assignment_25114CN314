#include<stdio.h>
int main()
{
    int n,key,i,found=0;

    printf("Enter size of array:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter elements to search:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("Elements found at position %d",i+1);
            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("Element not found");
    }

    return 0;
}