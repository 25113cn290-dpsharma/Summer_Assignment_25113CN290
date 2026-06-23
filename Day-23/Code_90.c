// Write a program to Find first repeating character.

#include<stdio.h>
int main()
{
    char str[100];
    int i,j,flag;
    printf("Enter the string : ");
    fgets(str,100,stdin);

    for(i=0;str[i]!='\0';i++)
        {
            flag=0;
            for(j=0;str[j]!='\0';j++)
                {
                    if(i!=j && str[i]==str[j])
                        {
                            flag=1;
                        }
                }
            if(flag==1)
                {
                    printf("FIRST REPEATING CHARACTER = %c\n", str[i]);
                    break;
                }
        }   
    return 0;
}