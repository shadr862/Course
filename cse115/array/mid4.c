#include<stdio.h>
int main()
{
    int  Frq[10]={0},i,v;
    for(i=0;i<10;i++)
    {
        printf("enter variable:");
        scanf("%d",&v);
        Frq[v]++;

    }
    for(i=0;i<10;i++)
    {
        if(i%2==1)
            printf("%d: %d\n",i,Frq[i]);
    }
}
