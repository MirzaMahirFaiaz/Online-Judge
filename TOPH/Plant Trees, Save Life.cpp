//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
ll x[100100],vis[100100];
ll cost =0;
vector <ll> adj[100100];

void bfs (ll src) {
    queue<ll>q;
    q.push (src);

    vis[src] = 1;
    ll singlepart = INT_MAX;

    while (!q.empty ()) {
        ll u = q.front ();
        q.pop ();
        singlepart = min (singlepart, x[u]);
        ll sz = adj[u].size ();
        for (ll i = 0; i < sz; i++) {
            ll v = adj[u][i];

            if (!vis[v]) {
                q.push (v);
                vis[v] = 1;
            }
        }
    }

    cost += singlepart;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset (vis, 0, sizeof (vis));

    ll t,i,j;
    ll n,k;
    cin>>n>>k;

    for(i=1;i<=n;i++){
        cin>>x[i];
    }
    ll u,v;
    for(i=0;i<k;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(i=1;i<=n;i++){
        if(!vis[i])
            bfs(i);
    }
    cout<<cost<<endl;

return 0;
}
