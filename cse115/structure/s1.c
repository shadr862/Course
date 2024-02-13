#include<stdio.h>
typedef struct nsu
{
    char name[20];
    int id;
    float cgpa;

} p;
int main()
{
     int i;
    p std[3];
    for(i=0; i<3; i++)
    {
        printf("enter name:%d\n",i+1);
        gets(std[i].name);
        printf("enter id:\n");
        scanf("%d",&std[i].id);
        printf("enter cgpa:\n");
        scanf("%f",&std[i].cgpa);
        fflush(stdin);
    }
    float min=std[0].cgpa;
    int ind=0;
    for(i=0; i<3; i++)
    {
        if(min>std[i].cgpa)
        {
            min=std[i].cgpa;
            ind=i;
        }
    }
printf("name=%s\nid=%d\ncgpa=%f",std[ind].name,std[ind].id,std[ind].cgpa);
}
