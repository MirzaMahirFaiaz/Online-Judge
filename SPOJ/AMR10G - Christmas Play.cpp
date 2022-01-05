#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t,n,k,i,min;
   cin>>t;
    while(t--)
    {
        cin>>n>>k;

        int arr[n];

        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        min=arr[k-1]-arr[0];
        for(i=1;i<n-k+1;i++)
        {
            if(arr[k+i-1]-arr[i]<min)
                min=arr[k+i-1]-arr[i];
        }
       cout<<min<<endl;
    }
    return 0;
}
