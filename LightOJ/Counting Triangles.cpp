//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

vector<int>vec;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n,pos,ans,in,cs=1;
    cin>>t;
    while(t--){
            ans=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>in;
            vec.push_back(in);
        }
        sort(vec.begin(),vec.end());

        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                ll mustBelessThan=vec[i]+vec[j];
            pos= lower_bound(vec.begin()+j,vec.end(),mustBelessThan)-vec.begin();
            ans+=(pos-1-j);
            }
        }
        cout<<"Case "<<cs<<": ";
        cout<<ans<<endl;
        vec.clear();
        cs++;
    }
return 0;
}
