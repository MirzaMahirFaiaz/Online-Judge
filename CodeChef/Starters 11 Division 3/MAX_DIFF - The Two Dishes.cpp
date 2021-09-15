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

    ll t,i,j,n,s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        if(n>=s){
            cout<<s<<endl;
        }
        else{
                i=s-n;
            cout<<n-i<<endl;
        }
    }

return 0;
}
