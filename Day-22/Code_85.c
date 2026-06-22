// Write a program to Check palindrome string.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int n,i=0,flag=0;
    printf("Enter the string : ");
    scanf("%s",str);
    n=strlen(str);
    
    while(str[i]!='\0')
        {
            if(str[i]!=str[n-1-i])
                {
                    flag=1;
                    break;
                }
            i+=1;
        }
    
    if(flag==0)
        {
            printf("PALINDROME STRING \n");
        }
    else
        {
            printf("NOT A PALINDROME STRING\n");
        }

    return 0;

}