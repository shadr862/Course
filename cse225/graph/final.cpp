#include<bits/stdc++.h>
using namespace std;

bool visited[8][8];
int shortPath[8][8];

int dx[]={-2,-2,2,2,-1,-1,1,1};
int dy[]={-1,1,-1,1,-2,2,-2,2};
int graph[8][8];
struct  node
{
    int nx;
    int ny;
};
bool valid(int x ,int y)
{
    return (x>=0&&x<8&&y>=0&&y<8)&&(visited[x][y]==false);
}

void Bfs(int x,int y)
{
    visited[x][y]=true;
    shortPath[x][y]=0;
    queue<node> q;
    q.push({x,y});

    while(!q.empty())
    {

        int X=q.front().nx;
        int Y=q.front().ny;
        q.pop();
        for(int i=0;i<8;i++)
        {
            int Ax=X+dx[i];
            int Ay=Y+dy[i];
            if(valid(Ax,Ay))
            {
                  q.push({Ax,Ay});
                  visited[Ax][Ay]=true;
                  shortPath[Ax][Ay]=shortPath[X][Y]+1;

            }
        }
    }



}

int main()
{
    cout<<"black team"<<endl;
    int n1,n2;
    cin>>n1;
    for(int i=0;i<n1;i++)
    {
        int n,x,y;
        cin>>x>>y>>n;
        graph[x][y]=n;

    }
    cout<<"while team"<<endl;
    cin>>n2;
    for(int i=0;i<n2;i++)
    {
        int x,y;
        cin>>x>>y;


    }
    cout<<"knight pos:"<<endl;
    int x1,y1;
    cin>>x1>>y1;

    Bfs(x1,y1);

    int p=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(graph[i][j]==1)
            {
                cout<<"King:"<<shortPath[i][j]<<endl;

            }
            else if(graph[i][j]==2)
            {
                 cout<<"Queen:"<<shortPath[i][j]<<endl;
            }
            else if(graph[i][j]==31||graph[i][j]==32)
            {
                cout<<"Rooks:"<<shortPath[i][j]<<endl;
            }
            else if(graph[i][j]==41||graph[i][j]==42)
            {
                cout<<"Knight:"<<shortPath[i][j]<<endl;
            }
            else if(graph[i][j]==51||graph[i][j]==52)
            {
                cout<<"Bishop:"<<shortPath[i][j]<<endl;
            }
            else if(graph[i][j]>=61 && graph[i][j]<=68)
            {
                cout<<"Pawns:"<<shortPath[i][j]<<endl;
            }

        }

    }



}
