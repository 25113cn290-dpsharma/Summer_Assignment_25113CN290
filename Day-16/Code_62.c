// Write a program to Find maximum frequency element.

#include<stdio.h>
int main()
{
    int arr[100],n,i,j,element;
    int maxf=0;
    printf("Enter the number of elements in array : ");
    scanf("%d",&n);

    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

    for(i=0;i<n;i++)
        {
            int count=0;
            for(j=0;j<n;j++)
                {
                    if(arr[i]==arr[j])
                        {
                            count++;
                            
                        }
                }
            if(maxf<count)
                {
                    maxf=count;
                    element=arr[i];
                }
        }
    printf("ELEMENT WITH MAXIMUM FREQUENCY = %d \n",element);
    return 0;
        
}