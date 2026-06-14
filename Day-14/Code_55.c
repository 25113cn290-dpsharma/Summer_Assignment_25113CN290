// Write a program to Second largest element.

#include<stdio.h>
int main()
    {
        int arr[100],i,n;
        printf("Enter the number of elements : ");
        scanf("%d",&n);

        printf("Enter the elements : \n");
        for(i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);
            }
        int max=0,smax=0;
        for(i=0;i<n;i++)
        {
            if(arr[max]<arr[i])
                {
                    smax=max;
                    max=i;
                }
        }
        printf("SECOND LARGEST = %d\n",arr[smax]);
        
        return 0;
    }