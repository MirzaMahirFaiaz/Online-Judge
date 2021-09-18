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
    string s1,s2,s3,m;
    cin>>s1>>s2>>s3>>m;
    for(i=0;m[i];i++){
        if(m[i]=='1')
            cout<<s1;
        else if(m[i]=='2')
            cout<<s2;
        else
            cout<<s3;
    }
    cout<<endl;

return 0;
}
