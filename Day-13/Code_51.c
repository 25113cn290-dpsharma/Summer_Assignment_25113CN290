// Write a program to Find largest and smallest element.

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
    int max=0,min=0;

    for(i=0;i<n;i++)
        {
            if(arr[max]<arr[i])
                {
                    max=i;
                }
        }
    for(i=0;i<n;i++)
        {
            if(arr[min]>arr[i])
                {
                    min=i;
                }
        }
    printf("MAX = %d\n",arr[max]);
    printf("MIN = %d\n",arr[min]);
    return 0;
}