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
    int arr[n];
    unordered_map<int,int>mp;
    for(j=0;j<n;j++)
        cin>>arr[j];
    for(j=0;j<n;j++)
        mp[arr[j]]++;
    priority_queue<int,vector<int>>pq;

    for(auto it : mp )
        pq.push(it.second);

    int max= pq.top();
    int ans= n-max+1;

    if(n==1 || max==n)
        cout<<"0"<<endl;
    else if(max==1)
        cout<<"-1"<<endl;
    else
        cout<<ans<<endl;

    }

return 0;
}
