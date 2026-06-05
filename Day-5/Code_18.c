// Write a program to Check strong number.

#include<stdio.h>
int main()
{
    int n,a,i,digit,sum=0,fact;
    printf("Enter the number : ");
    scanf("%d",&n);
    a=n;
    while(n!=0)
        {
            digit=n%10;
            fact=1;
            for(i=1;i<=digit;i++)
                {   
                    fact=fact*i;
                }
            sum=sum+fact;
            n=n/10;

        }
    
    if(sum==a)
        {
            printf("\nSTRONG NUMBER\n");
        }
    else
        {
            printf("\nNOT STRONG NUMBER\n");
        }
    return 0;
 } 