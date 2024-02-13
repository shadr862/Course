int main()
{
    int i,j,n,sum=0,innersum=0,ts;
    int A[100][100];
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
         {
              scanf("%d",&A[i][j]);
         }
    }
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++){
        printf("%d\t",A[i][j]);
        if(i==j||i+j==n-1)
        {
        sum=sum+A[i][j];
        }
         }
          printf("\n");
    }
    printf("sum=%d",sum);

return 0;
}
