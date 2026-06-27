// Write a program to Create employee management system.

#include <stdio.h>
#include <string.h>

struct Employee 
{
    int empid;
    char name[50];
    float salary;
};

struct Employee s[100];
int count=0;

void addemployee() {
    printf("Enter Employee id: ");
    scanf("%d", &s[count].empid);
    printf("Enter Name: ");
    scanf("%s", s[count].name);
    printf("Enter salary: ");
    scanf("%f", &s[count].salary);
    count++;
    printf("Employee Record Added Successfully!\n");
}

void displayemployee() 
{
    int i;
    if (count==0) 
    {
        printf("No records found!\n");
        return;
    }
    printf("\nEmployee Records:\n");
    printf("Employee id\tName\tsalary\n");

    for (i=0;i<count;i++) 
    {
        printf("%d\t%s\t%.2f\n",s[i].empid,s[i].name,s[i].salary);
    }
}

void searchemployee() 
{
    int id, i, found = 0;
    printf("Enter Employee id to Search: ");
    scanf("%d", &id);
    for (i=0;i<count;i++) 
    {
        if (s[i].empid==id) 
        {
            printf("\nRecord Found:\n");
            printf("Roll No: %d\n", s[i].empid);
            printf("Name: %s\n", s[i].name);
            printf("salary: %.2f\n", s[i].salary);
            found=1;
            break;
        }
    }

    if (!found)
        printf("Employee Record Not Found!\n");
}

void deleteemployee() 
{
    int id, i, j, found = 0;
    printf("Enter Employee id to Delete: ");
    scanf("%d", &id);

    for (i=0;i<count;i++)
    {
        if (s[i].empid==id) 
        {
            for (j=i;j<count-1;j++) 
            {
                s[j] = s[j+1];
            }
            count--;
            found = 1;
            printf("Record Deleted Successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Employee Record Not Found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Employee Record Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");
        printf("Enter your Choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                addemployee();
                break;
            case 2:
                displayemployee();
                break;
            case 3:
                searchemployee();
                break;
            case 4:
                deleteemployee();
                break;
            case 5:
                printf("THANK YOU\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } 
    while (choice != 5);
    return 0;
}