// Write a program to Find maximum occurring character.

#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,j,flag,maxcount=0;
    printf("Enter the string : ");
    fgets(str,100,stdin);

    for(i=0;str[i]!='\0';i++)
        {
            flag=1;
            for(j=0;str[j]!='\0';j++)
                {
                    if(i!=j && str[i]==str[j])
                        {
                            flag++;
                        }
                }
            if(flag > maxcount)
                {
                    maxcount = flag;
                    ch = str[i];
                }
        } 
    printf("Maximum occurring character = %c\n",ch);
    printf("Frequency = %d\n", maxcount);  
    return 0;
}