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
    for(i=0;i<t;i++){
            cin>>n;
    ll ans = pow(2,n);
    ans--;
    cout<<ans<<endl;
    }

return 0;
}
