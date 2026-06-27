// Write a program to Create salary management system.

#include <stdio.h>

int main()
{
    int id;
    char name[50];
    float basic, hra, da, pf, salary;

    printf("===== Salary Management System =====\n");

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    printf("Enter HRA: ");
    scanf("%f", &hra);

    printf("Enter DA: ");
    scanf("%f", &da);

    printf("Enter PF: ");
    scanf("%f", &pf);

    salary = basic + hra + da - pf;

    printf("\n----- Employee Details -----\n");
    printf("Employee ID   : %d\n", id);
    printf("Employee Name : %s\n", name);
    printf("Basic Salary  : %.2f\n", basic);
    printf("HRA           : %.2f\n", hra);
    printf("DA            : %.2f\n", da);
    printf("PF            : %.2f\n", pf);
    printf("Net Salary    : %.2f\n", salary);

    return 0;
}