// Write a program to Check perfect number.

#include<stdio.h>
int main()
{
    int n,a,i,perfect=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    a=n;
    for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
                {
                    perfect=perfect+i;
                }
        }
    if(a==perfect)
        {
            printf("\nPERFECT NUMBER\n");
        }
    else
        {
            printf("\nNOT PERFECT NUMBER\n");
        }
return 0;

}
