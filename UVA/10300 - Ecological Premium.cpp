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

    ll t,i,a,b,c,total,f;
    cin>>t;
    while(t--){
            cin>>f;
            total=0;
    for(i=0;i<f;i++){
        cin>>a>>b>>c;
        total+=a*c;

    }
     cout<<total<<endl;
    }
return 0;
}
