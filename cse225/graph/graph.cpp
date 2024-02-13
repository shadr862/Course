#include<iostream>
#include<queue>
using namespace std;
int graph[10][10];
int predecessor[6], shortPath[6];
bool visited[6];
void AN(int source,int node)
{
    for(int i=0;i<node;i++)
    {
        if(graph[source][i]==1)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
void DFSpost(int source,int node,bool visited[])
{

    visited[source]=true;
    for(int i=0;i<node;i++)
    {
        if(graph[source][i]==1)
        {
            if(visited[i]==false)
                {
                    DFSpost(i,node,visited);
                }

        }

    }
    cout<<source<<" ";

}


void Bfsvisit(int source,int node)
{
    queue<int> q;
    q.push(source);
    visited[source]=true;
    shortPath[source]=0;
    while(!q.empty())
    {
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        for(int i=0;i<node;i++)
        {
            if(graph[x][i]==1)
            {
                if(visited[i]==false)
                {
                    visited[i]=true;
                    q.push(i);
                    shortPath[i]=shortPath[x]+1;
                    predecessor[i]=x;
                }
            }
        }
    }

}
void Bfs(int source,int node)
{
    for(int i=0;i<node;i++)
    {
        if(visited[i]==false)
        {
            Bfsvisit(i,node);
        }
    }
}

void DFSPre(int source,int node,bool visited[])
{

    visited[source]=true;
    cout<<source<<" ";

    for(int i=0;i<node;i++)
    {
        if(graph[source][i]==1)
        {
            if(visited[i]==false)
                {
                    DFSPre(i,node,visited);
                }

        }

    }
}
int main()
{
    int node,edge;
    cin>>node>>edge;
    bool visited[6];
    bool visited1[6];
    for(int i=0;i<edge;i++)
    {
        int m,n;
        cin>>m>>n;
        graph[m][n]=1;
        graph[n][m]=1;
    }
    cout<<"ADj Node:";
    AN(4,6);
    cout<<"preorder:";
    DFSPre(4,6,visited1);
    cout<<endl;
    cout<<"postorder:";
    DFSpost(4,6,visited);
    cout<<endl;
    cout<<"bfs:";
    Bfsvisit(4,6);
    cout<<endl;
    cout<<"predecessor:"<<predecessor[4]<<endl;
    cout<<"shortestpath:"<<shortPath[4]<<endl;
}



