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
    string s;
    cin>>s;
    vector<string>v;
    ll l=s.size();
    v.push_back(s);
    for(i=0; i<l; i++)
    {
        string s1=s.substr(0,i+1);
        ll l1=s1.size();
        string s2=s.substr(i+1,l-l1);
        v.push_back(s2+s1);
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
    cout<<v[v.size()-1]<<endl;

return 0;
}
