#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k,s,i,in;
    cin>>n>>k>>s;
      vector<ll>vec;
    for(i=0;i<n;i++){
        cin>>in;
        vec.push_back(in);
    }
    ll tables=k*s;
    sort(vec.begin(),vec.end(),greater<>());
    ll sum=0,c=0;
    for(i=0;i<n;i++)
    {
        sum+=vec[i];
       c++;
      if(sum>=tables){
            break;
      }
    }
     cout<<c<<endl;
     return 0;
}
