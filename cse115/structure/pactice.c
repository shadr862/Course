#include<stdio.h>
typedef struct person
{
    char name[20];
    int id;
    int p[20];
    char dept[20];
}std;
//void print(std n);
int main()
{
    std st[40],*ptr;
    ptr=st;
    int i,n,j;
    printf("enter n:");
    scanf("%d",&n);
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
    for(i=0;i<n;i++)
    {
        puts(ptr[i].name);
        printf("%d",(*ptr).id);
        for(j=0;j<2;j++)
        {
            printf("%d\n",ptr[i].p[j]);
        }
        puts(ptr[i].dept);
    }

}


