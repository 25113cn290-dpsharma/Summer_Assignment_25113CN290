// Write a program to Sort words by length.

#include<stdio.h>
#include<string.h>
int main()
{
 
    char name[10][20],temp[8];
    int i, j, n;
    printf("Enter the number of names : ");
    scanf("%d", &n);
    printf("Enter %d names  : \n", n);
    for (i=0;i<n;i++) 
        {
            scanf("%s",name[i]);
        }
 
    for (i=0;i<n-1;i++)
        {
            for (j=i+1;j<n;j++)
            {
                if (strlen(name[i])>strlen(name[j])) 
                {
                    strcpy(temp,name[i]);
                    strcpy(name[i],name[j]);
                    strcpy(name[j],temp);
                }
            }
        }
    printf("\nNames after sorting : \n");
    for (i = 0; i < n; i++) 
        {
            printf("%s\n",name[i]);
        }
    return 0;
 
}