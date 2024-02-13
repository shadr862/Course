#include<stdio.h>
int minV(int *ptr1,int size);
int maxV(int *ptr2,int size);
int sumV(int *ptr,int size);
int main()
{
    int *ptr,n,i,min,max,sum;
    printf("enter n:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    min=minV(ptr,n);
    printf("minimum=%d\n",min);
    max=maxV(ptr,n);
    printf("maximum=%d\n",max);
    sum=sumV(ptr,n);
    printf("sum=%d",sum);

}
int minV(int *ptr1,int size)
{
    int i,min=ptr1[0];
    for(i=0;i<size;i++)
    {
        if(min>ptr1[i])
        {
            min=ptr1[i];
        }
    }
    return min;
}
int maxV(int *ptr2,int size)
{
    int i,max=ptr2[0];
    for(i=0;i<size;i++)
    {
        if(max<ptr2[i])
        {
            max=ptr2[i];
        }
    }
    return max;

}
int sumV(int *ptr,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+*(ptr+i);
    }
    return sum;
}


