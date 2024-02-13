#include<stdio.h>
#include<string.h>
struct ad
{
    char name[30];
    char disease[30];
    int cabin,phone,age;
} x[100];
typedef struct
{
    char username[20];
    char pass[20];


} pro;

int n,i,j=0,a=0,sum=0,g,flag,num;
void read();
void add();
void edit();
void del();
void view();
void search();
void admin();
void write();
void doctor();
void patient();
void sign_up();
void dsign_up();
int  write_login_and_pass();
int  dwrite_login_and_pass();
int sign_In(char login[], char pass[]);
int dsign_In(char login[], char pass[]);
int main()
{
    read();
    int c,i,q;
    printf("Hospital Management System\n");
    int m,n;
//making out the pattern
    while(c!=4)
    {
        printf("patient should be add their information:\n");
        printf("**Enter your choice**\n\n1. Admin\n2.doctor\n3.patient\n4. Exit\n\nOption=");
        scanf("%d",&c);//choice for option
        fflush(stdin);//making it clear
        if(c==1)//add
        {
            system("cls");
            admin();
        }
        else if(c==2)
        {
            system("cls");
            doctor();
        }
        else if(c==3)
        {
            system("cls");
            patient();
        }
        else if(c==4)
        {
            system("cls");
            write();
        }
        else
        {
            system("cls");
            printf("\n\nInvalid input , try again by using valid inputs");
        }
        printf("\n\n");
    }
}
void patient()
{
    printf("\n1.sign up\n2.login");
    int op;
    printf("\nenter option:");
    scanf("%d",&op);

int d;
    if(op==1)
    {
        sign_up();
    }
    else if(op==2)
    {
       d=write_login_and_pass();
       if(d==1)
       {
           printf("\nenter patient details:\n");
        add();
       }


    }





}
void sign_up()
{
    FILE *file;
    pro log[20];
    file = fopen("Customers.txt", "a");
    int i;
    if (file != NULL)
    {
        for(i=0; i<1; i++)
        {
            printf("\n|---------username:");
            scanf("%s", log[i].username);
            fprintf(file,"%s\n",log[i].username);
            printf("\n|---------pass:");
            scanf("%s",log[i].pass);
            fprintf(file,"%s\n",log[i].pass);

        }


    }
    fclose(file);
}
void dsign_up()
{
     FILE *file;
    pro log[20];
    file = fopen("doctor.txt", "a");
    int i;
    if (file != NULL)
    {
        for(i=0; i<1; i++)
        {
            printf("\n|---------username:");
            scanf("%s", log[i].username);
            fprintf(file,"%s\n",log[i].username);
            printf("\n|---------pass:");
            scanf("%s",log[i].pass);
            fprintf(file,"%s\n",log[i].pass);

        }


    }
    fclose(file);
}

int  write_login_and_pass()
{
    char username[30], pass[30];
    int d;

    printf("\n|---------Login:");
    scanf("%s", username);
    printf("|---------Password:");
    scanf("%s", pass);

    d=sign_In(username, pass);
    _getch();
    system("PAUSE");
    return d;
}
int  dwrite_login_and_pass()
{
    char username[30], pass[30];
    int d;

    printf("\n|---------Login:");
    scanf("%s", username);
    printf("|---------Password:");
    scanf("%s", pass);

    d=dsign_In(username, pass);
    _getch();
    system("PAUSE");
    return d;
}
int sign_In(char login[], char pass[])
{
    FILE *file;
    file = fopen("Customers.txt", "r");
    pro log[20];
    int i=0,count=0;
    if (file == NULL)
    {
        printf("File was not founded");
    }
    else
    {
        while(!feof(file))
        {
            fscanf(file, "%s",log[i].username);
            fgetc(file);
            fscanf(file, "%s",log[i].pass);
            i++;
            count++;
        }
        count--;
    }
    fclose(file);
    printf("\n****************");
    int flag=0;
    for(i=0; i<count; i++)
    {
        if(strcmp(login,log[i].username) == 0)
        {
            if(strcmp(pass,log[i].pass) == 0)
            {
                flag=1;
                break;
            }
            else
            {
                printf("\n>>>User or password incorrect!<<<\n");

            }
        }
        else
        {
            printf("\n>>>User or password incorrect!<<<\n");

            }
        }
    return flag;
}
int dsign_In(char login[], char pass[])
{
     FILE *file;
    file = fopen("doctor.txt", "r");
    pro log[20];
    int i=0,count=0;
    if (file == NULL)
    {
        printf("File was not founded");
    }
    else
    {
        while(!feof(file))
        {
            fscanf(file, "%s",log[i].username);
            fgetc(file);
            fscanf(file, "%s",log[i].pass);
            i++;
            count++;
        }
        count--;
    }
    fclose(file);
    printf("\n****************");
    int flag=0;
    for(i=0; i<count; i++)
    {
        if(strcmp(login,log[i].username) == 0)
        {
            if(strcmp(pass,log[i].pass) == 0)
            {
                flag=1;
                break;
            }
            else
            {
                printf("\n>>>User or password incorrect!<<<\n");

            }
        }
        else
        {
            printf("\n>>>User or password incorrect!<<<\n");

            }
        }
    return flag;
}

