//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int dis[1007];
bool chk(ll n,ll mid,ll k)
{
    ll t = 0,i,res;
    for( i=0; i<n+1;)
    {
        res = 0;
        while(i<n+1 && res + dis[i] <= mid)
            res += dis[i ++];
        t ++;
        if(t > k+1)
            return false;
    }
    return true;
}

void solve(ll cases)
{
    ll n, k,i,j;
    cin>>n>>k;
    int b = 0,e = 0;
    for(int i=0; i<n+1; ++ i)
    {
        cin>>dis[i];
        b = max(b, dis[i]);
        e += dis[i];
    }
    while(b < e)
    {
        ll mid = b + (e - b) / 2;
        if(chk(n, mid, k))
            e = mid;
        else
            b = mid + 1;
    }
    cout<<"Case "<<cases<<": "<<e<<endl;
    for(i=0, j = 0; i<n+1; )
    {
        ll res = 0;
        while(i<(n+1 - (k - j)) && res + dis[i] <= e)
            res += dis[i ++];
        j ++;
        cout<<res<<endl;
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j;
    cin>>t;
    for(i=1; i<=t;i++)
        solve(i);

return 0;
}
