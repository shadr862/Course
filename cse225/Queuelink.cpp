#include<iostream>
using namespace std;
class fullQueue
{

};
class EmptyQueue
{

};

struct node
{
    int data;
    node* next;
};

node* front=NULL;
node* rear=NULL;
bool isEmpty()
{
    return front==NULL;
}

bool isFull()
{
    try{
        node* temp=new node();
        delete temp;
        return false;
    }
    catch(std::bad_alloc exception){
        return true;
    }
}

void Enqueue(int item)
{
    node* temp=new node();
    temp->data=item;
    temp->next=NULL;
    try
    {
        if(isFull())
        {
            throw fullQueue();
        }
        else if(isEmpty())
        {
            front=temp;
            rear=temp;
        }
        else{

              rear->next=temp;
              rear=temp;
        }
    }
    catch(fullQueue ex)
    {
        cout<<"queue is already full"<<endl;
    }

}
void Dequeue()
{
    try
    {
        if(isEmpty())
        {
           throw EmptyQueue();
        }
        else if(rear==front)
        {
           node* temp;
           temp=front;
           rear=NULL;
           front=NULL;
           delete temp;
        }
        else{
            node* temp;
            temp=front;
            front=front->next;
            delete temp;
        }
    }
    catch(EmptyQueue q)
    {
        cout<<"queue is already empty"<<endl;
    }



}
int Front()
{
     try{
        if(isEmpty())
        {
            throw EmptyQueue();
        }
    }
    catch(EmptyQueue q)
    {
        cout<<"No data to return"<<endl;
    }

    return front->data;
}
void MakeEmpty()
{
    node* temp;

    while(front!=NULL)
    {
        temp=front;
        front=front->next;
        delete temp;
    }
    rear=NULL;
}
void print()
{
    node* temp;
    temp=front;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
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
        Enqueue(t);
    }
    print();
    Dequeue();
    Dequeue();
    Dequeue();
    print();
}
