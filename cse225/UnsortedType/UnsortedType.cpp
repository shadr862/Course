#include<iostream>
#include"UnsortedType.h"
#include"studentInfo.h"
using namespace std;


template<class T>
UnsortedType<T>::UnsortedType()
{
    length=0;
    currentPos=-1;
}
template<class T>
bool UnsortedType<T>::isEmpty()
{
    return length==0;
}
template<class T>
bool UnsortedType<T>::isFull()
{
    return length==max_items;
}
template<class T>
void UnsortedType<T>::makeEmpty()
{
    length=0;
}
template<class T>
void UnsortedType<T>::insertItem(T value)
{
    info[length]=value;
    length++;
}
template<class T>
void UnsortedType<T>::deleteItem(T value)
{
    for(int i=0;i<length;i++)
    {
        if(value==info[i])
        {
            info[i]=info[length-1];
            length--;
            break;
        }
    }

}
template<class T>
void UnsortedType<T>::retriveItem(T& value,bool& found)
{
    for(int i=0;i<length;i++)
    {
        if(value==info[i])
        {
            found=true;
            break;
        }
        else
        {
            found=false;
        }
    }
}
template<class T>
int UnsortedType<T>::lengthIs()
{
    return length;
}
template<class T>
void UnsortedType<T>::resetList()
{
    currentPos=-1;
}
template<class T>
void UnsortedType<T>::getNextItem(T& item)
{
    currentPos++;
    item=info[currentPos];
}
