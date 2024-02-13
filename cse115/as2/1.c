#include<stdio.h>
int main()
{
    int i;
    for(i=20;i>=0;i--)
    {
        if(i==17||i==13||i==3)
        {
            continue;
        }
        else
            printf("%d,",i);
    }
}
