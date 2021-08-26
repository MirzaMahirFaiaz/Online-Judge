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

    ll t,i,j,l,r;
    cin>>t;
    while(t--){
    cin>>l>>r;
    if(r/2<l)
        cout<<r-l<<endl;
    else {
        cout<<r-((r/2)+1)<<endl;
    }
    }
return 0;
}
