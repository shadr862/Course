#include<stdio.h>
typedef struct
{
    char pname[20];
    int pid;
    float price;

}pro;
int main()
{
    pro product[20];
    FILE *fptr;
    int i,stdnum=0;

    fptr=fopen("info.txt","r");
    if(fptr==NULL)
    {
        printf("not created");
    }
    else

    {
        i=0;
        while(!feof(fptr))
        {
            fgets(product[i].pname,20,fptr);
            // product[i].pname[strlen(product[i].pname)]='\0';
            fscanf(fptr,"%d",&product[i].pid);
            //fgetc(fptr);
            fscanf(fptr,"%f",&product[i].price);
            fgetc(fptr);

            i++;
            stdnum++;
        }
stdnum--;
    }
     fclose(fptr);
    printf("num of product:%d\n",stdnum);
    int min=product[0].price,ind=0;
    for(i=0;i<stdnum;i++)
    {
        if(min>product[i].price)
        {
            min=product[i].price;
            ind++;
        }
    }

printf("name=%sid=%d\nprice=%f\n",product[ind].pname,product[ind].pid,product[ind].price);
}
