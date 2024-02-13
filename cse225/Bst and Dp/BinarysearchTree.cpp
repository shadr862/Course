#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};

node* getNewNode(int item)
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
        root=getNewNode(item);
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

bool search(node* root,int item)
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->data==item)
    {
        return true;
    }
    else if(item<root->data)
    {
        return search(root->left,item);
    }
    else{
        return search(root->right,item);
    }

}
node* findmax(node* root)
{
    if(root->right==NULL)
    {
        return root;
    }
    else
        return findmax(root->right);
}
node* findmin(node* root)
{
    if(root->left==NULL)
    {
        return root;
    }
    else
        return findmin(root->left);

}
void preorder(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void Inorder(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
void postorder(node* root)
{
     if(root==NULL)
    {
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
node* Delete(node* root,int item)
{
    if(root==NULL)
    {
        return root;
    }
    else if(item<root->data)
    {
        root->left=Delete(root->left,item);
    }
    else if(item>root->data)
    {
        root->right=Delete(root->right,item);
    }
    else
    {
        if(root->left==NULL&&root->right==NULL)
        {
            delete root;
            root=NULL;
        }
        else if(root->left!=NULL&&root->right==NULL)
        {
            node* temp=root;
            root=root->left;
            delete temp;
        }
        else if(root->left==NULL&&root->right!=NULL)
        {
            node* temp=root;
            root=root->right;
            delete temp;
        }
        else{
            node* temp=findmax(root->left);
            root->data=temp->data;
            root->left=Delete(root->left,temp->data);
        }
    }
    return root;


}
int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}
void count(node* root, int& c)
{
    if(root==NULL)
    {
        return ;
    }
    c++;
    count(root->left,c);
    count(root->right,c);
}
void succ(node* root,int& s,int value,bool b)
{
    if(root==NULL)
    {
        return ;
    }
    succ(root->left,s,value,b);

    if(value<root->data && b)
    {
        s=root->data;
        b=false;
    }

    succ(root->right,s,value,b);
}

int main()
{
    node* root=NULL;
    root=insert(root,4);
    root=insert(root,2);
    root=insert(root,1);
    root=insert(root,3);
    root=insert(root,6);
    root=insert(root,5);
    root=insert(root,7);
    bool r=search(root,6);
    node* mx=findmax(root);
    node* min=findmin(root);
    cout<<"max:"<<mx->data<<endl;
    cout<<"min:"<<min->data<<endl;
    cout<<"preorder:";
    preorder(root);
    cout<<endl;
    cout<<"after delete"<<endl;
    cout<<"inorder:";
    root=Delete(root,3);
    Inorder(root);

    cout<<endl;
    cout<<"postorder:";
    postorder(root);
    cout<<endl;
    if(r)
    {
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    int r1=height(root);
    cout<<"height:"<<r1<<endl;
    int c=0;
    count(root,c);
    cout<<"number of node:"<<c<<endl;
    int s;
    succ(root,s,5,true);
    cout<<"succsesor:"<<s<<endl;




}
