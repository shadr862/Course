#include<stdio.h>
float seriesSum(int n);
int main()
{
    int n;
    float r;
    printf("enter n:");
    scanf("%d",&n);
    r=seriesSum(n);
    printf("result=%f",r);
    return 0;
}
float seriesSum(int n)
{
    if(n==0)
        return 0;
    else
      return  (2*n-1)/(2.0*n)+seriesSum(n-1);
}
