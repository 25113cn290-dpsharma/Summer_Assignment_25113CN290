// Write a program to Find sum of digits of a number. 

#include<stdio.h>
int main()
{
int num,i,sum=0,digit;
printf("Enter a number : ");
scanf("%d",&num);

while(num!=0)
    { 
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }

printf("\nSUM OF DIGITS = %d\n",sum);
return 0;

}