// Write a program to Add matrices.

#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("Enter rows in matrix  : ");
    scanf("%d",&r);
    printf("Enter column in matrix  : ");
    scanf("%d",&c);
    int m1[r][c];
    int m2[r][c];

    printf("Enter elements in m1 : \n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                    scanf("%d",&m1[i][j]);
                }
        }
    printf("Enter elements in m2 : \n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                    scanf("%d",&m2[i][j]);
                }
        }
    
    int sum[r][c];

    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                    sum[i][j]=m1[i][j]+m2[i][j];
                }
        }

    printf("SUM OF 2 MATRICES IS : \n");
    
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                    printf("%d ",sum[i][j]);
                }
            printf("\n");
        }
        
    return 0;
}