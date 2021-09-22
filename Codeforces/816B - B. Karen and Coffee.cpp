//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
int ar[200004];
int arr[200004];
int main()
{

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll i,j,n,k,q,l,r,a,b,mX=-9999;
    cin>>n>>k>>q;
    for(i=0;i<n;i++){
        cin>>l>>r;
        ar[l]++;
        ar[r+1]--;

    }
    for(i=1;i<=200001;i++){
        ar[i]+=ar[i-1];
    }
     for(i=1;i<=200001;i++){
        if(ar[i]>=k)
            arr[i]=1;
    }
    for(i=1;i<=200001;i++){
        arr[i]+=arr[i-1];
    }

    while(q--){
        cin>>a>>b;

        cout<<arr[b]-arr[a-1]<<'\n';
    }

return 0;
}
