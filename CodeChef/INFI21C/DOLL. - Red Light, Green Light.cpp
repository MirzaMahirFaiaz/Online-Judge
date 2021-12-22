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

    ll t,i,j,in,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll cnt=0;
        while(n--){
            cin>>in;
            if(k<in)
                cnt++;
        }
        cout<<cnt<<endl;
    }
return 0;
}
