//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll t,i,j;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        if(k==0){
            for(i = 0;i<n/2;i++){
                cout<<i<<" "<<(i^(n-1))<<endl;
            }
        }
        else if(k==n-1 and n!=4){
            cout<<n-2<<" "<<n-1<<endl;
            cout<<1<<" "<<n-3<<endl;
            cout<<0<<" "<<2<<endl;
            for(i = 3;i<n/2;i++){
                cout<<i<<" "<<((n-1)^i)<<endl;
            }
        }
        else if(k==n-1 and n==4){
            cout<<-1<<endl;
        }
        else if(k>0 and k<n-1){
            cout<<k<<" "<<n-1<<endl;
            cout<<0<<" "<<((n-1)^k)<<endl;
            for(i = 0;i<n/2;i++){
                if(i!=0 and i!=min(k, ((n-1)^k))){
                    cout<<i<<" "<<((n-1)^i)<<endl;
                }
            }
        }

    }

return 0;
}
