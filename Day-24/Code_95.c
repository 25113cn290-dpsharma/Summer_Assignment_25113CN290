// Write a program to Find longest word.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[200],longest[100];
    int i=0,j=0;
    int maxLen=0,len=0;
    printf("Enter a string : ");
    fgets(str,200,stdin);

    char word[100];

    while(str[i]!='\0')
    {
        if(str[i]!=' '&&str[i]!='\n')
        {
            word[j++]=str[i];
            len++;
        }
        else
        {
            word[j]='\0';
            if (len>maxLen)
            {
                maxLen=len;
                strcpy(longest,word);
            }
            len=0;
            j=0;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);
    return 0;
}