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

    ll t,i,j,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        set<ll> s;
        for(i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            ll sz = s.size();
            s.insert(x);
            if(sz==s.size())
            {
                x*=-1;
                s.insert(x);
            }
        }
        cout<<s.size()<<endl;
    }

    return 0;
}
