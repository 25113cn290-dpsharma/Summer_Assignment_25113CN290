// Write a program to Sort array in descending order.

#include<stdio.h>
int main()
{
    int n,i,j,temp,arr[100];
    printf("Enter the number of elements in array : ");
    scanf("%d",&n);

    printf("Enter elements : \n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

    for (i=0;i<n-1;i++) 
        {
            for (j=i+1;j<n;j++) 
                {
                    if (arr[j] > arr[i]) 
                        {
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                }
        }
    printf("Array in descending order : ");
    for (i=0;i<n;i++) 
        {   
            printf("%d ", arr[i]);
        }
    return 0;

}