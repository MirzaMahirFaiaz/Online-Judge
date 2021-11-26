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

    ll t,i,j,n,l,r,k,in;
    vector<int>vec;
    cin>>t;
    while(t--){
        cin>>n>>l>>r>>k;
        for(i=0;i<n;i++){
            cin>>in;
            vec.push_back(in);
        }
        sort(vec.begin(),vec.end());
        vector<int>::iterator low,it;
        low = lower_bound(vec.begin(),vec.end(),l);

        ll sum = 0,ans=0;
        for(it = low;it != vec.end();it++ ){
            if(sum+*it<=k && *it<=r && *it>=l){
                sum+=*it;
                ans++;
            }
            else
                break;
        }
        cout<<ans<<endl;
        vec.clear();
    }

return 0;
}
