#include<stdio.h>
typedef struct person
{
    char name[20];
    int id;
    int p[20];
    char dept[20];
}std;
std print(int n);
int main()
{
    std h[30],d;
    int n;
    printf("enter n:");
    scanf("%d",&n);
    d=print(n);
    int i,j;
    for(i=0;i<n;i++)
    {
        puts(h[i].name);
        printf("%d",(*h).id);
        for(j=0;j<2;j++)
        {
            printf("%d\n",h[i].p[j]);
        }
        puts(h[i].dept);
    }

}
std print(int n)
{
    std ptr[20];
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("enter name:");
        fflush(stdin);
        gets(ptr[i].name);
        printf("\nenter id:");
        scanf("%d",&ptr->id);
        printf("\nentere phone:");
        for(j=0;j<2;j++)
        {
            scanf("%d",&ptr[i].p[j]);
        }
        printf("\nenter dept:");
        fflush(stdin);
        gets(ptr[i].dept);
        fflush(stdin);

    }
    return ptr;
}



