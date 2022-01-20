//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
map<int,vector<int> >a;
int main()
{

    //ios_base::sync_with_stdio(false);
   // cin.tie(NULL);

    ll t,i,j,n,m;
    while ( cin>>n>>m)
    {
        a.clear();
        for (i = 0;i < n;i++ )
        {
            ll x;
             cin>>x;
            if ( a.count(x)==0 )
                a[x] = vector<int>();
            a[x].push_back(i+1);
        }
        while(m--)
        {
            ll x, y;
             cin>>x>>y;
            if ( a.count(y)==0||a[y].size()<x)
                cout<<"0\n";
            else
                cout<<a[y][x-1]<<endl;
        }
    }

return 0;
}
