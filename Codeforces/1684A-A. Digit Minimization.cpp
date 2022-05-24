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
        string s;
        cin>>s;
        vector<int>v;
        ll sz= s.size();
        for(i=0;i<sz;i++)
        {
            v.push_back(s[i]-'0');
        }
        sort(v.begin(),v.end());
        if(s.size()==2)
            cout<<s[1]<<endl;
        else
         cout<<v[0]<<endl;
    }



return 0;
}
