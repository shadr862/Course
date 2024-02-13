#include<stdio.h>
int main()
{
    FILE *fptr;
    char ch='a',name[20]="saad";
    int id=5;
    float value=7.8;
    fptr=fopen("rm.txt","w");
    if(fptr==NULL)
    {
        printf("not created");
    }
    else
    {
        fprintf(fptr,"%s\n",name);
        putc(ch,fptr);
        fprintf(fptr,"%d\n",id);
        fprintf(fptr,"%f\n",value);

    }
    fclose(fptr);
    fptr=fopen("rm.txt","r");
    if(fptr==NULL)
    {
        printf("file not found");
    }
    else
    {
        fscanf(fptr,"%s",name);
        getc(fptr);
        fscanf(fptr,"%d",&id);
        fscanf(fptr,"%f",&value);
        printf("%s\n%c\n%d\n%f",name,ch,id,value);
    }

}
