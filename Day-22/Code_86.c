// Write a program to Count words in a sentence.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i=0,count=1;
    printf("Enter the string : ");
    fgets(str,100,stdin);
    
    while(str[i]!='\0')
        {
            if(str[i]==' ')
                {
                    count++;
                }
        i=i+1;
        }
    printf("The number of worlds = %d \n",count);
    
    return 0;

}