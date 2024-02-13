#include<bits/stdc++.h>
using namespace std;

bool visited[4][4];
int predecessor[4][4];
int shortPath[4][4];
int dx[]={-1,-1,1,1,1,-1,0,0};
int dy[]={-1,1,-1,1,0,0,1,-1};

bool valid(int x ,int y)
{
    return (x>=0&&y>=0&&x<4&&y<4)&&(visited[x][y]==false);
}


void Bfs(int graph[][4],int x,int y)
{
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    visited[x][y]=true;
    shortPath[x][y]=0;

    while(!q.empty())
    {
        pair<int,int> p=q.front();
        int X=p.first;
        int Y=p.second;
        cout<<graph[X][Y]<<endl;
        q.pop();
            for(int i=0;i<4;i++)
            {
               int Ax=X+dx[i];
               int Ay=Y+dy[i];
               if(valid(Ax,Ay))
               {
                  q.push(make_pair(Ax,Ay));
                  visited[Ax][Ay]=true;
                  shortPath[Ax][Ay]=shortPath[X][Y]+1;
                  predecessor[Ax][Ay]=graph[X][Y];

               }
            }
    }



}

int main()
{
    int graph[4][4]={ { 1, 2, 3, 4 },
                { 5, 6, 7, 8 },
                { 9, 10, 11, 12 },
                { 13, 14, 15, 16 }};
    Bfs(graph,0,0);
    cout<<"prede:"<<predecessor[3][3]<<endl;
    cout<<"shortpath:"<<shortPath[3][3]<<endl;



}
