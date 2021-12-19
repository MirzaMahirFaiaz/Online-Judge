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
            string str;
        cin>>str;
        ll res = (int)(str[0]-'0');
       // cout<<res<<endl;
        res*= (int)(str[2]-'0');
        cout<<res<<endl;

return 0;
}
