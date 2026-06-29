// Write a program to Create inventory management system.

#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};
struct Item item[100];
int count=0;

void addItem()
{
    printf("Enter Item ID : ");
    scanf("%d", &item[count].id);
    printf("Enter Item Name : ");
    scanf(" %s", item[count].name);
    printf("Enter Quantity : ");
    scanf("%d", &item[count].quantity);
    printf("Enter Price : ");
    scanf("%f", &item[count].price);

    count++;

    printf("Item Added Successfully.\n");
}

void displayItems()
{
    int i;
    if(count==0)
    {
        printf("No Items Available.\n");
        return;
    }
    printf("\n----- Inventory -----\n");

    for(i=0;i<count;i++)
    {
        printf("\nItem %d\n", i + 1);
        printf("ID       : %d\n", item[i].id);
        printf("Name     : %s\n", item[i].name);
        printf("Quantity : %d\n", item[i].quantity);
        printf("Price    : %.2f\n", item[i].price);
    }
}

void searchItem()
{
    int id,i,found=0;

    printf("Enter Item ID to Search: ");
    scanf("%d", &id);

    for(i=0;i<count;i++)
    {
        if(item[i].id==id)
        {
            printf("\nItem Found\n");
            printf("ID       : %d\n", item[i].id);
            printf("Name     : %s\n", item[i].name);
            printf("Quantity : %d\n", item[i].quantity);
            printf("Price    : %.2f\n", item[i].price);

            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("Item Not Found.\n");
    }
}

int main()
{
    int choice;
    do
    {
        printf("\n\n===== INVENTORY MANAGEMENT SYSTEM =====\n\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addItem();
                break;

            case 2:
                displayItems();
                break;

            case 3:
                searchItem();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } 
    while(choice != 4);
    return 0;
}