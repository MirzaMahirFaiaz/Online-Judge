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

    ll t,i,j,a,b;
    string s;
    char c;
    cin>>s;
    cin>>a>>b;
    c = s[a-1];
    s[a-1]= s[b-1];
    s[b-1]= c;
    cout<<s<<endl;

return 0;
}
