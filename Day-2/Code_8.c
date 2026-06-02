// Write a program to Check whether a number is palindrome. 

#include<stdio.h>
int main()
{
int num,i,rev=0,digit,a;
printf("Enter a number : ");
scanf("%d",&num);
a=num;
while(a!=0)
    { 
        digit=a%10;
        rev=rev*10+digit;
        a=a/10;
    }

if(rev==num)
    printf("\nPALINDROME NUMBER\n");
   

else
    printf("\nNOT PALINDROME\n");

}