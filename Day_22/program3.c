#include<stdio.h>
int main()
{
    char ch,str[100];
    int i,count=0;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    printf("Enter character to find frequency: ");
    scanf("%c",&ch);

    for(i=0;str[i] != '\0';i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }

    printf("Frequenc of %c = %d",ch,count);

    return 0;
}