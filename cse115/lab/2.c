#include<stdio.h>
typedef struct
{
    char name[20];
    int id;
    float price;
} p;
int main()
{
    int i;
    int std=0;
    p st[20];
    FILE *fp;
    fp=fopen("rm.txt","r");
    if(fp==NULL)
    {
        printf("not created");
    }
    else
    {
        i=0;
        while(!feof(fp))
        {
            fgets(st[i].name,20, fp);
            fscanf(fp,"%d",&st[i].id);
            fscanf(fp,"%f",&st[i].price);
            fgetc(fp);
            i++;
            std++;
        }
        std--;
    }
    fclose(fp);
    printf("student num:%d",std);
    float max=st[0].price;
    for(i=0; i<std; i++)
    {
        if(max<st[i].price)
        {
            max=st[i].price;
        }
    }
    printf("hgp:%f",max);
}
