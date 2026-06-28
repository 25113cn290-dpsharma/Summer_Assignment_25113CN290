// Write a program to Create ticket booking system.

#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[20];
    int seatNo;
};

int main()
{
    struct Ticket t;
    int choice;

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display Ticket\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Ticket Number: ");
                scanf("%d", &t.ticketNo);

                printf("Enter Passenger Name: ");
                scanf("%s", t.name);

                printf("Enter Seat Number: ");
                scanf("%d", &t.seatNo);

                printf("Ticket Booked Successfully!\n");
                break;

            case 2:
                printf("\n----- Ticket Details -----\n");
                printf("Ticket Number : %d\n", t.ticketNo);
                printf("Passenger Name: %s\n", t.name);
                printf("Seat Number   : %d\n", t.seatNo);
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } 
    while(choice != 3);

    return 0;
}