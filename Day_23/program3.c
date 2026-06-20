#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int count[256] = {0};

    printf("Enter first string: ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")] = '\0';

    if(strlen(str1) != strlen(str2))
    {
        printf("Not Anagram");
        return 0;
    }

    for(int i=0;str1[i] != '\0';i++)
    {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for(int i=0;i<256;i++)
    {
        if(count[i] != 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram String");

    return 0;
}