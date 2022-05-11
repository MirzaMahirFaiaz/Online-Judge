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

    ll t,i,j,k;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<string>vec;
        string s;
        for(i=0; i<n; i++)
        {
            cin>>s;
            vec.push_back(s);
        }
        ll ans1=9999999,ans=0;
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                ans=0;
                for(k=0; k<m; k++)
                {
                    ans= ans+abs(vec[i][k]-vec[j][k]);
                }
                ans1= min(ans,ans1);
              //  cout<<"ans1-"<<ans1<<"ans-"<<ans<<"i j k"<<i<<" "<<j<<" "<<k<<endl;
            }
        }
        cout<<ans1<<endl;
    }

    return 0;
}
