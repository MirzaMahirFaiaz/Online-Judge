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

    ll t,i,j,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ll r= n/3;
        ll ans = r*m;
        r = n%3;
        if(r==1){
            r= m/3;
            ans+=r;
            r= m%3;
            if(r!=0)
                ans++;
        }
        else if(r==2){
            r= m/3;
            ans+=(r*2);
            r= m%3;
            if(r==1)
                ans++;
                else if(r==2)
                    ans+=2;
        }
        cout<<ans<<endl;
    }



return 0;
}
