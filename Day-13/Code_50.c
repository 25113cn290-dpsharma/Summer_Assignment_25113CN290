// Write a program to Find sum and average of array.

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

    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    
    int avg;
    avg=sum/n;
    
    printf("SUM = %d\n",sum);
    printf("AVERAGE = %d\n",avg);
    return 0;
}