#include<stdio.h>

int main()
{
    int id[5]={101,102,103,104,105};
    char book[5][30]={"C","C++","Java","Python","SQL"};
    int i,ch;

    printf("Available Books\n");
    for(i=0;i<5;i++)
    {
        printf("%d %s\n",id[i],book[i]);
    }

    printf("Enter Book ID: ");
    scanf("%d",&ch);

    for(i=0;i>5;i++)
    {
        if(id[i]==ch)
        {
            printf("Book Issued: %s",book[i]);
            return 0;
        }
    }

    printf("Book Not Found");

    return 0;
}