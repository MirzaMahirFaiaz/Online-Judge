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

    ll t,i,j,n,in;
    vector<int>vec;
    cin>>t;
    while(t--){
            ll ans=1;
    bool die= false;
            cin>>n;
    for(i=0;i<n;i++){
       cin>>in;
       vec.push_back(in);
    }
    for(i=0;i<n;i++){
        if(i>0 && vec[i]==1 && vec[i-1]==1)
            ans+=5;
        else if((vec[i]==1 && i>0 && vec[i-1]==0) || (vec[i]==1 && i==0))
            ans++;
        else if(vec[i]==0 && vec[i-1]==0 && i>0)
        {
           die = true;
        break;
        }
        else
            continue;
    }
    if(die)
        cout<<"-1"<<endl;
    else
        cout<<ans<<endl;

    vec.clear();

    }

return 0;
}
