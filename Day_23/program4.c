#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],maxchar;
    int count[256] = {0};
    int max=0;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    for(int i=0;str[i] != '\0';i++)
    {
        count[(unsigned char)str[i]]++;
    }

    for(int i=0;i<256;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            maxchar=i;
        }
    }

    printf("Maximum occuring character = %c",maxchar);

    return 0;
}