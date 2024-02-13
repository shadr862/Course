#include<stdio.h>
void search(int b[],int size,int value);
int main()
{
    int A[5]={1,2,3,4,5};
    int find;
    printf("enter size");
    scanf("%d",&find);
    search(A,find,5);

    return 0;
}
void search(int b[],int size,int value)
{
    int i=0,found=0;
    while(i<value)
    {
        if(b[i]==size)
           {
                found=1;;
            break;
           }
        else
        i++;
    }
if(found==1)
    printf("value found at index %d",i);
else
    printf("not found");
}
