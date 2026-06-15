// Write a program to Reverse array.

#include<stdio.h>
int main()
{
    int arr[100], n, i;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter %d elements :\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int ar[100];

    for(i=0;i<n;i++)
        {
            ar[i]=arr[n-1-i];
        }
    printf("REVERSE ARRY : ");
    for(i=0;i<n;i++)
        {
            printf("%d ",ar[i]);
        }
    
        return 0;
}