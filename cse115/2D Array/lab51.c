#include<stdio.h>
int main()
{
    int i,j,row=3,col=3,n,flag=0;
    int A[100][100];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(n==A[i][j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
        printf("found");
    else
        printf("not found");
}
