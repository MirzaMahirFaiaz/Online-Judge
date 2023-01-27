
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
    string str = "314159265358979323846264338327";

    cin>>t;
    while(t--){
            string s;
            ll cnt=0,i=0;
        cin>>s;
        while(s[i]==str[i] && s.size()>i){
            cnt++;
            i++;

        }
        cout<<i<<endl;
    }



return 0;
}
