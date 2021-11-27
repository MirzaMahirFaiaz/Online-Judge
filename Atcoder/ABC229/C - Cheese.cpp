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

    ll t,i,j,n,w,a,b;
    vector<pair<ll,ll>> vec;

    cin>>n>>w;
    for(i=0;i<n;i++){
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }
    sort(vec.begin(),vec.end(),greater<>());
    i=0;
    ll sz = vec.size();
    ll ans=0;
    while(w!=0 && sz>i){
        if(vec[i].second>=w){
          ans+=vec[i].first * w;
          w-=w;
        }
        else{
                ans+= vec[i].first * (vec[i].second);
       w = w- vec[i].second;
        }
        i++;
    }

cout<<ans<<endl;

return 0;
}
