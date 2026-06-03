// Write a program to Print prime numbers in a range.

#include<stdio.h>

int main()
{
    int num1, num2, i, j;
    printf("Enter the starting number : ");
    scanf("%d", &num1);

    printf("Enter the ending number : ");
    scanf("%d", &num2);

    printf("\nPrime numbers are:\n");

    for(i = num1; i <= num2; i++)
    {
        int flag = 0;
        if(i <= 1)
            continue;
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}