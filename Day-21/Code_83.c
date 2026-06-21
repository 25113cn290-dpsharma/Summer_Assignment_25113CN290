// Write a program to Count vowels and consonants.

#include<stdio.h>
#include<ctype.h>
int main()
{   
    int i=0,vowels=0,consonants=0;
    char str[100];
    printf("Enter the string : ");
    scanf("%s",str);

    for(i = 0; str[i] != '\0'; i++) 
        {
            char ch = tolower(str[i]);
            if(ch>='a'&&ch<='z') 
                {
                    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                        vowels++;
                    else
                        consonants++;
                }
        }
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    return 0;
}