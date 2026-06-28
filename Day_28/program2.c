#include<stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank b;
    float deposit,withdraw;

    printf("Enter Account Numnber: ");
    scanf("%d",&b.accNo);

    printf("Enter Account Holder Name: ");
    scanf("%[^\n]",&b.name);

    printf("Enter Initial Balance: ");
    scanf("%f",&b.balance);

    printf("Enter Deposit Amount: ");
    scanf("%f",&deposit);
    b.balance += deposit;

    printf("Enter Withdraw Amount: ");
    scanf("%f",&withdraw);

    if(withdraw <= b.balance)
    {
        b.balance -= withdraw;
    }
    else
    {
        printf("Insufficient Balance");
    }

    printf("\n ----- Account Details ----- \n");
    printf("Account Number: %d\n",b.accNo);
    printf("Name: %s\n",b.name);
    printf("Balance: %.2f\n",b.balance);

    return 0;
}