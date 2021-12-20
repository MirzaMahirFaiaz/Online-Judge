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
    while(t--){
        cin>>n;
        ll ans;
        ll cr= cbrt(n);
        ll sr= sqrt(n);
        ans= sr;
        ans+= cr;
        ans-=(ll) sqrt(cr);
        cout<<ans<<endl;
    }

return 0;
}
