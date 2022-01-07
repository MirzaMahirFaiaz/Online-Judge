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

    string s[1000];

    cin>>n;

    for(i = 0;i < n;++i)
        cin>>s[i];

    char c;
     cin>>c;

    for(i = 0;i < n;i++)
        if(s[i][0] == c)
           cout<<s[i]<<endl;



return 0;
}
