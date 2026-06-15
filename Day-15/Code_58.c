// Write a program to Rotate array left.

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
    int x=arr[0];
    for(i=0;i<n-1;i++)
        {
            ar[i]=arr[i+1];
        }
    
    printf("Array after left rotation:\n");
    ar[n-1]=x;
    for(i=0;i<n;i++)
        {
            printf("%d ",ar[i]);
        }
    
    return 0;
}