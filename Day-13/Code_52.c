// Write a program to Count even and odd elements.

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

    int evencount=0,oddcount=0;
    for(i=0;i<n;i++)
        {
            if(arr[i]%2==0)
                {
                    evencount++;
                }
            else
                {
                    oddcount++;
                }
            }
    printf("EVEN COUNT = %d\n",evencount);
    printf("ODD COUNT = %d\n",oddcount);
    return 0;
}