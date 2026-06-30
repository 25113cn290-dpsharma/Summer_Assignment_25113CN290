// Write a program to Develop complete mini project using arrays, strings and functions.

#include <stdio.h>

int roll[100];
char name[100][50];
float marks[100];
int count=0;

void addStudent()
{
    printf("\nEnter Roll Number : ");
    scanf("%d",&roll[count]);

    printf("Enter Name : ");
    scanf("%s",name[count]);

    printf("Enter Marks : ");
    scanf("%f",&marks[count]);
    count++;
    printf("Student added successfully.\n");
}

void displayStudents()
{
    int i;
    if(count==0)
    {
        printf("\nNo student records found.\n");
        return;
    }

    printf("\n----- Student Records -----\n");
    printf("Roll\tName\tMarks\n");

    for(i=0;i<count;i++)
    {
        printf("%d\t%s\t%.2f\n",roll[i],name[i],marks[i]);
    }
}

void searchStudent()
{
    int i,r,found=0;
    printf("Enter Roll Number to search : ");
    scanf("%d", &r);

    for(i=0;i<count;i++)
    {
        if(roll[i]==r)
        {
            printf("\nStudent Found\n");
            printf("Roll Number : %d\n",roll[i]);
            printf("Name        : %s\n",name[i]);
            printf("Marks       : %.2f\n",marks[i]);
            found=1;
            break;
        }
    }

    if(found==0)
        printf("Student not found.\n");
}

int main()
{
    int choice;
    do
    {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
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