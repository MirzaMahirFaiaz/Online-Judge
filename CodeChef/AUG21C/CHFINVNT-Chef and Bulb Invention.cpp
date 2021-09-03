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

    ll t,i,j,n,p,k,e1,c1,ans;
    cin>>t;
    while(t--){
        cin>>n>>p>>k;
        e1=(p+1)%k;
        c1=(n/k);
        ans=(c1*e1);
        ans+=e1;
        ans+=(p/k);
        cout<<ans<<endl;
    }
return 0;
}
