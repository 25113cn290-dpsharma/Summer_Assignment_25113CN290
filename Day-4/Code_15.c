// Write a program to Check Armstrong number.

#include<math.h>
#include<stdio.h>
int main()
{
    int n,count=0,arm=0,a,digit;
    printf("Enter the number : ");
    scanf("%d",&n);
    a=n;
while(a!=0)
   {
        a/=10;
        count++;
   }

a=n;

while(n!=0)
    {   
       digit=n%10;
       arm+=pow(digit,count);
       n/=10;
    }
if(a==arm)
    printf("\n ARMSTRONG NUMBER \n");
else
    printf("\n NOT ARMSTRONG NUMBER \n");

return 0;

}