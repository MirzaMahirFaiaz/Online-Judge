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

    ll t,i,j;
    cin>>t;
    while(t--){
            ll sum=0;
        string s;
        cin>>s;
    sum= s[0]+s[1]+s[2]-s[3]-s[4]-s[5];
    if(!sum){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    }



return 0;
}
