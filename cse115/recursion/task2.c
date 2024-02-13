#include<stdio.h>
int fibonacci(int n);
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("%d",fibonacci(n));
    return 0;
}
int fibonacci(int n)
{
    int ans;
    if(n==0||n==1)
        return ans=1;
    else
        ans=fibonacci(n-2)+fibonacci(n-1);
    return ans;
}
