#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};

node* head=NULL;

void InsertAtFirst(int item)
{
    node* temp=new node();
    temp->data=item;
    temp->next=NULL;
    if(head!=NULL)
    {
        temp->next=head;
    }
    head=temp;

}
void InsertAtLast(int item )
{
    node* temp=new node();
    temp->data=item;
    temp->next=NULL;
    node* location;
    location=head;
    while(location->next!=NULL)
    {
        location=location->next;
    }
    location->next=temp;
}
void InsertPosition(int pos, int item)
{
    node* temp=new node();
    temp->data=item;
    temp->next=NULL;
    node* location;
    location=head;
    for(int i=0;i<pos-2;i++)
    {
        location=location->next;

    }
    temp->next=location->next;
    location->next=temp;
}
void DeleteAtFirst( )
{
    node* temp;
    temp=head;
    head=head->next;
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
    location=head;
    if(pos==1)
    {
        head=head->next;
        delete location;
    }
    else
    {
        for(int i=0;i<pos-2;i++)
        {
           location=location->next;

        }
        node* del=location->next;
        location->next=del->next;
        delete del;

    }


}
void DeleteValue(int item)
{
    node* location;
    location=head;
    if(head->data==item)
    {
        head=head->next;
        delete location;
    }
    else
    {
        while((location->next)->data!=item&&(location->next)->next!=NULL)
        {
            location=location->next;


        }
        if((location->next)->next!=NULL)
        {
            DeleteAtLast();
        }
        else if((location->next)->data==item)
        {
            node* del=location->next;
            location->next=del->next;
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
void revlinkedlist()
{
    node* pev;
    node* current;
    node* nxt=NULL;
    pev=NULL;
    current=head;
  while(current!=NULL)
    {
         nxt=current->next;
         current->next=pev;
         pev=current;
         current=nxt;


    }
    head=pev;
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
    InsertAtLast(7);
    InsertAtLast(8);
    cout<<"Insert At Last"<<endl;
    print();
    InsertPosition(3,10);
    cout<<"Insert At Position 3"<<endl;
    print();
    DeleteAtFirst();
    cout<<"Delete First element"<<endl;
    print();
    DeleteAtLast();
    cout<<"Delete last element"<<endl;
    print();
    cout<<"Delete the element at position:3"<<endl;
    DeletePosition(3);
    print();
    cout<<"Delete the value:7"<<endl;
    DeleteValue(7);
    print();


}
