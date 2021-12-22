//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

ll area(ll h){
    ll k;cin>>k;
    vector<ll> points(k);
    for(int i=0;i<k;i++)
        cin>>points[i];
    ll d=points.back()-points.front();
    ll res=(points.back() - points.front())*h;

    return res;
  }

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j;

    cin>>t;
    while(t--){
      ll w,h;cin>>w>>h;
      ll ans=0;
      ans=area(h);
      ans=max(ans,area(h));
      ans=max(ans,area(w));
      ans=max(ans,area(w));
      cout<<ans<<endl;

    }

return 0;
}
