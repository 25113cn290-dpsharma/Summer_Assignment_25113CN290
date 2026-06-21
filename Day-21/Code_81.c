// Write a program to Find string length without strlen().

#include<stdio.h>
int main()
{   
    int count=0;
    char str[100];
    printf("Enter the string : ");
    scanf("%s",str);

    while(str[count]!='\0')
    {
        count++;
    }
    printf("Length of string = %d\n", count);
    return 0;
}