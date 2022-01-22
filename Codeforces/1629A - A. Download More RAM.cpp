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

    ll t,i,j,in;
    cin>>t;
    while(t--){
            ll n,k;
        cin>>n>>k;
        ll ans=k;
        vector<int>a,b;
        multimap<int,int> mp;
        for(i=0;i<n;i++){
           cin>>in;
           a.push_back(in);
        }
        for(i=0;i<n;i++){
           cin>>in;
           b.push_back(in);
        }
        for(i=0;i<n;i++){
           mp.insert(pair<int,int>(a[i],b[i]));
        }
//        cout<<"key values"<<endl;
//        for(auto it =mp.begin();it!=mp.end();it++)
//            cout<<it->first<<endl;
//
//        cout<<endl;

        for(auto it =mp.begin();it!=mp.end();it++){
            if(it->first <= ans){

               ans+=(it->second);
            }
            else{
                   //  cout<<ans<<" "<<it->first<<endl;
                break;
            }
        }
        cout<<ans<<endl;
    }

return 0;
}
