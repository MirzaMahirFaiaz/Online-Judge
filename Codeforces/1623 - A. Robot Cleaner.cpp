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

    ll t,i,j,n,m,rb,cb,rd,cd;
    cin>>t;
    while(t--){
        cin>>n>>m>>rb>>cb>>rd>>cd;
        ll r=1,c=1;
        ll cnt = 0;
        while(rd!=rb && cb !=cd){
            if(rb+r>n || rb+r<1)
                r*=-1;
            if(cb+c>m || cb+c<1)
                c*=-1;
            rb+=r;
            cb+=c;
            cnt++;
        }
        cout<<cnt<<endl;
    }

return 0;
}
