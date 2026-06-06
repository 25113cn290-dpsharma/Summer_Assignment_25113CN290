// Write a program to Find x^n without pow().

#include<stdio.h>
int main()
{
    int x,n,i,pow=1;
    printf("Enter the number : ");
    scanf("%d",&x);
    
    printf("Enter the power : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        pow=pow * x;
    }
    printf("%d^%d = %d\n",x,n,pow);
    return 0;

}