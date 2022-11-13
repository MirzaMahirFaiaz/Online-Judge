//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int dx[]= {0,0,-1,+1};
int dy[]= {+1,-1,0,0};

int row,col;
int dist[1005][1005];
int vis[1005][1005];

bool isValid(int nx,int ny)
{
    return (nx>=0 && nx<row && ny>=0 && ny<col && vis[nx][ny]!=1);
}

void bfs( int sx,int sy)
{
    queue<pair<int,int>> q;
    q.push({sx,sy});
    vis[sx][sy]=1;

    while(!q.empty())
    {
        pair<int,int> u = q.front();
        q.pop();

        for(int k=0; k<4; k++)
        {
            int nx=u.first+dx[k];
            int ny=u.second+dy[k];

            if(isValid(nx,ny))
            {
                q.push({nx,ny});
                vis[nx][ny]=1;
                dist[nx][ny]=dist[u.first][u.second]+1;

            }
        }

    }
}




int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j;
    while(cin>>row>>col)
    {
        if(row==0 && col==0)
        {
            break;
        }
        ll rowNo,nmbrOfBomb,nmbrOfBombInCol,ColNo;
        memset(dist,0,sizeof(dist));
        memset(vis,0,sizeof(vis));
        cin>>nmbrOfBombInCol;
        for(j=0; j<nmbrOfBombInCol; j++)
        {
            cin>>rowNo>>nmbrOfBomb;

            for(i=0; i<nmbrOfBomb; i++)
            {

                cin>>ColNo;
                vis[rowNo][ColNo]=1;
            }

        }

        int startRow,startcol,endRow,endCol;

        cin>>startRow>>startcol>>endRow>>endCol;

        bfs(startRow,startcol);
        cout<<dist[endRow][endCol]<<endl;

    }

    return 0;
}
