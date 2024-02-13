#include<stdio.h>
int main()
{
    int A[5]={1,2,3,4,5};
    int *ptr,i,j,t;
    ptr=A;
    for(i=0;i<5;i++)
    {
        printf("%d,",*(ptr+i));
    }
    printf("\nreverse array:\n");
    for(i=0,j=5-1;i<5/2;i++,j--)
    {
       t=*(ptr+i);
       *(ptr+i)=*(ptr+j);
       *(ptr+j)=t;
    }
    for(i=0;i<5;i++)
    {
        printf("%d,",*(ptr+i));
    }

}
