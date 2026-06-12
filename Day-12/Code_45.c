/* Write a program to Write function for palindrome. */

#include<stdio.h>
int palindrome(int x)
    {   int digit,reverse=0,a;
        a=x;
        while(x!=0)
            {
                digit=x%10;
                reverse=reverse*10+digit;
                x/=10;
            }
        if (a==reverse)
            return 1;
        else 
            return 0;           
    }

int main()
    {
        int num;
        printf("Enter the number : ");
        scanf("%d",&num);

        if(palindrome(num))
            printf("PALINDROME NUMBER\n");
        else
            printf("NOT A PALINDROME NUMBER\n");

    return 0;
    }