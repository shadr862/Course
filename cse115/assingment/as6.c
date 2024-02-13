#include<stdio.h>
int powN(int n);
int main()
{
    int i,n,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+powN(i);
    }
    printf("f(n)=%d",sum);
    return 0;
}
int powN(int n)
{
    int j,expo=n;

    for(j=1;j<n;j++)
        expo=expo*n;
    return expo;
}
