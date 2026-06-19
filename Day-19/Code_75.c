// Write a program to Transpose matrix.

#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("Enter rows in matrix  : ");
    scanf("%d",&r);
    printf("Enter column in matrix  : ");
    scanf("%d",&c);
    int m1[r][c];
    int trans[c][r];

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
            for(j=0;j<c;j++)
                {
                    trans[j][i]=m1[i][j];
                }
        }

    printf("TRANSPOSE OF MATRICES IS : \n");
    
    for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
                {
                    printf("%d ",trans[i][j]);
                }
            printf("\n");
        }
        
    return 0;
}