// Write a program to Character frequency.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int n,i=0,count=0;
    printf("Enter the string : ");
    fgets(str,100,stdin);

    printf("Enter character : ");
    scanf("%c",&ch);
    
    while(str[i]!='\0')
        {
            if(str[i]==ch)
                {
                    count++;
                }
        i=i+1;
        }
    printf("The frequency of %c = %d \n",ch,count);
    
    return 0;

}