void doctor()
{
    printf("\n1.sign up\n2.login");
    int op;
    printf("\nenter option:");
    scanf("%d",&op);

int d;
    if(op==1)
    {
        dsign_up();
    }
    else if(op==2)
    {
       d= dwrite_login_and_pass();
       if(d==1)
       {
           printf("doctor view the patient list:\n");
        view();
       }

    }
}

void edit()
{
    int q,p;
    fflush(stdin);
    printf("What do you want to edit ?\n");
    printf("Enter your option\n");
    printf("1.Name\n2.Disease\n3.Age\n4.Cabin\n5.Phone no.\n");
    printf("Option=");
    scanf("%d",&q);//option
    if(q<=5)
    {
        printf("Enter the serial no of that patient= (0 - %d)=",num-1);
        scanf("%d",&p);//serial number
        if(p<num)
        {
            if(q==1)
            {
                fflush(stdin);
                printf("Enter the new name=");
                gets(x[p].name);

            }
            else if(q==2)
            {
                fflush(stdin);
                printf("Enter the new Disease=");
                gets(x[p].disease);
            }
            else if(q==3)
            {
                fflush(stdin);
                printf("Enter the new Age=");
                scanf("%d",&x[p].age);
            }

            else if(q==4)
            {
                fflush(stdin);
                printf("Enter the new Cabin no=");
                scanf("%d",&x[p].cabin);
            }

            else if(q==5)
            {
                fflush(stdin);
                printf("Enter the new Phone no =");
                scanf("%d",&x[p].phone);
            }
        }
        else
        {
            printf("\n\nInvalid Serial \nTry Again !!\n\n");
        }
    }
    else
    {
        printf("\n\nInvalid option\nTry Again!!\n\n");
    }
}
void view()
{
    for(i=0; i<num; i++)
    {
        printf("\n");
        printf("Serial Number=%d\n",i);
        printf("Name = ");
        puts(x[i].name);
        printf("Disease = ");
        puts(x[i].disease);
        printf("Cabin no = %d\nPhone number = 0%d\nAge=%d",x[i].cabin,x[i].phone,x[i].age);
        printf("\n\n");
    }
}
void admin()
{
    printf("1.view\n2.search\n3.edit\n4.delete\n");
    printf("enter op:");
    int op;
    scanf("%d",&op);
    fflush(stdin);
    //while(op!=3)
    {
        if(op==1)
        {
            system("cls");
            view();
        }
        else if(op==2)
        {
            system("cls");
            search();
        }
        else if(op==3)
        {
            system("cls");
            edit();
        }
        else if(op==4)
        {
            del();
        }


    }
}
void add()
{
    printf("\n\n");
    printf("Already data inputed on the database =%d\n\n",num);//how many inputs
    printf("How many entry do you want to add=\n");
    scanf("%d",&n);
    sum=n+num;

    for(i=num,j=0; i<sum; i++)
    {
        printf("\n");
        fflush(stdin);
        printf("Enter patient's Name = ");
        gets(x[i].name);
        fflush(stdin);
        printf("Enter disease = ");
        gets(x[i].disease);
        fflush(stdin);
        printf("Enter the age = ");
        scanf("%d",&x[i].age);
        fflush(stdin);
        printf("Enter cabin no = ");
        scanf("%d",&x[i].cabin);
        fflush(stdin);
        printf("Enter phone number = ");
        scanf("%d",&x[i].phone);
        fflush(stdin);
        printf("\n");
        j++;
        a++;
        num++;
    }
}

