#include<stdio.h>
void sorting(int *ptr,int n);
int main()
{
    int A[100],i,n;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    sorting(A,n);
    for(i=0;i<n;i++)
        printf("%d,",A[i]);

}
void sorting(int *ptr,int n)
{
    int i,j,y;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+i)>*(ptr+j))
            {
                y=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=y;
            }
        }
    }
}
