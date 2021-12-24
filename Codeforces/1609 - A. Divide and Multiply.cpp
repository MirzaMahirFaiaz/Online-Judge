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

    ll t,i,j,in,n;

    cin>>t;
    while(t--){
            cin>>n;
    vector<ll>vec(n);
    ll m = 0;
    for(i=0;i<n;i++){
        cin>>vec[i];
        while(vec[i]%2==0){
            m++;
            vec[i]/=2;
        }
    }
    ll ans =0;
    sort(vec.begin(),vec.end());
    for(i=1;i<=m;i++)
        vec.back()*=2;
    for(i=0;i<n;i++)
        ans+=vec[i];
    cout<<ans<<endl;

    }

return 0;
}
