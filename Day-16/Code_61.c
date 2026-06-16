// Write a program to Find missing number in array.

#include<stdio.h>
int main()
{
    int arr[100],n,i,actualsum=0,expectedsum,missing;
    printf("Enter the number of elements in array : ");
    scanf("%d",&n);

    printf("Enter the elements : \n");
    for(i=0;i<n-1;i++)
        {
            scanf("%d",&arr[i]);
            actualsum += arr[i];
        }

    expectedsum = n * (n + 1) / 2;
    missing = expectedsum - actualsum;
    printf("Missing number is: %d\n", missing);

    return 0;
        
}