#include "dynarr1.h"
#include<iostream>
using namespace std;

template<class T>
dynArr1<T>::dynArr1()
{
    arr=NULL;
    size=0;
}

template<class T>
dynArr1<T>::dynArr1(int row,int col)
{
    arr=new T*[row];
    for(int i=0;i<row;i++)
    {
        arr[i]=new T[col];
    }
    size=row;

}

template<class T>
dynArr1<T>::~dynArr1()
{
    for(int i=0;i<size;i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}

template<class T>
void dynArr1<T>::setValue(int row,int col,T value)
{
    arr[row][col]=value;
}

template<class T>
T dynArr1<T>::getValue(int row,int col)
{
     return arr[row][col];
}

template<class T>
void dynArr1<T>::allocate(int row,int col)
{
    for(int i=0;i<row;i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
    arr=new int*[row];

    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }

}
