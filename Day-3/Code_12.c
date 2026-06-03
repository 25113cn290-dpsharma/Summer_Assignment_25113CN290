// Write a program to Find LCM of two numbers

#include<stdio.h>

int main()
{
    int num1, num2, max, i;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    max = (num1 > num2) ? num1 : num2;
    while(1)
    {
        if(max % num1 == 0 && max % num2 == 0)
        {
            printf("\nLCM = %d\n", max);
            break;
        }
        max++;
    }
    return 0;
}