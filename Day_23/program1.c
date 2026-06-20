#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int count[256]= {0};

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    for(int i=0;str[i] != '\0';i++)
    {
        count[(unsigned char)str[i]]++;
    }

    for(int i=0;str[i] != '\0';i++)
    {
        if(count[(unsigned char)str[i]] == 1)
        {
            printf("First non-repeating character = %c",str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found");

    return 0;
}