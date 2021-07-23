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

    ll t,i,j,n,ans;
    cin>>t;
    while(t--){
        cin>>n;
        ans=n/3;
        n=n%3;
        if(n==1)
            cout<<ans+1<<" "<<ans<<endl;
        else if(n==2)
            cout<<ans<<" "<<ans+1<<endl;
        else
            cout<<ans<<" "<<ans<<endl;
    }
return 0;
}
