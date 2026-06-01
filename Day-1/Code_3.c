// Write a program to Find factorial of a number.

#include<stdio.h>
int main()
{
    int num,i,product=1;
    printf("\nEnter a number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        product=product*i;
    }

printf("\nFACTORIAL OF %d = %d\num",num,product);

}