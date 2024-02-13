#include<stdio.h>
#include<string.h>
typedef struct nsu
{
    char name[10];
    int age;
    char country[10];
    int rank;

} saad;
int main()
{
    saad std[3];
    int i;
    for(i=0; i<2; i++)
    {
        printf("enter name:%d\n",i+1);
        fflush(stdin);
        gets(std[i].name);
        printf("enter age:\n");
        scanf("%d",&std[i].age);
        printf("enter country:\n");
        fflush(stdin);
        scanf("%s",std[i].country);
        printf("enter rank:\n");
        scanf("%d",&std[i].rank);

    }
     char s1[10];
     printf("enter name:\n");
     scanf("%s",&s1);
     int flag=0,ind=0,d;

     for(i=0; i<2; i++)
     {
         d=strcmp(s1,std[i].name);

         if(d==0)
         {
             flag=1;
            ind=i;
            break;
         }

     }
     if(flag==1)
     {
          printf("name=%s\nage=%d\ncountry=%s\nrank=%d",std[ind].name,std[ind].age,std[ind].country,std[ind].rank);
     }
     else
        printf("not found");

}

