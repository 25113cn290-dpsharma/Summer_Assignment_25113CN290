// Write a program to Find row-wise sum.

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
    for(i=0;i<r;i++)
        {
            sum=0;
            for(j=0;j<c;j++)
                {
                    sum=sum+m1[i][j];
                }
            printf("SUM OF ROW %d = %d \n",i+1,sum);
        }
    return 0;
}