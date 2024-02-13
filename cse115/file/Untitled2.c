#include<stdio.h>
typedef struct
{
    char name[20];
    int id;
    char dept[10];
    float cgpa;
} std;
float hcg(std s[],int size);
int main()
{
    std st[3];
    int i;
    FILE *fp;
    fp=fopen("student.txt","w");
    if(fp==NULL)
    {
        printf("created");
    }
    else
    {
        for(i=0; i<3; i++)
        {
            printf("enter name:");
            fflush(stdin);
            gets(st[i].name);
            fprintf(fp,"%s\n",st[i].name);
            printf("\nenter id:");
            scanf("%d",&st[i].id);
            fprintf(fp,"%d\n",st[i].id);
            printf("\nenter dept:");
            fflush(stdin);
            gets(st[i].dept);
            fprintf(fp,"%s\n",st[i].dept);
            printf("\nenter cgpa:");
            scanf("%f",&st[i].cgpa);
            fprintf(fp,"%f\n",st[i].cgpa);
        }
    }
    fclose(fp);
    float   mc=hcg(st,3);

    printf("highest cg=%f",mc);

}
float hcg(std s[],int size)
{
    int i;
    float max;
    FILE *fp;
    fp=fopen("student.txt","r");
    if(fp==NULL)
    {
        printf("not found file");
    }
    else
    {
        max=s[0].cgpa;
        for(i=0; i<size; i++)
        {
            if(max<s[i].cgpa)
            {
                max=max<s[i].cgpa;
            }
        }

    }
    fclose(fp);
    return max;
}
