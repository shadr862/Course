#include<stdio.h>
void sum(int* ptr1,int* ptr2);
int main()
{
    int A[5]={1,2,3,4,5},B[5]={5,4,3,2,1};
    sum(A,B);
}
void sum(int* ptr1,int* ptr2)
{
    int i;
    for(i=0;i<5;i++)
    {
       printf("%d,",*(ptr1+i)+*(ptr2+i));
    }
}
