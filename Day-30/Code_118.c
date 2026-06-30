// Write a program to Create mini library system.

#include <stdio.h>
int main() 
{
    int n,i;
    int bookid[50];
    char title[50][50];
    char author[50][50];

    printf("Enter number of books : ");
    scanf("%d",&n);

    for(i=0;i<n;i++) 
    {
        printf("\nEnter details of Book %d\n",i+1);
        printf("Book ID : ");
        scanf("%d",&bookid[i]);
        printf("Book Title : ");
        scanf("%s",title[i]);
        printf("Author Name : ");
        scanf("%s",author[i]);
    }

    printf("\n------ Library Books ------\n");
    printf("ID\tTitle\t\tAuthor\n");

    for(i=0;i<n;i++) 
    {
        printf("%d\t%s\t\t%s\n",bookid[i],title[i],author[i]);
    }

    return 0;
}