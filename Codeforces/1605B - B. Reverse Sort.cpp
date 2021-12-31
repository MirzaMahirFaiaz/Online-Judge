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
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        string tmp=s;
        vector<ll> ans;
        sort(tmp.begin(),tmp.end());
        if(s==tmp)
        {
            cout<<0<<endl;
            continue;
        }
        for(i=0; i<n; i++)
        {
            if(s[i]!=tmp[i])
                ans.push_back(i+1);
        }
        cout<<1<<endl;
        cout<<ans.size()<<" ";
        for(auto x:ans)
            cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}
