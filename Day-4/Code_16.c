// Write a program to Print Armstrong numbers in a range.

#include<math.h>
#include<stdio.h>
int main() 
{
int a,digit,i,b,c;
printf("Enter starting number : ");
scanf("%d",&b);
printf("Enter ending number : ");
scanf("%d",&c);

printf("ARMSTRONG NUMBERS ARE : ");

for(i=b;i<=c;i++)
    {   int count=0,arm=0;
        a=i;
        while(a!=0)
            {
                a/=10;
                count++;
            }
        a=i;    
        while(a!=0)
            {   
                digit=a%10;
                arm+=pow(digit,count);
                a/=10;
            }
            if(i==arm)
                {
                    printf("%d ",i);
                }
    }
return 0;
}