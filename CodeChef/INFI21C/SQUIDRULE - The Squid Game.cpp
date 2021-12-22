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

    ll t,i,j,in,n,sum;
    vector<int>vec;
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        for(i=0;i<n;i++){
            cin>>in;
            vec.push_back(in);
            sum+=in;
        }
        sort(vec.begin(),vec.end());
        sum-=vec[0];
        vec.clear();
        cout<<sum<<endl;
    }

return 0;
}
