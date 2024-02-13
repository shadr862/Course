#include<iostream>
#include "SortedType.h"

using namespace std;

 template<class T>
 SortedType<T>::SortedType()
 {
     length=0;
     CurrentPos=-1;
 }
 template<class T>
 void SortedType<T>::makeEmpty()
 {
     length=0;
 }

 template<class T>
 bool SortedType<T>::isEmpty()
 {
     return length==0;
 }
 template<class T>
 bool SortedType<T>::isFull()
 {
     return length==Max_size;
 }

 template<class T>
 int SortedType<T>::lengthIs()
 {
     return length;
 }
 template<class T>
 void SortedType<T>::insertItem(T value)
 {
     int location=0;
     for(int i=0;i<length;i++)
     {
         if(info[i]<value)
         {
             location++;
         }
         else{
            break;
         }
     }
     for(int i=length;i>location;i--)
     {
         info[i]=info[i-1];
     }
     info[location]=value;
     length++;
 }

 template<class T>
 void SortedType<T>::deleteItem(T value)
 {
     int location;
     bool flag=0;
     for(int i=0;i<length;i++)
     {
         if(info[i]==value)
         {
             location=i;
             flag=1;
             break;
         }

     }
     if(flag)
     {
         for(int i=location;i<length-1;i++)
         {
             info[i]=info[i+1];
         }
         length--;
     }
 }
 template<class T>
 void SortedType<T>::resetList()
 {
     CurrentPos=-1;
 }
 template<class T>
 void SortedType<T>::getNextItem(T& value)
 {
     CurrentPos++;
     value=info[CurrentPos];
 }
 template<class T>
 void SortedType<T>::retriveItem(T& value, bool& found)
 {
     int first=0;
     int last=length-1;
     int mid;
     while(first<=last)
     {
         mid=first+(last-first)/2;

          if(info[mid]<value)
         {
             first=mid+1;
         }
         else if(info[mid]>value)
         {
             last=mid-1;
         }
         else
         {
             found=true;
             break;
         }
     }


 }

