// Write a program to Rotate array right.

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
    int x=arr[n-1];
    for(i=1;i<n;i++)
        {
            ar[i]=arr[i-1];
        }
    
    printf("Array after right rotation:\n");
    ar[0]=x;
    for(i=0;i<n;i++)
        {
            printf("%d ",ar[i]);
        }
    
    return 0;
}