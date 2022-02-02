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
        int ar[n+3];
        for(i=0;i<n;i++)
            cin>>ar[i];
        int cnt=1;
        int z = ar[n-1];
        for(i=n-2;i>=0;i--)
        {
            if(ar[i]==ar[i+1])
            cnt++;
            else
                break;
        }
        int ans = 0;
        while(i>=0)
        {
            ans++;
            i-=cnt;
            cnt*=2;
            while(i>=0 && ar[i]==z)i--,cnt++;
        }
        cout<<ans<<endl;
    }

return 0;
}
