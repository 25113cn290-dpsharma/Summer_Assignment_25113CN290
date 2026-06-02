// Write a program to find Reverse a number. 

#include<stdio.h>
int main()
{
int num,i,rev=0,digit;
printf("Enter a number : ");
scanf("%d",&num);

while(num!=0)
    { 
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }

printf("\nREVERSE NUMBER = %d\n",rev);
return 0;

}