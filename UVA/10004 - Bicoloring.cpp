//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n,e;
    while(cin>>n){
            vector<vector<int>>graph(n);
            vector<int> color(n, 2);
        bool bicolorable = true;
        if(n==0){
            break;
        }

        ll e;
        cin>>e;

    for(i=0;i<e;i++){
            ll u,v;
        cin>>u;
        cin>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    queue<int> q;

        color[0] = 0;
        q.push(0);
        while (!q.empty() && bicolorable)
        {
            int u = q.front();
            q.pop();
            ll sz = graph[u].size();
            for (int i = 0; i < sz; ++i)
            {
                int v = graph[u][i];
                if (color[v] == color[u])
                {
                    bicolorable = false;
                    break;
                }
                else if (color[v] == 2)
                {
                    if(color[u] == 1){
                       color[v]=0;
                    }else{
                       color[v]=1;
                    }
                    q.push(v);
                }
            }
        }
        if (bicolorable)
            cout << "BICOLORABLE." << endl;
        else
            cout << "NOT BICOLORABLE." << endl;


    }



return 0;
}
