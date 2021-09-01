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

    ll t,i,j,n,m,sum,cnt=0,ans,in;
    vector<int>vec;

    while(1){
        cin>>n;
        sum=0;
        ans=0;
        if(n==0)
            return 0;
        for(i=0;i<n;i++){
            cin>>in;
            vec.push_back(in);
            sum+=in;
        }
        sum=sum/n;
        for(i=0;i<n;i++){

           ans+= abs(sum-vec[i]);
        }
        ans/=2;
        cout<<"Set #"<<++cnt<<endl;
        cout<<"The minimum number of moves is "<<ans<<"."<<endl;
        cout<<endl;
       vec.clear();
    }


return 0;
}
