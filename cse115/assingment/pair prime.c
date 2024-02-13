#include<stdio.h>
int isprime(int n);
int main()
{
    int a,b;
    printf("enter two num a to b:");
    scanf("%d%d",&a,&b);
    if(isprime(a)&&isprime(b)&&((a+2==b||b+2==a)))
        printf("pair");
    else
        printf("not pair");
    return 0;
}
int isprime(int n)
{
    int j,flag=1;
    if(n==1)
        flag=0;
    for(j=2;j<=n/2;j++)
    {
        if(n%j==0)
        {
             flag=0;
        break;
        }

    }
    return flag;
}


