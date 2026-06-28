// Write a program to Create contact management system.

#include <stdio.h>

struct Contact
{
    char name[20];
    long long mobile;
};

int main()
{
    struct Contact c[100];
    int choice, count = 0, i;

    do
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Name: ");
                scanf("%s", c[count].name);

                printf("Enter Mobile Number: ");
                scanf("%lld", &c[count].mobile);

                count++;

                printf("Contact Saved Successfully!\n");
                break;

            case 2:
                if(count == 0)
                {
                    printf("No Contacts Saved.\n");
                }
                else
                {
                    printf("\n----- Contact List -----\n");

                    for(i = 0; i < count; i++)
                    {
                        printf("\nContact %d\n", i + 1);
                        printf("Name   : %s\n", c[i].name);
                        printf("Mobile : %lld\n", c[i].mobile);
                    }
                }
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