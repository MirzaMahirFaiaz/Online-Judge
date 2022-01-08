//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

void solve(){
    ll n,d,ans;

    cin>>n>>d;
    if(d==0){
        cout<<1<<endl;
    return;
    }
    if(d<=10){
        ans=pow(2,d);
        if(n<ans)
            cout<<n<<endl;
        else
            cout<<ans<<endl;
        return;

    }
    else{
        ans=1024;
        d-=10;
        for(int i=1;i<=d;i++){
            ans=ans*3;
            if(ans>=n){
                cout<<n<<endl;
                return ;
            }
        }
        cout<<ans<<endl;
    }

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n,d;
    cin>>t;
    while(t--){
        solve();
    }

return 0;
}
