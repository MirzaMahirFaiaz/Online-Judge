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
            ll n;
        cin>>n;
        if(n%7==0){
            cout<<n<<endl;
        }
        else{
            ll k = n%7;
            ll x = 7-k;
            if(n%10>=7){
                cout<<n-k<<endl;
            }
            else if(n%10<=3){
                cout<<n+x<<endl;
            }
            else{
                ll z= n%10;
                if(z>=k){
                    cout<<n-k<<endl;
                }
                else{
                    cout<<n+x<<endl;
                }
            }
        }
    }

return 0;
}
