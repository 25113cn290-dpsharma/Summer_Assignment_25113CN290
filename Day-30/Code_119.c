// Write a program to Create mini employee management system.

#include <stdio.h>
int main()
{
    int n,i;
    int empid[50];
    char name[50][50];
    float salary[50];

    printf("Enter number of employees : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter details of Employee %d\n",i+1);
        printf("Employee ID : ");
        scanf("%d",&empid[i]);
        printf("Employee Name : ");
        scanf("%s",name[i]);
        printf("Salary : ");
        scanf("%f",&salary[i]);
    }

    printf("\n------ Employee Records ------\n");
    printf("ID\tName\tSalary\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%.2f\n",empid[i],name[i],salary[i]);
    }

    return 0;
}