#include<stdio.h>
void swaping(int *x,int *y);
void sorting(int *ptr,int n);
int main()
{
    int n,i,A[10];
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    sorting(A,n);
    for(i=0;i<n;i++)
    {
        printf("%d,",A[i]);
    }
}
void sorting(int *ptr,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+i)<*(ptr+j))
            {
                swaping(&*(ptr+i),&*(ptr+j));
            }
        }
    }
}
void swaping(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
