// Write a program to Remove spaces from string.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str2[100],ch;
    int i=0,j=0;
    printf("Enter the string : ");
    fgets(str,100,stdin);

    while(str[i]!='\0')
        {
            if(str[i]!=' ')
                {
                    str2[j]=str[i];
                    j=j+1;
                }
        i=i+1;
        }

    str2[j] = '\0';
    printf("%s \n",str2);
    
    return 0;

}