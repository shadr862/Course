#include<stdio.h>
typedef struct
{
    char name[5];
    int age;
}std;
int main()
{
    std st1,st2;
    FILE *fp;
    fp=fopen("records.txt","w");
    if(fp==NULL)
    {
        printf("not created");
    }
    else
    {
        printf("enter name:");
        gets(st1.name);
        st1.age=34;
       printf("enter name2:");
       gets(st2.name);
        st2.age=35;
        fprintf(fp,"%s\n",st1.name);
        fprintf(fp,"%d\n",st1.age);
        fprintf(fp,"%s\n",st2.name);
        fprintf(fp,"%d\n",st2.age);


    }
    fclose(fp);
    float ave;
    fp=fopen("records.txt","r");
    if(fp==NULL)
    {
        printf("not found");
    }
    else
    {
        fscanf(fp,"%s",st1.name);
        fscanf(fp,"%d",&st1.age);
        fscanf(fp,"%s",st2.name);
        fscanf(fp,"%d",&st2.age);
        ave=(st1.age+st2.age)/2.0;
        printf("name=%s\nage=%d\nname=%s\nage=%d\n",st1.name,st1.age,st2.name,st2.age);
        printf("ave=%f",ave);

    }
}
