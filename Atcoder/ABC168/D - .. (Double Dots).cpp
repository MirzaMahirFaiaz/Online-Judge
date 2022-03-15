//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

vector<int> adj[100007];
int visited [100007];
int ans[100007];

void bfs(int s){
    memset(visited,0,sizeof(visited));
    queue <int> q;
    q.push(s);
    visited[s]=1;
    while(!q.empty()){
            int u = q.front();
    q.pop();
    ll sz = adj[u].size();
    for(int i=0;i<sz;i++){
        int v = adj[u][i];
        if(visited[v]==1)
            continue;
        q.push(v);
        ans[v]=u;
        visited[v]=1;

    }

    }

}

int main()
{

  //  ios_base::sync_with_stdio(false);
  //  cin.tie(NULL);

    ll t,i,j;
    ll a,b,n,m;


    cin>>m>>n;


    for(i=0;i<n;i++){
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);

    }
    bfs(1);
    cout<<"Yes"<<endl;
    for(i=2;i<=m;i++){
        cout<<ans[i]<<endl;
    }

return 0;
}
