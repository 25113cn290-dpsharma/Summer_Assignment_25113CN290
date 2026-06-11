/* Write a program to Write function to check prime. */

#include <stdio.h>
int isprime(int a)
    {
        int i;
        for(i=2;i<=a/2;i++)
            {
                if(a%i==0)
                    {
                        return 0;
                    }
            }
            return 1;
    }
int main()
{
    int x,prime;
    printf("Enter the number : ");
    scanf("%d", &x);
    prime=isprime(x);
    if(prime==1)
        {
            printf("PRIME NUMBER\n");
        }
    else
        {
            printf("NOT A PRIME NUMBER\n");
        }
    return 0;
}