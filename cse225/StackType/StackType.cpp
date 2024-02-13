#include"StackType.h"
#include <iostream>
using namespace std;

template<class T>
StackType<T>::StackType()
{
    top=-1;
}

template<class T>
bool StackType<T>::isFull()
{
    return top==max_size-1;
}

template<class T>
bool StackType<T>::isEmpty()
{
    return top==-1;
}

template<class T>
void StackType<T>::push(T item)
{
    try{
        if(isFull())
            throw FullStack();

        top++;
        info[top]=item;
    }
    catch(FullStack f){
        cout<<"Stack is already Full"<<endl;
    }
}
template<class T>
void StackType<T>::makeEmpty()
{
    top=-1;
}
template<class T>
void StackType<T>::pop()
{
    try{
        if(isEmpty())
            throw EmptyStack();
        top--;

    }
    catch (EmptyStack f)
    {
        cout<<"Stack is already Empty"<<endl;
    }
}
template<class T>
T StackType<T>::Top()
{
    return info[top];
}

