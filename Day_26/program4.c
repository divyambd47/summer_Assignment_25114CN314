#include<stdio.h>

int main()
{
    int score =0,ans;

    printf("Quiz Application\n");

    printf("\n 1. Capital of India?\n");
    printf("1.Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    scanf("%d",&ans);

    if(ans == 2)
    {
        score++;
    }

    printf("\n2. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido Van Rossum\n");
    scanf("%d",&ans);

    if(ans == 1)
    {
        score++;
    }

    printf("\n3. 5 + 5 = ?\n");
    printf("1. 8\n2. 9\n3. 10\n4. 12\n");
    scanf("%d",&ans);

    if(ans == 3)
    {
        score++;
    }

    printf("\n Your score = %d/3\n",score);

    return 0;
}