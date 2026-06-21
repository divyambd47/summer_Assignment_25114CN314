#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int visited[256] = {0};

    printf("Enter String: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    printf("String after removing duplicates:");

    for(int i=0;str[i] != '\0';i++)
    {
        if(visited[(unsigned char)str[i]] == 0)
        {
            printf("%c",str[i]);
            visited[(unsigned char)str[i]] == 1;
        }
    }

    return 0;
}