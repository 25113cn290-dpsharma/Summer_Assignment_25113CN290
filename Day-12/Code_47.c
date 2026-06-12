/* Write a program to Write function for Fibonacci. */

#include<stdio.h>
void fib(int x)
    {   int a=0,b=1,c,sum=0,i;
        printf("%d %d ",a,b);
        for(i=3;i<=x;i++)
            {
                c=a+b;
                printf("%d ",c);
                a=b;
                b=c;
            }          
    }

int main()
    {
        int num;
        printf("Enter the number of terms : ");
        scanf("%d",&num);
        fib(num);
        return 0;
    }