#include<stdio.h>
typedef struct
{
    char name[20];
    int id;
    float price;
} p;
p write(p st[],int n);
int main()
{
    int i,n;
    int std=0;
    p st[20];
    printf("enter n:");
    scanf("%d",&n);
     for(i=0; i<n; i++)
    {
        printf("enter name:");
        fflush(stdin);
        gets(st[i].name);
        printf("\nenter id:");
        scanf("%d",&st[i].id);
        printf("\nenter price:");
        scanf("%f",&st[i].price);
        fflush(stdin);
    }
    p max=write(st,n);
    printf("name=%s\nid=%d\nprice=%f",max.name,max.id,max.price);
}
p write(p st[],int n)
{
    int i,ind=0;
    FILE *fp;
    fp=fopen("rms.txt","w");
      float m=st[0].price;
    if(fp==NULL)
    {
        printf("not created");
    }
    else
    {
    for(i=0; i<n; i++)
    {
        if(m<st[i].price)
        {
            m=st[i].price;
            ind=i;
        }
        fprintf(fp,"%s\n",st[i].name);
        fprintf(fp,"%d\n",st[i].id);
        fprintf(fp,"%f\n",st[i].price);

    }
    }
    fclose(fp);

    return st[ind];
}

