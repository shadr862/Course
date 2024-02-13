#include<stdio.h>
int maximum(int num[],int n);
int main()
{
    int num[100],i,n,max;
    printf("how many num:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
   max=maximum(num,n);
    printf("max=%d",max);

    return 0;

}
int maximum(int num[],int n)
{
    int i,max=num[0];
    for(i=1; i<n; i++)
    {
        if(max<num[i])
            max=num[i];
    }
 return max;
}
