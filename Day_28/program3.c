#include<stdio.h>

struct Ticket
{
    int id;
    char name[50];
    int seats;
};

int main()
{
    struct Ticket t;
    int price = 500;

    printf("Enter Passanger ID: ");
    scanf("%d",&t.id);

    printf("Enter Passanger Name: ");
    scanf("%[^\n]",&t.name);

    printf("Enter Number Of Seats: ");
    scanf("%d",&t.seats);

    printf("\n --- Ticket Details --- \n");
    printf("Passenger ID: %d\n",t.id);
    printf("Passenger Name: %s\n",t.name);
    printf("Seats Booked: %d\n",t.seats);
    printf("Total Fare: %d\n",t.seats * price);

    return 0;
}