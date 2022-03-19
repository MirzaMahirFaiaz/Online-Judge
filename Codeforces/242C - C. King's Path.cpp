//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

queue<pair<int,int> >q;
map<pair<int,int>,int>m;
int main()
{

    int x0,y0,x1,y1,n;
	int r,a,b;
	int x,y,nx,ny;
	int c[8][2]={ {0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1} };
	cin>>x0>>y0>>x1>>y1>>n;
	while(!q.empty())
        q.pop();
    m.clear();
    while(n--)
    {
        cin>>r>>a>>b;
        for(int i=a;i<=b;i++)
            m[make_pair(r,i)]=-1;
    }
    m[make_pair(x0,y0)]=0;
    q.push(make_pair(x0,y0));
    while(!q.empty())
    {
        x=q.front().first;
        y=q.front().second;
        q.pop();
        for(int i=0;i<8;i++)
        {
            nx=x+c[i][0];
            ny=y+c[i][1];
            if(m[make_pair(nx,ny)]<0)
            {
                m[make_pair(nx,ny)]=m[make_pair(x,y)]+1;
                q.push(make_pair(nx,ny));
            }
        }
    }
    cout<<m[make_pair(x1,y1)]<<endl;



return 0;
}
