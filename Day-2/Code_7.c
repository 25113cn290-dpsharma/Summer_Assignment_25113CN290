// Write a program to Find product of digits.

#include<stdio.h>
int main()
{
int num,i,product=1,digit;
printf("Enter a number : ");
scanf("%d",&num);

while(num!=0)
    { 
        digit=num%10;
        product=digit*product;
        num=num/10;
    }

printf("\nPRODUCT OF DIGITS = %d\n",product);
return 0;

}