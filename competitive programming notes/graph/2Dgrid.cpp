#include<iostream>
using namespace std;
int graph[5][5];
bool visited[5][5];
int dx[]={-1,1,-1,1,1,-1,0,0};
int dy[]={-1,-1,1,1,0,0,1,-1};

bool valid(int x ,int y)
{
    return (x>=0&&y>=0&&x<5&&y<5)&&(visited[x][y]==false);
}

void Dfs(int x,int y)
{
    visited[x][y]=true;
    for(int i=4;i<8;i++)
    {
        int X=x+dx[i];
        int Y=y+dy[i];
        if(valid(X,Y))
        {
            Dfs(X,Y);
        }
    }
}
int main()
{
    Dfs(2,2);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(visited[i][j]==true)
            {
                cout<<'*'<<" ";
            }
            else{
                cout<<'#'<<" ";
            }
        }
        cout<<endl;

    }
}
