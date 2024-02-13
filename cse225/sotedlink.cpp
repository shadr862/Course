#include <iostream>
using namespace std;
class Full
{

};
class Empty
{

};
struct node
{
    int data;
    node* next;
};

node* head=NULL;
int length=0;
node* CurrentPos=NULL;
 void makeEmpty()
 {
     node* location;
     while(head!=NULL)
     {
         location=head;
         head=head->next;
         delete location;
     }
     length=0;
 }


 bool isEmpty()
 {
     return length==0;
 }

 bool isFull()
 {
     try{
        node *temp=new node();
        delete temp;
        return false;
    }
    catch(std::bad_alloc exception){
        return true;
    }
 }


 int lengthIs()
 {
     return length;
 }

 void insertItem(int value)
 {
    node* temp=new node();
    temp->data=value;
    temp->next=NULL;
    try
    {
        if(isFull())
        {
            throw Full();
        }
        else if(isEmpty())
        {
            head=temp;
        }
        else if(head->data>value)
        {
            temp->next=head;
            head=temp;
        }
        else if(head->next==NULL&&head->data<value)
        {
            head->next=temp;

        }
        else
        {
                node* location;
                location=head;
                while((location->next)->data<value&&location->next!=NULL)
                {

                    location=location->next;

                }
                if(location->next==NULL&&location->data<value)
                {
                    location->next=temp;
                }
                else
                {
                    temp->next=location->next;
                    location->next=temp;
                }


        }
    }
    catch(Full ex)
    {
        cout<<"list is already full"<<endl;
    }

     length++;
 }


 void deleteItem(int value)
 {
     node* location;
     location=head;
     try{
         if(isEmpty())
         {
             throw Empty();
         }
         else if(value==head->data)
         {
             head=head->next;
             delete location;
         }
         else
         {
                while((location->next)->data!=value)
                {
                    location=location->next;
                }
                node* del=location->next;
                location->next=del->next;
                delete del;
         }
     }
     catch(Empty q)
    {
        cout<<"list is already empty"<<endl;
    }
    length--;
 }
 void resetList()
 {
    CurrentPos=head;
 }

 void getNextItem(int& value)
 {

     value=CurrentPos->data;
     CurrentPos=CurrentPos->next;

 }

 void retriveItem(int& value, bool& found)
 {
     node* location;
     location=head;
     while(location!=NULL)
     {
         if(location->data<value)
         {
             location=location->next;
         }
         else if(location->data==value)
         {
             found=true;
             value=location->data;
             break;
         }
         else{
            found=false;
            break;
         }
     }


 }
 void checkEmpty()
{
    if(isEmpty())
    {
        cout<<"List is Empty"<<endl;
    }
    else{
        cout<<"List is not Empty"<<endl;
    }
}
void print()
{
    int n;
    resetList();
    for(int i=0;i<lengthIs();i++)
    {
        getNextItem(n);
        cout<<n<<" ";
    }
    cout<<endl;
    resetList();
}
void checkFull()
{
    if(isFull())
    {
        cout<<"List is Full"<<endl;
    }
    else{
        cout<<"List is not Full"<<endl;
    }
}
void checkLength()
{
    cout<<"length is:"<<lengthIs()<<endl;
}


 int main()
{
    checkEmpty();
    checkFull();
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        insertItem(t);
    }

   print();
   checkLength();
   int n1;
   cin>>n1;
   bool found=false;
   retriveItem(n1,found);
   if(found)
   {
       cout<<"element is found"<<endl;
   }
   else
   {
       cout<<"element is not found"<<endl;
   }
   cin>>n1;
   deleteItem(n1);
   cout<<"after delete"<<endl;
   print();
   checkLength();
   cout<<"after make empty"<<endl;
   makeEmpty();
   checkLength();




}
