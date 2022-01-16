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

    ll t,i,j,n,x,in;
    cin>>t;
    while(t--){
        cin>>n>>x;
        ll sum=0,cnt;
        vector<int>vec;
        for(i=0;i<n;i++){
            cin>>in;
            vec.push_back(in);
            sum+=in;
        }
        sort(vec.begin(),vec.end(),greater<int>());
        if(sum<x)
            cout<<"-1"<<endl;
        else{
            sum=0;
            cnt=0;
            for(auto it= vec.begin();it!=vec.end();it++){
                sum+=(*it);
                cnt++;
                if(sum>=x)
                {
                    cout<<cnt<<endl;
                    break;
                }
            }
        }

    }

return 0;
}
