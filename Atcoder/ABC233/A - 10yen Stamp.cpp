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

    ll t,i;

        ll x;
        double y;
        cin>>x>>y;
        y-=x;
        ll ans = ceil(y/10);

        if(y<=0)
            cout<<"0"<<endl;
        else
        cout<<ans<<endl;

return 0;
}
