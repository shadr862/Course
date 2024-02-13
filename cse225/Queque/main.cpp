#include <iostream>
#include<string>
#include"quetype.cpp"
#include"StackType.cpp"
using namespace std;
void CheckFull(QueType<int> q)
{
    if(q.isFull())
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        cout<<"Queue is not full"<<endl;
    }
}

void CheckEmpty(QueType<int> q)
{
    if(q.isEmpty())
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
       cout<<"Queue is not Empty"<<endl;

    }

}
void Print(QueType<int> q)
{
    QueType<int> aux;
    while(!q.isEmpty())
    {
        cout<<q.Front()<<" ";
        aux.Enqueue(q.Front());
        q.Dequeue();
    }
    cout<<endl;
    while(!aux.isEmpty())
    {
        q.Enqueue(aux.Front());
        aux.Dequeue();
    }

}
void PrintBinary(int n)
{
    QueType<string> q;
    string s1,s2;
    string temp;
    q.Enqueue("1");
    temp=q.Front();
    q.Dequeue();
    for(int i=0;i<n;i++)
    {
        cout<<temp<<endl;;
        s1=temp;
        s2=s1;
        if(!q.isFull())
        {
            s1.append("0");
            q.Enqueue(s1);
        }
        if(!q.isFull())
        {
            s2.append("1");
            q.Enqueue(s2);
        }

        temp=q.Front();
        q.Dequeue();


    }
}
bool WeightMeter(QueType<int> q, int weightLimit)
{
    int sum=0;
    QueType<int> aux;
    while(!q.isEmpty())
    {
        sum=sum+q.Front();
        aux.Enqueue(q.Front());
        q.Dequeue();
    }
    while(!aux.isEmpty())
    {
        q.Enqueue(aux.Front());
        aux.Dequeue();
    }
    if(sum<=weightLimit)
    {
        return true;
    }
    return false;
}
void PrintReverse(QueType<int> q)
{
    StackType<int> s;
    QueType<int> aux;
    while(!q.isEmpty())
    {
        s.push(q.Front());
        aux.Enqueue(q.Front());
        q.Dequeue();
    }
    while(!aux.isEmpty())
    {
        q.Enqueue(aux.Front());
        aux.Dequeue();
    }
    while(!s.isEmpty())
    {
        cout<<s.Top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main()
{
    QueType<int> q;
    int n;
    CheckEmpty(q);
    q.Front();
    for(int i=0;i<4;i++)
    {
        cin>>n;
        q.Enqueue(n);
    }
    CheckEmpty(q);
    CheckFull(q);
    cin>>n;
    q.Enqueue(n);
    Print(q);
    CheckFull(q);
    cin>>n;
    q.Enqueue(n);
    q.Dequeue();
    q.Dequeue();
    Print(q);
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    CheckEmpty(q);
    q.Dequeue();
    for(int i=0;i<5;i++)
    {
        cin>>n;
        q.Enqueue(n);
    }
    PrintReverse(q);
    Print(q);

    QueType<int> lift;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        lift.Enqueue(n);
    }
    int weigtLimit;
    cin>>weigtLimit;
    if(WeightMeter(lift,weigtLimit))
    {
        cout<<"Good to go"<<endl;
    }
    else{
        cout<<"Over Weight."<<endl;
        cout<<"Maximum Limit"<<" "<<weigtLimit<<endl;
    }
    lift.MakeEmpty();
    for(int i=0;i<5;i++)
    {
        cin>>n;
        lift.Enqueue(n);
    }
    cin>>weigtLimit;
    if(WeightMeter(lift,weigtLimit))
    {
        cout<<"Good to go"<<endl;
    }
    else{
        cout<<"Over Weight."<<endl;
        cout<<"Maximum Limit"<<" "<<weigtLimit<<endl;
    }
    int binaryNumbers;
    cin>>binaryNumbers;
   PrintBinary(binaryNumbers);

    return 0;
}
