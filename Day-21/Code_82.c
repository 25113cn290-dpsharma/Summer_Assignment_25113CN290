// Write a program to Reverse a string.

#include<stdio.h>
int main()
{   
    int count=0,i;
    char str[100];
    printf("Enter the string : ");
    scanf("%s",str);

    while(str[count]!='\0')
    {
        count++;
    }
    
    for(int i=count-1;i>=0;i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}