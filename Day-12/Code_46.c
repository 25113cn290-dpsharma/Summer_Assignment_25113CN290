/* Write a program to Write function for Armstrong. */

#include<stdio.h>
#include<math.h>
int Armstrong(int x)
    {   int digit,sum=0,a,count=0;
        a=x;
        while(a!=0)
            {
                a=a/10;
                count++;
            }
        a=x;
        while(x!=0)
            {
                digit=x%10;
                sum=sum+pow(digit,count);
                x/=10;
            }
        if (a==sum)
            return 1;
        else 
            return 0;           
    }

int main()
    {
        int num;
        printf("Enter the number : ");
        scanf("%d",&num);

        if(Armstrong(num))
            printf("ARMSTRONG NUMBER\n");
        else
            printf("NOT A ARMSTRONG NUMBER\n");

    return 0;
    }