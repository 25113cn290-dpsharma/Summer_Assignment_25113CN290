// Write a program to Check whether a number is prime. 

#include<stdio.h>
int main()
{
    int num,i,flag=0;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {   
            flag=1;
            break;
        }
    }
if(flag==0)
    printf("\nPRIME NUMBER \n");
else
    printf("\n NOT A PRIME NUMBER \n");

}
