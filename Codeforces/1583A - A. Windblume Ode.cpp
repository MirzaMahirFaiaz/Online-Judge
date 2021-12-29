//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
bool isprime(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n,sum;
    cin>>t;
    while(t--){
        cin>>n;
    vector<ll> a(n);
    sum=0;
    for(i=0;i<n;i++){
        cin>>a[i];sum+=a[i];
    }
    if(!isprime(sum)){
        cout<<n<<endl;
          for(i=0;i<n;i++)
            cout<<i+1<<" ";
        cout<<endl;
       continue;
    }
    ll ind=-1;
    for(i=0;i<n;i++){
       if(a[i]%2!=0){
         ind=i;
         break;
       }
    }
    cout<<n-1<<endl;
    for(i=0;i<n;i++){
        if(i!=ind)
            cout<<i+1<<" ";
    }
    cout<<endl;
}

return 0;
}
