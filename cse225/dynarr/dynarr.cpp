#include "dynarr.h"
#include<iostream>
using namespace std;

template<class T>
dynArr<T>::dynArr()
{
   arr=NULL;
   size=0;

}


template<class T>
dynArr<T>::dynArr(int n)
{

    arr=new T[n];
    size=n;
}

template<class T>
dynArr<T>::~dynArr()
{

    delete[] arr;
}


template<class T>
void dynArr<T> :: setValue(int ind,T value)
{
     arr[ind]=value;

}

template<class T>
T dynArr<T> :: getValue(int ind)
{

    return arr[ind];
}


template<class T>
void dynArr<T> :: allocate(int s)
{
    delete[] arr;
    arr=new T[s];
}
