// Write a program to Create library management system.

#include<stdio.h>
#include<string.h>

struct lib
{
    int id;
    char name[100];
    char author[100];
    int issued;  
};

struct lib book[100];
int count=0;

void addbook()
{
    printf("Enter the book id : ");
    scanf("%d",&book[count].id);

    printf("Enter Book name : ");
    scanf("%s",book[count].name);

    printf("Enter Author name : ");
    scanf("%s",book[count].author);

    count++;
    printf("Book Added Successfully.\n");
}

void displaybook()
{
    int i;
    if(count==0)
    {
        printf("No record found");
    }
    for(i=0;i<count;i++)
    {
        printf("Book id = %d\n",book[i].id);
        printf("Book name = %s\n",book[i].name);
        printf("Author name = %s\n",book[i].author);
    }
}

void searchbook()
{
    int s,i,found=0;
    printf("Enter the book id to be searched : ");
    scanf("%d",&s);
    
    for(i=0;i<count;i++)
    {
        if(s==book[i].id)
        {
            printf("BOOK FOUND \n");
            printf("Book name = %s\n",book[i].name);
            printf("Author name = %s\n",book[i].author);
            found = 1;
            break;
        }
    }
    if(found==0)
    {
        printf("Book did not found \n");
    }
}

int main()
{
    int choice;
    do{ 
    printf("\n\n=======MENU=======\n\n");
    printf("1. Add book \n");
    printf("2. Display book \n");
    printf("3. Search book \n");
    printf("4. Exit \n");

    printf("Enter you choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            addbook();
            break;
        case 2:
            displaybook();
            break;
        case 3:
            searchbook();
            break;
        case 4:
            printf("THANK YOU\n");
            break;
        default:
            printf("INVALID CHOICE\n");
    }
    }
    while(choice!=4);
    return 0;
}