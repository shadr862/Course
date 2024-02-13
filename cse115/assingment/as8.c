#include<stdio.h>
float estimatePi(int n);
int main()
{
    int i;
    for(i=1;i<=901;i=i+100)
   printf("%d\t\tf(n)=%f\n",i,estimatePi(i));

    return 0;
}
float estimatePi(int n)
{
    int i;
    float sum1=0,sum2=0;
    for(i=1;i<=n;i++)
        if(i%2==1)
    {
        sum1=sum1+(1.0/(2*i-1));
    }
    else
    {
      sum2=sum2+(1.0/(2*i-1));
    }
    return 4*(sum1-sum2);
}


