// Write a program to Count digits in a number. 

#include<stdio.h>
int main()
{
    int num,count=0,a;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    a=num;

    while (a!=0)
    {
        a=a/10;
        count++;
    }
printf("\nNUMBER OF DIGITS IN %d = %d\n",num,count);

return 0;

}