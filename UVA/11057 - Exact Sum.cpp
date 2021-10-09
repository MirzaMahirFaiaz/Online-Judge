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


    ll t,i,j,in,m,n,ansi,ansj;
    vector<int>vec;
    while(cin>>n){
        for(i=0;i<n;i++){
            cin>>in;
            vec.push_back(in);
        }
        cin>>m;
        sort(vec.begin(),vec.end());
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                 if(vec[i]+vec[j]==m)
                 {
                     ansi=vec[i];
                     ansj=vec[j];
                 }
            }
        }
        cout<<"Peter should buy books whose prices are "<<ansi<<" and "<<ansj<<"."<<endl;
        cout<<endl;
vec.clear();
    }

return 0;
}
