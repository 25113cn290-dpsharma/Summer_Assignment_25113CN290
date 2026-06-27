// Write a program to Create marksheet generation system.

#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;
};

int main()
{
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Marks of Subject 1: ");
    scanf("%f", &s.m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &s.m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &s.m3);

    printf("Enter Marks of Subject 4: ");
    scanf("%f", &s.m4);

    printf("Enter Marks of Subject 5: ");
    scanf("%f", &s.m5);

    s.total = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;

    s.percentage = s.total / 5;

    if (s.percentage >= 90)
        s.grade = 'A';
    else if (s.percentage >= 75)
        s.grade = 'B';
    else if (s.percentage >= 60)
        s.grade = 'C';
    else if (s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';

    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", s.rollNo);
    printf("Name        : %s\n", s.name);
    printf("\nMarks\n");
    printf("Subject 1 : %.2f\n", s.m1);
    printf("Subject 2 : %.2f\n", s.m2);
    printf("Subject 3 : %.2f\n", s.m3);
    printf("Subject 4 : %.2f\n", s.m4);
    printf("Subject 5 : %.2f\n", s.m5);
    printf("\nTotal      : %.2f\n", s.total);
    printf("Percentage : %.2f%%\n", s.percentage);
    printf("Grade      : %c\n", s.grade);

    return 0;
}