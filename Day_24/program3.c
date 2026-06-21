#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],longest[50];
    int max = 0;

    printf("Enter Sentence: ");
    fgets(str,sizeof(str),stdin);

    char *word = strtok(str,"\n");

    while(word != NULL)
    {
        if(strlen(word) > max)
        {
            max = strlen(word);
            strcpy(longest,word);
        }
        word = strtok(NULL,"\n");
    }

    printf("Longest Word = %s",longest);

    return 0;
}