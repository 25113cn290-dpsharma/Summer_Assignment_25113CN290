/* Write a program to Write function for perf number. */

#include<stdio.h>
int perfect(int x)
    {
        int a,i,perf=0;
        a=x;
        for(i=1;i<=x/2;i++)
            {
                if(x%i==0)
                    {   
                        perf=perf+i;
                    }
            }
        if(a==perf)
            {
                return 1;
            }
        else
            {
                return 0;
            }

}

int main()
    {
        int num;
        printf("Enter the number : ");
        scanf("%d",&num);

        if(perfect(num))
            printf("PERFECT NUMBER\n");
        else
            printf("NOT A PERFECT NUMBER\n");

    return 0;
    }