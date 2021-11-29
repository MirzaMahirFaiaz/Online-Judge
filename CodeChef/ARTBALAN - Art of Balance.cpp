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

    ll t,i,j,ans,n,mid,temp,arr[27];
    string str;
    cin>>t;
    while(t--){

        memset(arr,0,sizeof arr);
        cin>>str;

        n=str.size();

        for(i=0; i<n; i++)
        {
            arr[str[i]-'A']++;
        }

        sort(arr,arr+26,greater<ll>());

        ans=n;

        for(i=1;i<=26;i++)
        {
            if(n%i==0)
            {
                mid =n/i;
                temp =0;
                for(j=0; j<i; j++)
                {
                    temp+=min(arr[j],mid);
                }
                ans=min(ans,n-temp);
            }
        }
            cout<<ans<<endl;

    }

return 0;
}
