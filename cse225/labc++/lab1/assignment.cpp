#include <bits/stdc++.h>
using namespace std;
int main() {

    //task1
    int n,i;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int* arr=new int[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[] arr;
     cout<<endl;
    //task2
    int row,col,j;
    cout<<"Enter the row and col"<<endl;
    cin>>row>>col;
    char** arr1=new char*[row];
    for(i=0;i<row;i++)
    {
        arr1[i]=new char[col];
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {

            cin>>arr1[i][j];
        }

    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {

            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;

    }
    for(i=0;i<row;i++)
    {
       delete[] arr1[i];
    }
    delete[] arr1;
    //task3

    int row1,col1;
    cout<<"Enter the row"<<endl;
    cin>>row1;
    int** arr2=new int*[row1];
    int ar[row1];
    for(i=0;i<row1;i++)
    {
        cout<<"Enter the col"<<endl;
        cin>>col1;
        ar[i]=col1;
        arr2[i]=new int[col1];
    }

    for(i=0;i<row1;i++)
    {
        for(j=0;j<ar[i];j++)
        {

            cin>>arr2[i][j];
        }

    }
    for(i=0;i<row1;i++)
    {
        for(j=0;j<ar[i];j++)
        {

            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;

    }
    for(i=0;i<row1;i++)
    {
       delete[] arr2[i];
    }
    delete[] arr2;

}

