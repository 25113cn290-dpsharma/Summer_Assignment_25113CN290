// Write a program to Create menu-driven string operations system.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char str[100];
void input()
{
    getchar();
    printf("Enter a string : ");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
}

void display()
{
    printf("String: %s\n",str);
}

void length()
{
    printf("Length = %lu\n",strlen(str));
}

void reverse()
{
    char temp[100];
    int i, j=0;

    for(i=strlen(str)-1;i>=0;i--)
    {
        temp[j] = str[i];
        j++;
    }
    temp[j]='\0';
    printf("Reversed String: %s\n",temp);
}

void uppercase()
{
    char temp[100];
    int i;
    strcpy(temp, str);
    for(i=0;temp[i]!='\0';i++)
    {
        temp[i]=toupper(temp[i]);
    }

    printf("Uppercase String: %s\n",temp);
}

int main()
{
    int choice;
    do
    {
        printf("\n\n===== STRING OPERATIONS =====\n\n");
        printf("1. Input String\n");
        printf("2. Display String\n");
        printf("3. Find Length\n");
        printf("4. Reverse String\n");
        printf("5. Convert to Uppercase\n");
        printf("6. Exit\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                input();
                break;

            case 2:
                display();
                break;

            case 3:
                length();
                break;

            case 4:
                reverse();
                break;

            case 5:
                uppercase();
                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    } 
    while(choice!=6);
    return 0;
}