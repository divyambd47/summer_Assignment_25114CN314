#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    for(int i=0;str[i] != '\0';i++)
    {
        for(int j=i+1;str[j] != '\0';j++)
        {
            if(str[i] == str[j])
            {
                printf("First repeating character = %c",str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character found");

    return 0;
}