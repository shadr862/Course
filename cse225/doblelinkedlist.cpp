#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
    node* pev;
};

node* head=NULL;
void InsertAtFirst(int item)
{
    node* temp=new node();
    temp->data=item;
    temp->next=NULL;
    temp->pev=NULL;
    if(head!=NULL)
    {
        temp->next=head;
        head->pev=temp;
    }
    head=temp;

}
void InsertAtLast(int item )
{
    node* temp=new node();
    temp->data=item;
    temp->next=NULL;
    temp->pev=NULL;
    node* location;
    location=head;
    while(location->next!=NULL)
    {
        location=location->next;
    }
    location->next=temp;
    temp->pev=location;
}
void InsertPosition(int pos, int item)
{
    node* temp=new node();
    temp->data=item;
    temp->next=NULL;
    temp->pev=NULL;
    node* location;
    location=head;
    for(int i=0;i<pos-2;i++)
    {
        location=location->next;

    }
    temp->next=location->next;
    temp->pev=location;
    location->next=temp;
}
void DeleteAtFirst( )
{
    node* temp;
    temp=head;
    head=head->next;
    head->pev=NULL;
    delete temp;
}
void DeleteAtLast( )
{
    node* location;
    location=head;
    while((location->next)->next!=NULL)
    {
        location=location->next;
    }
    node* del=location->next;
    location->next=NULL;
    delete del;


}
void DeletePosition(int pos)
{
    node* location;
    node* pre;
    location=head;
    if(pos==1)
    {
        head=head->next;
        head->pev=NULL;
        delete location;
    }
    else
    {
        for(int i=0;i<pos-2;i++)
        {
           location=location->next;

        }
        if((location->next)->next==NULL)
        {
            DeleteAtLast();
        }
        else{
             pre=location;
             node* del=location->next;
             location->next=del->next;
             location=location->next;
             location->pev=pre;
             delete del;
        }


    }


}
void DeleteValue(int item)
{
    node* location;
    location=head;
    if(head->data==item)
    {
        head=head->next;
        head->pev=NULL;
        delete location;
    }
    else
    {
        while((location->next)->data!=item&&(location->next)->next!=NULL)
        {
            location=location->next;
        }
        if((location->next)->next==NULL)
        {
            DeleteAtLast();
        }
        else if((location->next)->data==item)
        {
            node* pre=location;
            node* del=location->next;
            location->next=del->next;
            location=location->next;
            location->pev=pre;
            delete del;

        }
        else{
            cout<<"we can not found the element:"<<item<<endl;
        }

    }
}

void print()
{
      node* location=head;
      while(location!=NULL)
      {
          cout<<location->data<<" ";
          location=location->next;
      }
      cout<<endl;
}
void PrintReverse()
{
      node* location=head;
      while(location->next!=NULL)
      {
          location=location->next;
      }
      while(location!=NULL)
      {
          cout<<location->data<<" ";
          location=location->pev;
      }
       cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        InsertAtFirst(t);
    }
    cout<<"Insert At First"<<endl;
    print();
    int n2;
    cin>>n2;
    for(int i=0;i<n2;i++)
    {
        int t;
        cin>>t;
        InsertAtLast(t);
    }
    cout<<"Insert At Last"<<endl;
    print();
    int p,v1;
    cin>>p>>v1;
    InsertPosition(p,v1);
    cout<<"Insert at Position:"<<p<<" "<<"the value:"<<v1<<endl;
    print();
    DeleteAtFirst();
    cout<<"Delete First element"<<endl;
    print();
    DeleteAtLast();
    cout<<"Delete last element"<<endl;
    print();
    int p1;
    cin>>p1;
    DeletePosition(p1);
    cout<<"Delete the pos:"<<p1<<endl;
    print();
    int v;
    cin>>v;
    DeleteValue(v);
    cout<<"Delete the value:"<<v<<endl;
    print();
    cout<<"reverse"<<endl;
    PrintReverse();


}
