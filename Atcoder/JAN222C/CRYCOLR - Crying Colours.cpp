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

    ll t,i,j,n;
    ll r[3],g[3],b[3];
    cin>>t;
    while(t--){
        cin>>n;
        ll ans =0;
        vector<vector<int>>vec(3,vector<int>(3));
       for(i=0;i<3;i++){
        cin>>vec[i][0]>>vec[i][1]>>vec[i][2];
       }
       if(vec[0][0]==n && vec[1][1]==n && vec[2][2]==n){
        cout<<ans<<endl;
        continue;
       }
        ll ls= vec[2][0]+vec[2][1]+vec[1][0];
        ll rs = vec[0][1]+vec[0][2]+vec[1][2];
        cout<<max(ls,rs)<<endl;

    }

return 0;
}
