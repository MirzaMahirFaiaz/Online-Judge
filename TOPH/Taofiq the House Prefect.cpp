//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
#define mx 100005

vector<int>adj[mx],ans(mx,-1);
bool visited[mx];

void bfs(int source)
{
    queue<int>q;
    q.push(source);
    visited[source]=true;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto v:adj[u])
        {
            if(!visited[v])
            {
                visited[v]=true;
                ans[v]=u;
                q.push(v);
            }
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,cnt=1;
    cin>>t;
    while(t--){
        cout<<"Case "<<cnt++<<":\n";
        int n,m,x,y;cin>>n>>m;
        for(int i=0;i<n;++i)
        {
            adj[i].clear();
            ans[i]=-1;
            visited[i]=false;
        }
        for(i=0;i<m;++i)
        {
            cin>>x>>y;
            adj[x].push_back(y);
        }
        for(i=0;i<n;++i)
        {
            sort(adj[i].begin(),adj[i].end());
        }
        for(i=0;i<n;++i)
        {
            if(!visited[i])
            {
                bfs(i);
            }
        }
         ll q;
         cin>>q;
        while(q--)
        {
            ll a,b;
            cin>>a>>b;
            if(ans[a]==b or ans[b]==a)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }

    }
return 0;
}
