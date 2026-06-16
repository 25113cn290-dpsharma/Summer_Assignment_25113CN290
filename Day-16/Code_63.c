// Write a program to Find pair with given sum.

#include<stdio.h>
int main()
{
    int arr[100],n,i,j,found=0,sum;

    printf("Enter the number of elements in array : ");
    scanf("%d",&n);

    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("Enter the required sum : ");
    scanf("%d", &sum);

    printf("Pairs with sum %d are:\n",sum);
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    if(found==0)
    {
        printf("No pair found.\n");
    }
      return 0; 
}