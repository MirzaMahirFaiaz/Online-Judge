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

    ll t,i,j;
    cin>>t;
    while(t--){
            ll n,k;
        cin>>n>>k;
    string s;
    cin>>s;
    ll lw=0,hg=n-1;
    ll cnt=0;
    while(hg>lw){
        if(s[lw]!=s[hg])
            cnt++;
            hg--;
            lw++;
    }
    if(n%2){
        if(cnt<=k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else{
        if(cnt<=k && (k-cnt)%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}

return 0;
}
