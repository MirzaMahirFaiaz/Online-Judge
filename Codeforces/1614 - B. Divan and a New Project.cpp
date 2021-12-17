//Incomplete
//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{
    vector<pair<ll,ll>> vec;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n;
    cin>>t;
    while(t--){
             cin>>n;

        pair<ll,ll> arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i].first;
            arr[i].second=i;
        }

        sort(arr,arr+n);

        ll time=0;
        int ans[n];
        int idx=1;
        for(i=n-1;i>=0;i-=2)
        {
            ll temp = 2*idx;
            time= time + (arr[i].first)*temp;
            ans[arr[i].second]=idx;

            idx++;
        }

        idx=-1;
        for(i=n-2;i>=0;i-=2)
        {
            int temp = 2*abs(idx);
            time = time  +  (arr[i].first)*temp;
            ans[arr[i].second]=idx;

            idx--;
        }

        cout<<time<<endl;
        cout<<0<<' ';
        for(i=0;i<n;i++)
            cout<<ans[i]<<' ';
        cout<<endl;

    }

return 0;
}
