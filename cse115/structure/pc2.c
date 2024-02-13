#include<stdio.h>
typedef struct person
{
    char name[20];
    int id;
    int p[20];
    char dept[20];
}std;
void print(std *d,int n);
int main()
{
    std ptr[20];
    int i,n,j;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter name:");
        fflush(stdin);
        gets(ptr[i].name);
        printf("\nenter id:");
        scanf("%d",&ptr[i].id);
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
   print(ptr,n);
}
void print(std *d,int n)
{
    int i,j;
     for(i=0;i<n;i++)
    {
        puts(d->name);
        printf("%d",(*d).id);
        for(j=0;j<2;j++)
        {
            printf("%d\n",(*d).p[j]);
        }
        puts((*d).dept);
    }

}


