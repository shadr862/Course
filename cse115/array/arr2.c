#include<stdio.h>
void rev(int R[],int n);
int main()
{
    int arrA[100],i,n;
    printf("arry element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arrA[i]);
    }

rev(arrA,n);
    return 0;

}
void rev(int R[],int n)
{
    int i,j,t;
 for(i=0,j=n-1;i<n/2;i++,j--)
    {
        t=R[i];
        R[i]=R[j];
        R[j]=t;
    }
    for(i=0;i<n;i++)
    {
         printf("%d,",R[i]);

    }
}
