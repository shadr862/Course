#include<stdio.h>
int main()
{
    int A[5]= {1,3,5,5,7},i,n;
    int* ptr;
    ptr=A;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0; i<5; i++)
    {
        if(n==*(ptr+i))

        {
            printf("index=%d  address=%x\n",i,(ptr+i));
        }

    }
}