void search()
{
    int s,h,f;
    char u[100];
    printf("By what do you want to search ?\n");
    printf("1.Serial no.\n2.Name\n3.Disease\n4.Cabin no.\n5.Phone no.\n6.Age\n\nOption = ");
    scanf("%d",&h);
    if(h==1)
    {
        printf("Enter Serial number of the patient=");
        scanf("%d",&s);
        if(s<num)
        {
            printf("\n");
            printf("Serial Number=%d\n",s);
            printf("Name = ");
            puts(x[s].name);
            printf("Disease = ");
            puts(x[s].disease);
            printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x[s].cabin,x[s].phone,x[s].age);
            printf("\n\n");
        }
        else
            printf("\n\nNot Found\n\n");
    }
    else if(h==2)//problem is here.........
    {
        int f=1;
        fflush(stdin);
        printf("Enter your name=");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].name)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Disease = ");
                puts(x[g].disease);
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;

            }
        }
        if(f==1)
            printf("\nNot Found\n");



    }
    else if(h==3)
    {
        int f=1;
        fflush(stdin);
        printf("Enter Disease = ");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].disease)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Disease = ");
                puts(x[g].disease);
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }


        }
        if(f==1)
            printf("\nNot Found\n");


    }
    else if(h==4)
    {
        int f=1;
        printf("Enter Cabin number = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].cabin)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Disease = ");
                puts(x[g].disease);
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found\n\n");

    }
    else if(h==5)
    {
        int f=1;
        printf("Enter Phone number = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].phone)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Disease = ");
                puts(x[g].disease);
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found");
    }
    else if(h==6)
    {
        int f=1;
        printf("Enter Age = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].age)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Disease = ");
                puts(x[g].disease);
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found\n\n");

    }
    else
        printf("\n\nInvalid input\n\n");


}
void del()
{
    int f,h;
    printf("Enter the serial number of the patient that you want to delete=");
    scanf("%d",&f);
    if(f<num)
    {
        printf("What do you want ?\n");
        printf("1.Remove the whole record\n2.Remove Name\n3.Remove Disease\n4.Remove age\n5.Remove Cabin\n6.Remove phone number\nOption = ");
        scanf("%d",&h);
        if(h==1)
        {
            while(f<num)
            {
                strcpy(x[f].name,x[f+1].name);
                strcpy(x[f].disease,x[f+1].disease);
                x[f].age=x[f+1].age;
                x[f].cabin=x[f+1].cabin;
                x[f].phone=x[f+1].phone;
                f++;
            }
            num--;
        }
        else if(h==2)
        {
            strcpy(x[f].name,"Cleared");

        }
        else if(h==3)
        {
            strcpy(x[f].disease,"Cleared");
        }
        else if(h==4)
        {
            x[f].age=0;
        }
        else if(h==5)
        {
            x[f].cabin=0;
        }
        else if(h==6)
        {
            x[f].phone=0;
        }

    }
    else
        printf("\n\nInvalid Serial number\n");

}
void read()
{
    FILE *fp = fopen("patient.txt","rb");
    if(fp == NULL)
    {
        //create empty file, so that we can open it
        //in the next execution of this program
        fp = fopen("patient.txt","w");
        fclose(fp);
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");
        return 0;
    }

    num = fread(x, sizeof(struct ad),100, fp);
    fclose(fp);
}
void write()
{
    FILE *fp = fopen("patient.txt","ab");
    if(fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    fwrite(x, sizeof(struct ad),num, fp);

    fclose(fp);
}

