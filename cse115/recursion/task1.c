#include<stdio.h>
float s1(int n);
float s2(int r);
int fact (int n);
int sod(int n);
int prime(int n,int i);
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("%f\n",s1(n));
    printf("%f\n",s2(n));
    printf("%d\n",fact(n));
    printf("%d\n",sod(n));
    printf("%d",prime(n,n/2));

}
float s1(int n)
{
    if (n==0)
        return 0;
    else
        return (1.0/n)+s1(n-1);
}
float s2(int r)
{
    if (r==0)
        return 0;
    else
        return (2*r-1)/(2.0*r)+s2(r-1);
}
int fact (int n)
{
    if (n==1)
        return 1;
    else
        return n*fact(n-1);

}
int sod(int n)
{
    int r,t,sum=0;
    if (n==0)
        return 0;
    else
    {
        r=n%10;
        t=n/10;
        sum=sum+r;
    }
    return sum+sod(t);
}
int prime(int n,int i)
{
    if(n==1)
        return 0;
     if(i==1)
            return 1;
    else
    {
        if(n%i==0)
            return 0;
        else

            return prime(n,i-1);
    }
}
