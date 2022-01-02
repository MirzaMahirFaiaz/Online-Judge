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

    ll t,i,j,n;
    cin>>t;
    while(t--){
        cin>>n;
        string a, b;
        ll f= 1;
        cin>>a>>b;
        for(j=n-1;j>=0;j--){
            if(a[j]=='1' && b[j]=='1'){
                cout<<"NO"<<endl;
               f =0;
               break;
            }
        }
        if(f==1)
        cout<<"YES"<<endl;

    }

return 0;
}
