#include<stdio.h>
int factorial(int n);
float computeE(int n);
int main()
{
    int n;
    float com;
    printf("enter n:");
    scanf("%d",&n);
    com=computeE(n);
    printf("value of e is %f",com);
    return 0;
}
float computeE(int n)
{
    int i;
    float sum=1;
    for(i=1;i<=n;i++)
    {
        sum=sum+(1.0/factorial(i));
    }
    return sum;
}
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
        return fact;
}
