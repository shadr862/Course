#include<stdio.h>
int main()
{
    int A[100][100],row=3,col=4,i,j,tm[100][100];
    printf("input for:A\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            tm[i][j]=A[j][i];
        }
        printf("\n");
    }
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",tm[i][j]);
        }
        printf("\n");
    }


}

