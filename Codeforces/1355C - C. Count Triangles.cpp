//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
ll pre[1500008];
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,a,b,c,d;
    cin>>a>>b>>c>>d;

    for(i=a;i<=b;i++){
        pre[i+b]++;
        pre[i+c+1]--;
    }

    for(i=1;i<1500006;i++){
        pre[i]+=pre[i-1];
    }

    for(i=1500006;i>=1;i--){
        pre[i-1]+=pre[i];
    }
    ll ans =0;
    for(i=c;i<=d;i++){
        ans+=pre[i+1];
    }
    cout<<ans<<endl;


return 0;
}
