// Write a program to Find nth Fibonacci term. 

#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c ;
    printf("Enter the nth term : ");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }

printf("%d ",a);
return 0;

}