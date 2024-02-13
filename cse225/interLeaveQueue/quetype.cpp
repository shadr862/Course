#include"quetype.h"
#include<iostream>
using namespace std;

template<class T>
QueType<T>::QueType()
{
    front=-1;
    rear=-1;
    size=0;
}
template<class T>
bool QueType<T>::isFull()
{
    return(rear+1)%max_items==front;
}
template<class T>
bool QueType<T>::isEmpty()
{
    if(rear==-1&&front==-1)
    {
        return true;
    }

    return false;
}

template<class T>
void QueType<T>::Enqueue(T value)
{
 try
 {
    if(isFull())
    {
        throw FullQueue();
    }
    else if(isEmpty())
    {
        rear=0;
        front=0;
    }
    else{
        rear=(rear+1)%max_items;
    }
    info[rear]=value;
    size++;
 }
 catch (FullQueue q)
 {
     cout<<"Queue is already full"<<endl;
 }
}

template<class T>
void QueType<T>::Dequeue()
{
    try
    {
        if(isEmpty())
        {
           throw EmptyQueue();
        }
        else if(rear==front)
        {
           rear=-1;
           front=-1;
        }
        else{
            front=(front+1)%max_items;
        }
        size--;
    }
    catch(EmptyQueue q)
    {
        cout<<"queue is already empty"<<endl;
    }




}

template<class T>
T QueType<T>::Front()
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

    return info[front];

}

template<class T>
void QueType<T>::MakeEmpty()
{
    rear=-1;
    front=-1;
    size=0;
}
template<class T>
int QueType<T>::csize()
{
    return size;
}
