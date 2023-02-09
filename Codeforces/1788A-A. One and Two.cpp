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
    cin>>t;
    while(t--){
            vector<int>vec;
            ll cnt=0;
        cin>>n;
    for(i=0;i<n;i++){
        cin>>in;
        vec.push_back(in);
        if(in==2){
            cnt++;
        }
    }
    if(cnt%2!=0){
        cout<<"-1"<<endl;
    }
    else{
            cnt/=2;
        for(i=0;i<n;i++){
            if(vec[i]==2){
                cnt--;
            }
            if(cnt==0){
                cout<<i+1<<endl;
                break;
            }
        }
    }


    }



return 0;
}
