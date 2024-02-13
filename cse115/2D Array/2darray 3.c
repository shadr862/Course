#include<stdio.h>
int main()
{
    int A[100][100],row=3,col=4,i,j,sum=0,n;
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
    printf("enter n:\n");
    scanf("%d",&n);
    for(i=0,j=n-1;i<row;i++)
    {
        sum=sum+A[i][j];
    }
    printf("for col %d sum=%d",n,sum);

}
