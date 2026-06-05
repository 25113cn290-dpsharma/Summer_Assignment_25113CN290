// Write a program to Find largest prime factor.

#include<stdio.h>

int main()
{
    int n, i, j, flag, largestPrime = 0;
    printf("Enter the number : ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        if(n % i == 0) 
        {
            flag = 1;
            for(j = 2; j <= i/2; j++)
            {
                if(i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if(flag == 1)
            {
                largestPrime = i;
            }
        }
    }
printf("Largest Prime Factor = %d\n", largestPrime);
return 0;
}