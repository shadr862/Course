#include<iostream>
using namespace std;
int i=0;

struct node
{
    int data;
    node* left;
    node* right;
};

node* NewNode(int item)
{
    node* temp=new node();
    temp->data=item;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
node* insert(node* root,int item)
{
    if(root==NULL)
    {
        root=NewNode(item);
    }
    else if(item<root->data)
    {
        root->left=insert(root->left,item);
    }
    else{
        root->right=insert(root->right,item);
    }
    return root;
}
void Inorder(node* root,int arr[])
{
    if(root==NULL)
    {
        return ;
    }
    Inorder(root->left,arr);
    arr[i++]=root->data;
    Inorder(root->right,arr);
}

void preorder(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<"  ";
    preorder(root->left);
    preorder(root->right);
}

node* minHight(int arr[],int first,int last)
{
    if(first>last)
    {
        return NULL;
    }
    int mid=(first+last)/2;
    node* temp=NewNode(arr[mid]);
    temp->left=minHight(arr,first,mid-1);
    temp->right=minHight(arr,mid+1,last);

}
int main()
{
    node* root=NULL;
    root=insert(root,11);
    root=insert(root,9);
    root=insert(root,4);
    root=insert(root,2);
    root=insert(root,7);
    root=insert(root,3);
    root=insert(root,17);
    root=insert(root,0);
    root=insert(root,5);
    root=insert(root,1);
    int arr[10];
    Inorder(root,arr);
    root=minHight(arr,0,9);
    preorder(root);


}
