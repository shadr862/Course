#include<stdio.h>
typedef  struct
{
    int pid;
    char name[20];
    float price;
} pro;
pro minproduct(pro product[],int size);
pro maxproduct(pro product[],int size);
int main()
{
    pro product[20],min,max;
    int n,i;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("enter id:");
        scanf("%d",&product[i].pid);
        printf("enter name:");
        fflush(stdin);
        gets(product[i].name);
        printf("enter price:");
        scanf("%f",&product[i].price);
    }
    min=minproduct(&product,n);
    printf("minimam:\n");
    printf("%d\n%s\n%.2f",min.pid,min.name,min.price);
    max=maxproduct(&product,n);
    printf("\nmaximum:\n");
    printf("%d\n%s\n%.2f",max.pid,max.name,max.price);

}
pro minproduct(pro product[],int size)
{
    int i,min=product[0].price,ind=0;
    for(i=0; i<size; i++)
    {
        if(min>product[i].price)
        {
            min=product[i].price;
            ind=i;
        }
    }
    return product[ind];
}
pro maxproduct(pro product[],int size)
{
     int i,max=product[0].price,ind=0;
    for(i=0; i<size; i++)
    {
        if(max<product[i].price)
        {
            max=product[i].price;
            ind=i;
        }
    }
    return product[ind];

}
