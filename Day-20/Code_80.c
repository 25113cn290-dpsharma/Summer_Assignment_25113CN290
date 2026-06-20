// Write a program to Find column-wise sum.

#include<stdio.h>
int main()
{
    int i,j,r,c,sum;
    printf("Enter rows in matrix  : ");
    scanf("%d",&r);
    printf("Enter column in matrix  : ");
    scanf("%d",&c);
    int m1[r][c];

    printf("Enter elements in m1 : \n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                    scanf("%d",&m1[i][j]);
                }
        }
    for(i=0;i<c;i++)
        {
            sum=0;
            for(j=0;j<r;j++)
                {
                    sum=sum+m1[j][i];
                }
            printf("SUM OF COLUMNS %d = %d \n",i+1,sum);
        }
    return 0;
}